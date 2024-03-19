%{
#include "Compilator.h"
#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <cstring>
using namespace std;

extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();
void yyerror(const char* s);
%}

%union {
    char* strval;  
    int intval;
    float floatval;
    class AST* astnode;
}

%token <strval> CLASSSTOP CLASSSTART ENDF ENDIF OR AND ENDW ENDFOR BGIN END ASSIGN IF ELSE WHILE FOR TYPEOF EVAL
%token <strval> ID TYPE CONST ADEV FALS DATA METODE INIT
%token <intval> NR
%token <floatval> FLOAT_NR
%token <strval> STRING_VAL
%token <strval> CHAR_VAL

%start algoritm

%left ','
%left OR
%left AND
%left '+' '-'
%left '*' '/'
%left '>' '<' ">=" "<=" "==" "!="

%type<strval> list_param list_param2
%type<strval> functie_par
%type<strval> param param3
%type <astnode> expr expr2
%type <intval> evaluare
%type <strval> tipeof


%%

algoritm : declarari main { printf("Ai facut si tu cv bine.\n"); }
         ;

declarari : tipuri_declarari ';'
          | declarari  tipuri_declarari ';'
          ;

tipuri_declarari : declarare_var 
                 | declarare_func
                 | declarare_clasa
                 ;

declarare_clasa : CLASSSTART ID INTERIORCLASA CLASSSTOP
                ;

INTERIORCLASA : DATA declarare_var METODE declarare_func INIT initializare  
              ;

initializare: ID '(' ')' ';'
            ;

declarare_var : TYPE lista_variabile { adaugaVariabila($1, "tip", 0, 0, 0, yylineno, 0, 0, '0', ""); }
              | TYPE CONST lista_variabile { adaugaVariabila($1, "tip", 0, 1, 0, yylineno, 0, 0, '0', ""); }
              | TYPE lista_variabile2 { adaugaVariabila($1, "tip", 0, 1, 0, yylineno, 0, 0, '0', ""); }
              ;

declarare_func : TYPE ID '(' functie_par ')' interior_functii_cu_param ENDF { adaugaFunctie($1, "tip", $2, $4, yylineno, 0); }
               | TYPE ID '(' ')' interior_functii_fara_param ENDF { adaugaFunctie($1, "tip", $2, "", yylineno, 0); }
               ;

lista_variabile : ID { adaugaVariabila($1, "variabila", 0, 0, 0, yylineno, 0, 0, '0', ""); }
                | lista_variabile ',' ID { adaugaVariabila($3, "variabila", 0, 0, 0, yylineno, 0, 0, '0', ""); }
                | ID '[' NR ']' { adaugaVariabila($1, "variabila", $3, 0, 0, yylineno, 0, 0, '0', ""); }
                | lista_variabile ',' ID '[' NR ']' { adaugaVariabila($3, "variabila", $5, 0, 0, yylineno, 0, 0, '0', ""); }
                ;     

lista_variabile2: ID ASSIGN NR { adaugaVariabila($1, "variabila", 0, 0, 0, yylineno, $3, 0.0, '0', ""); }
              | ID ASSIGN FLOAT_NR { adaugaVariabila($1, "variabila", 0, 0, 0, yylineno, 0, $3, '0', ""); }
              | ID ASSIGN STRING_VAL { adaugaVariabila($1, "variabila", 0, 0, 0, yylineno, 0, 0.0, '0', $3); }
              | ID ASSIGN CHAR_VAL { adaugaVariabila($1, "variabila", 0, 0, 0, yylineno, 0, 0.0, $3[0], ""); }
              ;

functie_par : list_param { }
            | expr2 ',' list_param { }
            | functie_par expr2 { }
            | expr2 { }
            | CONST expr2 ',' list_param  { }
            | CONST expr2 { }
            | CONST expr2 ',' list_param ',' expr2 { }
            ;

interior_functii_cu_param : declarari
                          | declarari ',' statements 
                          | statements
                          ;

interior_functii_fara_param : declarari
                            | declarari ',' statements 
                            ;

list_param : param {$$ = $1;} 
           | list_param ',' param   { $$ = strdup(lipire2Parametrii($1, $3, ",").c_str());}
           ;

param : TYPE ID  { $$ = strdup(lipire2Parametrii($1, $2, " ").c_str());}
      ;

main : BGIN interior_main END
     ;

interior_main : statements ';'
              | interior_main statements ';'
              | tipuri_de_structuri
              | interior_main tipuri_de_structuri
              ;

tipuri_de_structuri : bucla_if
                    | bucla_while
                    | bucla_for
                    ;

bucla_if : IF '(' conditie ')' main ENDIF
         | IF '(' conditie ')' main ELSE main ENDIF
         ;

bucla_while : WHILE '(' conditie ')' main ENDW
            | WHILE '(' ')' main ENDW
            ;

bucla_for : FOR '(' statements ';' conditie ';' cond_for ')' main ENDFOR
          ;

statements : ID ASSIGN expr { 
                verif($1, yylineno, 0,0);
                string tipStanga = getType($1); 
                string tipDreapta = $3->getTip(); 
                if (tipStanga != tipDreapta) {
                    yyerror(("Tipuri incompatibile pentru atribuire la linia " + to_string(yylineno)).c_str());
                }
                int x=$3->Eval(yylineno);
                tabela2($1,x,yylineno,0,0,"");

            }
            | ID '[' NR ']' ASSIGN expr {
                verif($1, yylineno, 1, $3);
                string tipStanga = getType($1);
                string tipDreapta = $6->getTip();
                if (tipStanga != tipDreapta) {
                    yyerror(("Tipuri incompatibile pentru atribuire la linia " + to_string(yylineno)).c_str());
                }
                int x=$6->Eval(yylineno);
                tabela2($1,x,yylineno,0,0,"");
            }
            | ID '.' ID ASSIGN expr  { 
                string tipStanga = $1; 
                string tipDreapta = $5->getTip();
                if (tipStanga != tipDreapta) {
                    yyerror(("Tipuri incompatibile la declarație cu inițializare la linia " + to_string(yylineno)).c_str());
                }
                int x=$5->Eval(yylineno);
            }
            | TYPE ID ASSIGN expr { 
                string tipStanga = $1; 
                string tipDreapta = $4->getTip();
                if (tipStanga != tipDreapta) {
                    yyerror(("Tipuri incompatibile la declarație cu inițializare la linia " + to_string(yylineno)).c_str());
                }
                int x=$4->Eval(yylineno);
            }
            | TYPE ID 
            | TYPE ID '[' NR ']' ASSIGN expr { 
                string tipStanga = $2; 
                string tipDreapta = $7->getTip();
                if (tipStanga != tipDreapta) {
                    yyerror(("Tipuri incompatibile la declarație cu inițializare la linia " + to_string(yylineno)).c_str());
                }
                int x=$7->Eval(yylineno);
            }
            | TYPE ID '.' ID ASSIGN expr { 
                string tipStanga = $2; 
                string tipDreapta = $6->getTip();
                if (tipStanga != tipDreapta) {
                    yyerror(("Tipuri incompatibile la declarație cu inițializare la linia " + to_string(yylineno)).c_str());
                }
                int x=$6->Eval(yylineno);
            }
            | evaluare {printf("Eval: %d\n", $1);}
            | tipeof {printf("TypeOf: %s\n", $1);}
            ;

evaluare : EVAL '(' expr ')'  {$$ = $3->Eval(yylineno); }
         ;

tipeof : TYPEOF '(' expr ')' { string tip = $3->TypeOf(yylineno);
    $$ = strdup(tip.c_str());  }
       ;

conditie : conditie OR conditie
         | conditie AND conditie
         | expr op expr
         ;

op : '>'
   | '<'
   | ">="
   | "<="
   | "=="
   | "!="
   ;

cond_for : ID ASSIGN expr {string tipStanga = getType($1); 
                string tipDreapta = $3->getTip(); 
                if (tipStanga != tipDreapta) {
                    yyerror(("Tipuri incompatibile pentru atribuire la linia " + to_string(yylineno)).c_str());
                }}
         ;

expr2 : expr { $$ = $1; }
      | expr2 ',' expr 
      ;

expr : ID {verif($1, yylineno, 0,0); $$ = new AST($1, NULL, NULL,0, Tip_nod::IDENTIFICATOR);}
     | ADEV {$$ = new AST("true", nullptr, nullptr,0, Tip_nod::BOOL);}
     | FALS {$$ = new AST("false", nullptr, nullptr,0, Tip_nod::BOOL);}
     | NR { $$ = new AST(yytext, nullptr, nullptr,0, Tip_nod::NUMAR);}
     | ID '[' NR ']' {verif($1, yylineno, 1,$3); $$ = new AST($1, NULL, NULL, $3,  Tip_nod::ARRAY);}
     | ID '(' list_param2 ')' {verifFct($1,$3, yylineno);$$ = new AST($1, nullptr,nullptr, 0,Tip_nod::FUNCTIE);} 
     | ID '(' ')' {verifFct($1,"", yylineno);$$ = new AST($1, nullptr,nullptr, 0,Tip_nod::FUNCTIE);}
     | expr '+' expr  {$$ = new AST("+", $1, $3, 0,Tip_nod::OPERATOR);}
     | expr '-' expr {$$ = new AST("-", $1, $3, 0,Tip_nod::OPERATOR);}
     | expr '/' expr {$$ = new AST("/", $1, $3,0, Tip_nod::OPERATOR);}
     | expr '*' expr {$$ = new AST("*", $1, $3, 0,Tip_nod::OPERATOR);}
     ;

list_param2 : param3 {$$ = $1;} 
            | list_param2 ',' param3  { $$ = strdup(lipire2Parametrii($1, $3, ",").c_str());}
            ;

param3 : ID {verif($1, yylineno, 0,0); }
       | ID '[' NR ']' {verif($1, yylineno, 1,$3);}
       | NR {if (yytext != nullptr) {$$= strdup(yytext);} else {$$ = strdup("");}}
       | ADEV
       | FALS
       | ID '(' ')' {verifFct($1,"", yylineno);}
       | ID '(' list_param2 ')' {verifFct($1,$3,yylineno);}
       | param3 '+' param3 
       | param3 '-' param3
       | param3 '/' param3
       | param3 '*' param3
       ;
%%

void yyerror(const char* s) 
{
    printf("error: %s at line:%d\n", s, yylineno);
     /*exit(1);*/
}

int main(int argc, char** argv) 
{
    yyin = fopen(argv[1], "r");
    yyparse();
    printare_variabile();
    printare_functii();
}
