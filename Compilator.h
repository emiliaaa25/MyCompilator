#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

struct ValoriVariabile
{
    int integer;
    float floatable;
    char charable;
    string stringable;
    bool boolable;
};

struct Variabila
{
    string nume;
    string tip;
    int size;
    int ok_const;
    int ok_clasa;
    ValoriVariabile val;
};

struct Parametrii
{
    string tip;
    string nume;
};

enum Tip_nod
{
    OPERATOR,
    IDENTIFICATOR,
    ARRAY,
    NUMAR,
    BOOL,
    STRING,
    CHAR,
    FUNCTIE
};

class AST
{
public:
    string nume;
    AST *st;
    AST *dr;
    int poz_array; //pt array
    Tip_nod nod;

    AST(string nume, AST *st, AST *dr, int nr, Tip_nod type) : nume(nume), st(st), dr(dr),poz_array(nr), nod(type) {}
    int Val_var(const string &s, int yylineno);
    string Tip_var(const string &s);
    int Eval(int yylineno);
    string TypeOf(int yylineno);
    string getTip(); //pt a verifica daca tips tanga= tip dreapta
};

struct Functie
{
    string nume;
    string tip;
    string nume_tip;
    int size;
    int nr_parametrii;
    vector<Parametrii> param;
    int ok_clasa;
    string parametri_functie;
};

vector<Variabila> variabile;
vector<Functie> functii;

void print_error(const string &errMsg) //pentru erori
{
    cerr << errMsg << endl;
}

void verif(const string &s, int yylineno, int vec, int size_vec) //pt a verifica declararea variabilelor si daca sunt bine folosite
{
    bool ok = false;
    Variabila aux;

    for (const auto &var : variabile)
    {
        if (var.nume == s)
        {
            ok = true;
            aux = var;
            break;
        }
    }

    if (!ok)
    {
        print_error("Linia " + to_string(yylineno) + ", variabila " + s + " nu este declarata!");
        exit(0);
    }
    else
    {
        if (vec > 0 && aux.size == 0)
        {
            print_error("Linia " + to_string(yylineno) + ", variabila " + s + " este un array, dar nu e bine declarat!");
            exit(0);
        }
        else if (vec == 1 && aux.size > size_vec)
        {
            print_error("Linia " + to_string(yylineno) + ", variabila " + s + " este un array, dar depaseste dimensiunea data initial!");
            exit(0);
        }
    }
}

string verif1(const string &s) //pentru a verifica parametri decl
{
    bool ok = false;
    Variabila aux;

    for (const auto &var : variabile)
    {
        if (var.nume == s)
        {
            ok = true;
            aux = var;
            break;
        }
    }
    if (ok)
        return aux.tip;
    return "";
}

string verif2(const string &s) //pentru a verifica functii decl
{
    bool ok = false;
    Functie aux;

    for (const auto &func : functii)
    {
        if (func.nume == s)
        {
            ok = true;
            aux = func;
            break;
        }
    }
    if (ok)
        return aux.tip;
    return "";
}
string AST::getTip() {

        if (nod == NUMAR) 
            return "_int"; 
         else if (this->nod == IDENTIFICATOR) 
            return Tip_var(this->nume);
        else
          if (this->nod == BOOL) 
            return "_bool"; 
         else
          if (this->nod == STRING) 
            return "_string"; 
        else  if (this->nod == CHAR) 
            return "char"; 
        else if (this->nod == FUNCTIE) 
            return verif2(this->nume);   
        else  if (this->nod == OPERATOR) 
            return "_int";
        else return "FARA TIP";

    }

void verifFct(const string &nume_functie, const string &param, int yylineno) 
{
    bool ok = false;
    Functie fun;

    for (const auto &func : functii) 
    {
        if (func.nume == nume_functie) 
        {
            ok = true;
            fun = func;
            break;
        }
    }

    if (!ok) 
    {
        print_error("Linia " + to_string(yylineno) + ", functia " + nume_functie + " nu este definita!");
        exit(0);
    }
    
    else{
        string currentType;
        vector<string> parametrii_apel;
        int nr_param=0;
        for (char ch : param) 
        {
            if (ch == ',') 
            {
                if (!currentType.empty()) 
                {
                    parametrii_apel.push_back(currentType);
                    nr_param++;
                    currentType.clear();
                }
            }
            else 
            {
                currentType += ch;
            }
        }
        if (!currentType.empty()) 
        {
            parametrii_apel.push_back(currentType);
            nr_param++;
            
        }

        if (nr_param != fun.nr_parametrii) 
        {
            print_error("Linia " + to_string(yylineno) + ", numar diferit de parametri pentru functia " + nume_functie + "!");
            exit(0);
        }

        for (size_t i = 0; i < nr_param; i++) 
        {
            if (verif1(parametrii_apel[i]) != fun.param[i].tip) 
            {
                print_error("Linia " + to_string(yylineno) + ", tip incompatibil pentru parametrul " + to_string(i + 1) + " in functia " + nume_functie + "!");
                exit(0);
            }
        }
    }
    }


string AST::TypeOf( int yylineno) //pentru a returna tipul
{
  
        if (st == nullptr && dr == nullptr)
        {
            if (nod == IDENTIFICATOR)
            {
                string tip = Tip_var(nume);
                if (tip == "_int")
                    return "_int";
                if (tip == "_bool")
                    return "_bool";
                if (tip == "_float")
                    return "_float";
            }
            else
            {
                Eval(yylineno);
                return " ";
            }
        }
    
    return "Nu se stie ce tip de nod e.";
}

int AST::Eval(int yylineno) //pentru a evalua operatiile
{
    if (st == nullptr && dr == nullptr)
    {
        string tip = Tip_var(nume);
        if (tip == "float" || tip == "bool" || tip == "int")
        {
            return Val_var(nume, yylineno);
        }
        else if (nod == IDENTIFICATOR)
        {
            return Val_var(nume, yylineno);
        }
        else if (nod == NUMAR)
        {
            return stoi(nume);
        }
        else if(nod == ARRAY && poz_array!=0)
        {
            return Val_var(nume,yylineno);
        }
        else
        {
            return 0;
        }
    }
     if (st != nullptr && dr != nullptr)
    {
        int val_stanga = st->Eval(yylineno);
        int val_dreapta = dr->Eval(yylineno);

        if (nume == "+")
            return val_stanga + val_dreapta;
        if (nume == "-")
            return val_stanga - val_dreapta;
        if (nume == "*")
            return val_stanga * val_dreapta;
        if (nume == "/")
        {
            if (val_dreapta != 0)
            {
                return val_stanga / val_dreapta;
            }
            else
            {
                cerr << "Linia " << yylineno << ", impartirea la 0 nu se poate efectua!" << endl;
                exit(0);
            }
        }
    }
    else if (st != nullptr && dr == nullptr)
    {
        if (st != nullptr)
        {
            int val_stanga = st->Eval(yylineno);

            if (nume == "-")
                return -val_stanga;
            if (nume == "+")
                return val_stanga;
        }
    }
    return 0;
}

std::string getType(const std::string& numeVariabila) {
    for (const auto& var : variabile) {
        if (var.nume == numeVariabila) {
            return var.tip;
        }
    }
    return "Necunoscut"; // sau altă valoare implicită, dacă variabila nu este găsită
}

void tabela2(const string& nume, int value, int yylineno, float fvalue, bool bvalue,const string& svalue) {
    for (auto& var : variabile) {
        string tip=getType(var.nume);
        if (var.nume == nume) {
            if (var.tip != tip) {
                    cerr << "Error: La linia " << yylineno << ", variabila " << nume << " are tip diferit." << endl;
            }
            
            if (tip == "_int") {
                var.val.integer = value;
            }  else if (tip == "_bool") {
                var.val.boolable = bvalue;
            }else if (tip == "_float") {
                var.val.floatable = fvalue;
            } else if (tip == "_string") {
                var.val.stringable = svalue;
            } else if (tip == "_char") {
                var.val.charable = svalue.empty() ? '\0' : svalue[0];
            }
            break;
        }
    }
}
int AST::Val_var(const string &s, int yylineno) //pt afisat valoarea unei variabile
{
    for (const auto &var : variabile)
    {
        if (var.nume == s)
        {
            if (var.size)
            {
                cerr << "Error: La linia " << yylineno << ", vectorul " << s << " nu a fost folosit corect." << endl;
                exit(EXIT_FAILURE);
            }
            return var.val.integer;
        }
    }
    cerr << "Error: La linia " << yylineno << ", variabila " << s << " nu este gasita." << endl;
    exit(EXIT_FAILURE);
}

string AST::Tip_var(const string &s) //pt afisat tipul unei variabile
{
    for (const auto &var : variabile)
    {
        if (var.nume == s)
        {
            return var.tip;
        }
    }
    return "Nu se cunoaste tipul.";
}

string lipire2Parametrii(const string &sir1, const string &sir2, const string &inter) //pentru liste de parametri
{
    string lipire = sir1 + inter + sir2;
    return lipire;
}

string lipire3Parametrii(const string &sir1, const string &sir2, const string &sir3, const string &inter) //pentru liste de parametri
{
    string lipire = sir1 + inter + sir2 + inter + sir3;
    return lipire;
}

void adaugaVariabila(const string &nume, const string &tip, int size, int ok_const, int ok_clasa, int yylineo, int integer, float floatable, const char charable, const string &stringable) //pt adaugare variabile
{
    if (tip == "tip")
    {
        int poz = variabile.size() - 1;
        while (poz >= 0 && variabile[poz].tip.empty())
        {
            variabile[poz].tip = nume;
            variabile[poz].ok_clasa = ok_clasa;
            variabile[poz].ok_const = ok_const;
            poz--;
        }
    }
    else if (tip == "variabila")
    {
        bool ok = false;
        for (const auto &var1 : variabile)
        {
            if (var1.nume == nume)
            {
                ok = true;
                break;
            }
        }
        if (ok)
        {
            cout << "Variabila " << nume << " a fost declarata din nou la linia " << yylineo << endl;
            exit(1);
        }
        else
        {
            Variabila var;
            var.nume = nume;
            var.size = size;
            var.ok_const = ok_const;
            var.ok_clasa = ok_clasa;
            var.val.integer = integer;
            var.val.floatable = floatable;
            var.val.charable = charable;
            var.val.stringable = stringable;
            variabile.push_back(var);
        }
    }
}

void adaugaFunctie(const string &nume_tip, const string &tip, const string &nume, const string &param, int yylineno, int ok_clasa) 
{
    if (tip == "tip") {
        for (const auto &func : functii) {
            if (func.nume == nume) {
                cerr << "Error: La linia " << yylineno << ", functia " << nume << " este deja definita." << endl;
                exit(EXIT_FAILURE);
            }
        }

        Functie functie_noua;
        functie_noua.nume = nume;
        functie_noua.tip = nume_tip;
        functie_noua.ok_clasa = ok_clasa;
        functie_noua.nr_parametrii=0;
        string currentParam;
        string currentType;
        bool isType = false;
    
        for (char ch : param + ',') {
            if (ch == ',' || ch == ';') {
                if (!currentType.empty() && !currentParam.empty()) {
                    functie_noua.param.push_back({currentType, currentParam});
                functie_noua.nr_parametrii++;
                currentType.clear();
                currentParam.clear();
                isType = false;}
            } else if (ch == ' ') {
                isType=true;
            
            } else  {
                if (isType==false) {
                    currentType += ch;
                } 
                else if (isType==true){
                    currentParam += ch;
                }
            }
        }
        functii.push_back(functie_noua);
    }
}


void printare_variabile() //pt printat variabile in tabela_variabile
{
    ofstream f("tabela_variabile.txt");
    if (!f)
    {
        cerr << "Nu se poate deschide fisierul dorit." << endl;
        return;
    }

    for (const auto &var : variabile)
    {
        f << var.tip << " " << var.nume << " ";
        if (var.tip == "_int")
        {
            f << var.val.integer;
        }
        else if (var.tip == "_float")
        {
            f << var.val.floatable;
        }
        else if (var.tip == "_bool")
        {
            f << var.val.boolable;
        }
        else if (var.tip == "_string")
        {
            f << var.val.stringable;
        }
        else if (var.tip == "_char")
        {
            f << var.val.charable;
        }
        f << "\n";
    }
    f.close();
}

void printare_functii() //pt printat functii in tabela_functii
{
    ofstream f("tabela_functii.txt");
    if (!f)
    {
        cerr << "Nu se poate deschide fisierul dorit." << endl;
        return;
    }

    for (const auto& func : functii)
    {
        f << func.tip << " " << func.nume << " (";
        for (int j = 0; j < func.nr_parametrii; j++)
        {
            f << func.param[j].tip << " " << func.param[j].nume;
            if (j < func.nr_parametrii - 1)
                f << ",";
        }
        f << ")\n";
    }
    f.close();
}
