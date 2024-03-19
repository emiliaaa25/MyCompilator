/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "limbaj.y"

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

#line 87 "limbaj.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "limbaj.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_CLASSSTOP = 3,                  /* CLASSSTOP  */
  YYSYMBOL_CLASSSTART = 4,                 /* CLASSSTART  */
  YYSYMBOL_ENDF = 5,                       /* ENDF  */
  YYSYMBOL_ENDIF = 6,                      /* ENDIF  */
  YYSYMBOL_OR = 7,                         /* OR  */
  YYSYMBOL_AND = 8,                        /* AND  */
  YYSYMBOL_ENDW = 9,                       /* ENDW  */
  YYSYMBOL_ENDFOR = 10,                    /* ENDFOR  */
  YYSYMBOL_BGIN = 11,                      /* BGIN  */
  YYSYMBOL_END = 12,                       /* END  */
  YYSYMBOL_ASSIGN = 13,                    /* ASSIGN  */
  YYSYMBOL_IF = 14,                        /* IF  */
  YYSYMBOL_ELSE = 15,                      /* ELSE  */
  YYSYMBOL_WHILE = 16,                     /* WHILE  */
  YYSYMBOL_FOR = 17,                       /* FOR  */
  YYSYMBOL_TYPEOF = 18,                    /* TYPEOF  */
  YYSYMBOL_EVAL = 19,                      /* EVAL  */
  YYSYMBOL_ID = 20,                        /* ID  */
  YYSYMBOL_TYPE = 21,                      /* TYPE  */
  YYSYMBOL_CONST = 22,                     /* CONST  */
  YYSYMBOL_ADEV = 23,                      /* ADEV  */
  YYSYMBOL_FALS = 24,                      /* FALS  */
  YYSYMBOL_DATA = 25,                      /* DATA  */
  YYSYMBOL_METODE = 26,                    /* METODE  */
  YYSYMBOL_INIT = 27,                      /* INIT  */
  YYSYMBOL_NR = 28,                        /* NR  */
  YYSYMBOL_FLOAT_NR = 29,                  /* FLOAT_NR  */
  YYSYMBOL_STRING_VAL = 30,                /* STRING_VAL  */
  YYSYMBOL_CHAR_VAL = 31,                  /* CHAR_VAL  */
  YYSYMBOL_32_ = 32,                       /* ','  */
  YYSYMBOL_33_ = 33,                       /* '+'  */
  YYSYMBOL_34_ = 34,                       /* '-'  */
  YYSYMBOL_35_ = 35,                       /* '*'  */
  YYSYMBOL_36_ = 36,                       /* '/'  */
  YYSYMBOL_37_ = 37,                       /* '>'  */
  YYSYMBOL_38_ = 38,                       /* '<'  */
  YYSYMBOL_39_ = 39,                       /* ">="  */
  YYSYMBOL_40_ = 40,                       /* "<="  */
  YYSYMBOL_41_ = 41,                       /* "=="  */
  YYSYMBOL_42_ = 42,                       /* "!="  */
  YYSYMBOL_43_ = 43,                       /* ';'  */
  YYSYMBOL_44_ = 44,                       /* '('  */
  YYSYMBOL_45_ = 45,                       /* ')'  */
  YYSYMBOL_46_ = 46,                       /* '['  */
  YYSYMBOL_47_ = 47,                       /* ']'  */
  YYSYMBOL_48_ = 48,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 49,                  /* $accept  */
  YYSYMBOL_algoritm = 50,                  /* algoritm  */
  YYSYMBOL_declarari = 51,                 /* declarari  */
  YYSYMBOL_tipuri_declarari = 52,          /* tipuri_declarari  */
  YYSYMBOL_declarare_clasa = 53,           /* declarare_clasa  */
  YYSYMBOL_INTERIORCLASA = 54,             /* INTERIORCLASA  */
  YYSYMBOL_initializare = 55,              /* initializare  */
  YYSYMBOL_declarare_var = 56,             /* declarare_var  */
  YYSYMBOL_declarare_func = 57,            /* declarare_func  */
  YYSYMBOL_lista_variabile = 58,           /* lista_variabile  */
  YYSYMBOL_lista_variabile2 = 59,          /* lista_variabile2  */
  YYSYMBOL_functie_par = 60,               /* functie_par  */
  YYSYMBOL_interior_functii_cu_param = 61, /* interior_functii_cu_param  */
  YYSYMBOL_interior_functii_fara_param = 62, /* interior_functii_fara_param  */
  YYSYMBOL_list_param = 63,                /* list_param  */
  YYSYMBOL_param = 64,                     /* param  */
  YYSYMBOL_main = 65,                      /* main  */
  YYSYMBOL_interior_main = 66,             /* interior_main  */
  YYSYMBOL_tipuri_de_structuri = 67,       /* tipuri_de_structuri  */
  YYSYMBOL_bucla_if = 68,                  /* bucla_if  */
  YYSYMBOL_bucla_while = 69,               /* bucla_while  */
  YYSYMBOL_bucla_for = 70,                 /* bucla_for  */
  YYSYMBOL_statements = 71,                /* statements  */
  YYSYMBOL_evaluare = 72,                  /* evaluare  */
  YYSYMBOL_tipeof = 73,                    /* tipeof  */
  YYSYMBOL_conditie = 74,                  /* conditie  */
  YYSYMBOL_op = 75,                        /* op  */
  YYSYMBOL_cond_for = 76,                  /* cond_for  */
  YYSYMBOL_expr2 = 77,                     /* expr2  */
  YYSYMBOL_expr = 78,                      /* expr  */
  YYSYMBOL_list_param2 = 79,               /* list_param2  */
  YYSYMBOL_param3 = 80                     /* param3  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   287

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  98
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  223

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   290


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      44,    45,    35,    33,    32,    34,    48,    36,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    43,
      38,     2,    37,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    46,     2,    47,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    39,    40,    41,
      42
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    50,    50,    53,    54,    57,    58,    59,    62,    65,
      68,    71,    72,    73,    76,    77,    80,    81,    82,    83,
      86,    87,    88,    89,    92,    93,    94,    95,    96,    97,
      98,   101,   102,   103,   106,   107,   110,   111,   114,   117,
     120,   121,   122,   123,   126,   127,   128,   131,   132,   135,
     136,   139,   142,   153,   163,   171,   179,   180,   188,   196,
     197,   200,   203,   207,   208,   209,   212,   213,   214,   215,
     216,   217,   220,   227,   228,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   244,   245,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "CLASSSTOP",
  "CLASSSTART", "ENDF", "ENDIF", "OR", "AND", "ENDW", "ENDFOR", "BGIN",
  "END", "ASSIGN", "IF", "ELSE", "WHILE", "FOR", "TYPEOF", "EVAL", "ID",
  "TYPE", "CONST", "ADEV", "FALS", "DATA", "METODE", "INIT", "NR",
  "FLOAT_NR", "STRING_VAL", "CHAR_VAL", "','", "'+'", "'-'", "'*'", "'/'",
  "'>'", "'<'", "\">=\"", "\"<=\"", "\"==\"", "\"!=\"", "';'", "'('",
  "')'", "'['", "']'", "'.'", "$accept", "algoritm", "declarari",
  "tipuri_declarari", "declarare_clasa", "INTERIORCLASA", "initializare",
  "declarare_var", "declarare_func", "lista_variabile", "lista_variabile2",
  "functie_par", "interior_functii_cu_param",
  "interior_functii_fara_param", "list_param", "param", "main",
  "interior_main", "tipuri_de_structuri", "bucla_if", "bucla_while",
  "bucla_for", "statements", "evaluare", "tipeof", "conditie", "op",
  "cond_for", "expr2", "expr", "list_param2", "param3", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-89)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-57)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      35,    11,     4,    20,   122,    -6,   -89,   -89,   -89,    26,
      27,    37,    28,   -89,   -89,   204,    29,   -89,   -89,    55,
      86,   145,    57,    77,    62,    28,    94,    76,    97,   114,
     135,   147,    15,   119,   180,   -89,   -89,   -89,   -89,   101,
     -89,   -89,   -89,    72,   138,   -89,   -89,   -89,   -89,   -89,
      -8,   146,   184,   -89,   -89,   -89,    35,    67,   161,   -89,
     177,   193,   166,   170,   184,    83,   212,   184,   184,   184,
     189,   218,    16,   -89,   -89,   196,   -89,     2,   219,    93,
     213,   -89,   210,    12,   238,   127,   214,   223,   182,   184,
     184,   184,   184,   -89,   217,    10,   148,   236,    14,   205,
     116,   120,   193,   202,   237,   184,   224,   231,   -89,   233,
     227,    81,   -89,   -89,   -89,   -89,   -20,   201,   208,   182,
     212,   -89,   112,    61,   251,   -89,   184,   -89,   161,   193,
     100,   100,   -89,   -89,   211,   184,   184,   236,   -89,   -89,
     -89,   -89,   -89,   -89,   184,   248,   236,   184,   -89,   -89,
     246,   184,   193,   215,   247,   220,   241,    95,   235,   191,
     -89,   191,   191,   191,   191,   -89,   234,   -89,     6,   212,
     -89,   -89,   257,   -89,    17,   193,   -89,   258,     0,   184,
     193,   255,   184,   225,   -89,   -89,   -18,   226,   201,   142,
     142,   -89,   -89,   182,   139,   242,   -89,   -89,   236,   -89,
     252,   193,   184,   193,   229,   -89,   -89,   214,   228,   230,
     269,   263,   239,   193,   240,   255,   -89,   184,   236,   -89,
     193,   268,   -89
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     7,     5,     6,     0,
      16,     0,    11,    13,     1,     0,     0,     2,     3,     0,
       0,     0,     0,     0,    16,    12,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    42,    44,    45,    46,     0,
      59,    60,     4,     0,     0,     8,    20,    21,    22,    23,
      75,     0,     0,    76,    77,    78,     0,     0,    24,    36,
      27,    73,     0,    17,     0,     0,     0,     0,     0,     0,
       0,     0,    56,    39,    43,     0,    40,    16,     0,     0,
       0,    38,    29,    34,     0,     0,    26,     0,     0,     0,
       0,     0,     0,    18,     0,     0,     0,     0,     0,     0,
       0,     0,    52,     0,     0,     0,     0,     0,    41,     0,
       0,    88,    91,    92,    90,    81,     0,    86,     0,     0,
       0,    15,     0,    31,     0,    33,     0,    37,    25,    74,
      82,    83,    85,    84,     0,     0,     0,     0,    66,    67,
      68,    69,    70,    71,     0,     0,     0,     0,    62,    61,
       0,     0,    55,     0,     0,     0,     0,     0,     0,     0,
      80,     0,     0,     0,     0,    79,    28,    35,    16,     0,
      14,    19,    63,    64,     0,    65,    50,     0,     0,     0,
      54,     0,     0,     0,     9,    93,     0,     0,    87,    95,
      96,    98,    97,     0,     0,     0,    32,    47,     0,    49,
       0,    53,     0,    58,     0,    94,    89,    30,    78,     0,
       0,     0,     0,    57,     0,    18,    48,     0,     0,    10,
      72,     0,    51
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -89,   -89,   -43,     1,   -89,   -89,   -89,   260,   203,   271,
     -89,   -89,   -89,   -89,   -78,   -84,   -88,   -89,   253,   -89,
     -89,   -89,   -32,   -89,   -89,   -61,   -89,   -89,   -51,   -22,
     123,   -63
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,     5,     6,    20,   184,     7,     8,    12,
      13,    57,   124,    84,    58,    59,    17,    34,    35,    36,
      37,    38,    39,    40,    41,    95,   144,   212,    60,    96,
     116,   117
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      61,    82,    75,   127,    98,    16,    86,   135,   136,   145,
     128,   -56,   159,    83,   159,    21,     1,   135,   136,   194,
      14,   135,   136,   197,    10,   160,    11,   205,    69,   105,
      61,     9,   198,     2,    99,    61,    79,    18,    80,     1,
      21,   166,   123,   200,   120,   100,   101,   102,    23,   174,
      22,    19,   195,   125,   107,   137,     2,    24,   177,   146,
      26,    70,   106,    71,   107,     1,   129,   130,   131,   132,
     133,    22,    42,    23,   172,   173,    43,    50,    51,    52,
      53,    54,     2,   152,    16,    55,   178,    50,   167,    45,
      53,    54,    77,   169,    11,    55,   188,   129,   189,   190,
     191,   192,    56,    50,   129,    62,    53,    54,    23,   127,
     210,    55,    85,   111,    63,   111,   112,   113,   112,   113,
      64,   114,   175,   114,    16,   157,     1,   158,    97,   180,
     221,     1,   168,    15,    11,    91,    92,   196,   115,    72,
     185,    65,   207,     2,    76,    30,    31,    32,   122,    89,
      90,    91,    92,    89,    90,    91,    92,   201,    66,    50,
     203,   148,    53,    54,    78,   149,    81,   208,    47,    48,
      49,    61,   152,    46,    47,    48,    49,   163,   164,    67,
     213,    89,    90,    91,    92,   138,   139,   140,   141,   142,
     143,    68,    73,    87,    27,   220,    28,    29,    30,    31,
      32,    33,    50,    51,    50,    53,    54,    53,    54,    88,
      55,   111,    55,    93,   112,   113,    94,   103,    27,   114,
      28,    29,    30,    31,    32,    33,    89,    90,    91,    92,
      30,    31,    32,    33,   161,   162,   163,   164,   104,   108,
     109,   118,   119,   121,    51,   134,   126,    15,   147,   150,
     151,   154,   153,   155,   156,   165,   170,   176,   171,   179,
     182,   183,   181,   187,    22,   136,   193,   199,   202,   204,
     209,   -20,   211,   206,   214,   216,   217,   215,   222,    44,
     186,   110,    25,   219,   218,     0,     0,    74
};

static const yytype_int16 yycheck[] =
{
      22,    52,    34,    87,    65,     4,    57,     7,     8,    97,
      88,     5,    32,    56,    32,    13,     4,     7,     8,    13,
       0,     7,     8,     6,    20,    45,    22,    45,    13,    13,
      52,    20,    15,    21,    66,    57,    44,    43,    46,     4,
      13,   119,    85,    43,    32,    67,    68,    69,    46,   137,
      44,    25,    46,    85,    48,    45,    21,    20,   146,    45,
      32,    46,    46,    48,    48,     4,    88,    89,    90,    91,
      92,    44,    43,    46,   135,   136,    21,    20,    21,    22,
      23,    24,    21,   105,    83,    28,   147,    20,   120,     3,
      23,    24,    20,    32,    22,    28,   159,   119,   161,   162,
     163,   164,    45,    20,   126,    28,    23,    24,    46,   193,
     198,    28,    45,    20,    20,    20,    23,    24,    23,    24,
      44,    28,   144,    28,   123,    44,     4,    46,    45,   151,
     218,     4,    20,    11,    22,    35,    36,   169,    45,    20,
      45,    44,   193,    21,    43,    18,    19,    20,    21,    33,
      34,    35,    36,    33,    34,    35,    36,   179,    44,    20,
     182,    45,    23,    24,    26,    45,    20,    28,    29,    30,
      31,   193,   194,    28,    29,    30,    31,    35,    36,    44,
     202,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    44,    12,    32,    14,   217,    16,    17,    18,    19,
      20,    21,    20,    21,    20,    23,    24,    23,    24,    32,
      28,    20,    28,    47,    23,    24,    46,    28,    14,    28,
      16,    17,    18,    19,    20,    21,    33,    34,    35,    36,
      18,    19,    20,    21,    33,    34,    35,    36,    20,    43,
      21,    28,    32,     5,    21,    28,    32,    11,    43,    47,
      13,    20,    28,    20,    27,    47,     5,     9,    47,    13,
      13,    20,    47,    28,    44,     8,    32,     9,    13,    44,
      28,    43,    20,    47,    45,     6,    13,    47,    10,    19,
     157,    78,    11,    43,    45,    -1,    -1,    34
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,    21,    50,    51,    52,    53,    56,    57,    20,
      20,    22,    58,    59,     0,    11,    52,    65,    43,    25,
      54,    13,    44,    46,    20,    58,    32,    14,    16,    17,
      18,    19,    20,    21,    66,    67,    68,    69,    70,    71,
      72,    73,    43,    21,    56,     3,    28,    29,    30,    31,
      20,    21,    22,    23,    24,    28,    45,    60,    63,    64,
      77,    78,    28,    20,    44,    44,    44,    44,    44,    13,
      46,    48,    20,    12,    67,    71,    43,    20,    26,    44,
      46,    20,    77,    51,    62,    45,    77,    32,    32,    33,
      34,    35,    36,    47,    46,    74,    78,    45,    74,    71,
      78,    78,    78,    28,    20,    13,    46,    48,    43,    21,
      57,    20,    23,    24,    28,    45,    79,    80,    28,    32,
      32,     5,    21,    51,    61,    71,    32,    64,    63,    78,
      78,    78,    78,    78,    28,     7,     8,    45,    37,    38,
      39,    40,    41,    42,    75,    65,    45,    43,    45,    45,
      47,    13,    78,    28,    20,    20,    27,    44,    46,    32,
      45,    33,    34,    35,    36,    47,    63,    71,    20,    32,
       5,    47,    74,    74,    65,    78,     9,    65,    74,    13,
      78,    47,    13,    20,    55,    45,    79,    28,    80,    80,
      80,    80,    80,    32,    13,    46,    71,     6,    15,     9,
      43,    78,    13,    78,    44,    45,    47,    77,    28,    28,
      65,    20,    76,    78,    45,    47,     6,    13,    45,    43,
      78,    65,    10
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    51,    51,    52,    52,    52,    53,    54,
      55,    56,    56,    56,    57,    57,    58,    58,    58,    58,
      59,    59,    59,    59,    60,    60,    60,    60,    60,    60,
      60,    61,    61,    61,    62,    62,    63,    63,    64,    65,
      66,    66,    66,    66,    67,    67,    67,    68,    68,    69,
      69,    70,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    72,    73,    74,    74,    74,    75,    75,    75,    75,
      75,    75,    76,    77,    77,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    79,    79,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     3,     1,     1,     1,     4,     6,
       4,     2,     3,     2,     7,     6,     1,     3,     4,     6,
       3,     3,     3,     3,     1,     3,     2,     1,     4,     2,
       6,     1,     3,     1,     1,     3,     1,     3,     2,     3,
       2,     3,     1,     2,     1,     1,     1,     6,     8,     6,
       5,    10,     3,     6,     5,     4,     2,     7,     6,     1,
       1,     4,     4,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     1,     1,     1,     1,     4,
       4,     3,     3,     3,     3,     3,     1,     3,     1,     4,
       1,     1,     1,     3,     4,     3,     3,     3,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* algoritm: declarari main  */
#line 50 "limbaj.y"
                          { printf("Ai facut si tu cv bine.\n"); }
#line 1311 "limbaj.tab.c"
    break;

  case 11: /* declarare_var: TYPE lista_variabile  */
#line 71 "limbaj.y"
                                     { adaugaVariabila((yyvsp[-1].strval), "tip", 0, 0, 0, yylineno, 0, 0, '0', ""); }
#line 1317 "limbaj.tab.c"
    break;

  case 12: /* declarare_var: TYPE CONST lista_variabile  */
#line 72 "limbaj.y"
                                           { adaugaVariabila((yyvsp[-2].strval), "tip", 0, 1, 0, yylineno, 0, 0, '0', ""); }
#line 1323 "limbaj.tab.c"
    break;

  case 13: /* declarare_var: TYPE lista_variabile2  */
#line 73 "limbaj.y"
                                      { adaugaVariabila((yyvsp[-1].strval), "tip", 0, 1, 0, yylineno, 0, 0, '0', ""); }
#line 1329 "limbaj.tab.c"
    break;

  case 14: /* declarare_func: TYPE ID '(' functie_par ')' interior_functii_cu_param ENDF  */
#line 76 "limbaj.y"
                                                                            { adaugaFunctie((yyvsp[-6].strval), "tip", (yyvsp[-5].strval), (yyvsp[-3].strval), yylineno, 0); }
#line 1335 "limbaj.tab.c"
    break;

  case 15: /* declarare_func: TYPE ID '(' ')' interior_functii_fara_param ENDF  */
#line 77 "limbaj.y"
                                                                  { adaugaFunctie((yyvsp[-5].strval), "tip", (yyvsp[-4].strval), "", yylineno, 0); }
#line 1341 "limbaj.tab.c"
    break;

  case 16: /* lista_variabile: ID  */
#line 80 "limbaj.y"
                     { adaugaVariabila((yyvsp[0].strval), "variabila", 0, 0, 0, yylineno, 0, 0, '0', ""); }
#line 1347 "limbaj.tab.c"
    break;

  case 17: /* lista_variabile: lista_variabile ',' ID  */
#line 81 "limbaj.y"
                                         { adaugaVariabila((yyvsp[0].strval), "variabila", 0, 0, 0, yylineno, 0, 0, '0', ""); }
#line 1353 "limbaj.tab.c"
    break;

  case 18: /* lista_variabile: ID '[' NR ']'  */
#line 82 "limbaj.y"
                                { adaugaVariabila((yyvsp[-3].strval), "variabila", (yyvsp[-1].intval), 0, 0, yylineno, 0, 0, '0', ""); }
#line 1359 "limbaj.tab.c"
    break;

  case 19: /* lista_variabile: lista_variabile ',' ID '[' NR ']'  */
#line 83 "limbaj.y"
                                                    { adaugaVariabila((yyvsp[-3].strval), "variabila", (yyvsp[-1].intval), 0, 0, yylineno, 0, 0, '0', ""); }
#line 1365 "limbaj.tab.c"
    break;

  case 20: /* lista_variabile2: ID ASSIGN NR  */
#line 86 "limbaj.y"
                               { adaugaVariabila((yyvsp[-2].strval), "variabila", 0, 0, 0, yylineno, (yyvsp[0].intval), 0.0, '0', ""); }
#line 1371 "limbaj.tab.c"
    break;

  case 21: /* lista_variabile2: ID ASSIGN FLOAT_NR  */
#line 87 "limbaj.y"
                                   { adaugaVariabila((yyvsp[-2].strval), "variabila", 0, 0, 0, yylineno, 0, (yyvsp[0].floatval), '0', ""); }
#line 1377 "limbaj.tab.c"
    break;

  case 22: /* lista_variabile2: ID ASSIGN STRING_VAL  */
#line 88 "limbaj.y"
                                     { adaugaVariabila((yyvsp[-2].strval), "variabila", 0, 0, 0, yylineno, 0, 0.0, '0', (yyvsp[0].strval)); }
#line 1383 "limbaj.tab.c"
    break;

  case 23: /* lista_variabile2: ID ASSIGN CHAR_VAL  */
#line 89 "limbaj.y"
                                   { adaugaVariabila((yyvsp[-2].strval), "variabila", 0, 0, 0, yylineno, 0, 0.0, (yyvsp[0].strval)[0], ""); }
#line 1389 "limbaj.tab.c"
    break;

  case 24: /* functie_par: list_param  */
#line 92 "limbaj.y"
                         { }
#line 1395 "limbaj.tab.c"
    break;

  case 25: /* functie_par: expr2 ',' list_param  */
#line 93 "limbaj.y"
                                   { }
#line 1401 "limbaj.tab.c"
    break;

  case 26: /* functie_par: functie_par expr2  */
#line 94 "limbaj.y"
                                { }
#line 1407 "limbaj.tab.c"
    break;

  case 27: /* functie_par: expr2  */
#line 95 "limbaj.y"
                    { }
#line 1413 "limbaj.tab.c"
    break;

  case 28: /* functie_par: CONST expr2 ',' list_param  */
#line 96 "limbaj.y"
                                          { }
#line 1419 "limbaj.tab.c"
    break;

  case 29: /* functie_par: CONST expr2  */
#line 97 "limbaj.y"
                          { }
#line 1425 "limbaj.tab.c"
    break;

  case 30: /* functie_par: CONST expr2 ',' list_param ',' expr2  */
#line 98 "limbaj.y"
                                                   { }
#line 1431 "limbaj.tab.c"
    break;

  case 36: /* list_param: param  */
#line 110 "limbaj.y"
                   {(yyval.strval) = (yyvsp[0].strval);}
#line 1437 "limbaj.tab.c"
    break;

  case 37: /* list_param: list_param ',' param  */
#line 111 "limbaj.y"
                                    { (yyval.strval) = strdup(lipire2Parametrii((yyvsp[-2].strval), (yyvsp[0].strval), ",").c_str());}
#line 1443 "limbaj.tab.c"
    break;

  case 38: /* param: TYPE ID  */
#line 114 "limbaj.y"
                 { (yyval.strval) = strdup(lipire2Parametrii((yyvsp[-1].strval), (yyvsp[0].strval), " ").c_str());}
#line 1449 "limbaj.tab.c"
    break;

  case 52: /* statements: ID ASSIGN expr  */
#line 142 "limbaj.y"
                            { 
                verif((yyvsp[-2].strval), yylineno, 0,0);
                string tipStanga = getType((yyvsp[-2].strval)); 
                string tipDreapta = (yyvsp[0].astnode)->getTip(); 
                if (tipStanga != tipDreapta) {
                    yyerror(("Tipuri incompatibile pentru atribuire la linia " + to_string(yylineno)).c_str());
                }
                int x=(yyvsp[0].astnode)->Eval(yylineno);
                tabela2((yyvsp[-2].strval),x,yylineno,0,0,"");

            }
#line 1465 "limbaj.tab.c"
    break;

  case 53: /* statements: ID '[' NR ']' ASSIGN expr  */
#line 153 "limbaj.y"
                                        {
                verif((yyvsp[-5].strval), yylineno, 1, (yyvsp[-3].intval));
                string tipStanga = getType((yyvsp[-5].strval));
                string tipDreapta = (yyvsp[0].astnode)->getTip();
                if (tipStanga != tipDreapta) {
                    yyerror(("Tipuri incompatibile pentru atribuire la linia " + to_string(yylineno)).c_str());
                }
                int x=(yyvsp[0].astnode)->Eval(yylineno);
                tabela2((yyvsp[-5].strval),x,yylineno,0,0,"");
            }
#line 1480 "limbaj.tab.c"
    break;

  case 54: /* statements: ID '.' ID ASSIGN expr  */
#line 163 "limbaj.y"
                                     { 
                string tipStanga = (yyvsp[-4].strval); 
                string tipDreapta = (yyvsp[0].astnode)->getTip();
                if (tipStanga != tipDreapta) {
                    yyerror(("Tipuri incompatibile la declarație cu inițializare la linia " + to_string(yylineno)).c_str());
                }
                int x=(yyvsp[0].astnode)->Eval(yylineno);
            }
#line 1493 "limbaj.tab.c"
    break;

  case 55: /* statements: TYPE ID ASSIGN expr  */
#line 171 "limbaj.y"
                                  { 
                string tipStanga = (yyvsp[-3].strval); 
                string tipDreapta = (yyvsp[0].astnode)->getTip();
                if (tipStanga != tipDreapta) {
                    yyerror(("Tipuri incompatibile la declarație cu inițializare la linia " + to_string(yylineno)).c_str());
                }
                int x=(yyvsp[0].astnode)->Eval(yylineno);
            }
#line 1506 "limbaj.tab.c"
    break;

  case 57: /* statements: TYPE ID '[' NR ']' ASSIGN expr  */
#line 180 "limbaj.y"
                                             { 
                string tipStanga = (yyvsp[-5].strval); 
                string tipDreapta = (yyvsp[0].astnode)->getTip();
                if (tipStanga != tipDreapta) {
                    yyerror(("Tipuri incompatibile la declarație cu inițializare la linia " + to_string(yylineno)).c_str());
                }
                int x=(yyvsp[0].astnode)->Eval(yylineno);
            }
#line 1519 "limbaj.tab.c"
    break;

  case 58: /* statements: TYPE ID '.' ID ASSIGN expr  */
#line 188 "limbaj.y"
                                         { 
                string tipStanga = (yyvsp[-4].strval); 
                string tipDreapta = (yyvsp[0].astnode)->getTip();
                if (tipStanga != tipDreapta) {
                    yyerror(("Tipuri incompatibile la declarație cu inițializare la linia " + to_string(yylineno)).c_str());
                }
                int x=(yyvsp[0].astnode)->Eval(yylineno);
            }
#line 1532 "limbaj.tab.c"
    break;

  case 59: /* statements: evaluare  */
#line 196 "limbaj.y"
                       {printf("Eval: %d\n", (yyvsp[0].intval));}
#line 1538 "limbaj.tab.c"
    break;

  case 60: /* statements: tipeof  */
#line 197 "limbaj.y"
                     {printf("TypeOf: %s\n", (yyvsp[0].strval));}
#line 1544 "limbaj.tab.c"
    break;

  case 61: /* evaluare: EVAL '(' expr ')'  */
#line 200 "limbaj.y"
                              {(yyval.intval) = (yyvsp[-1].astnode)->Eval(yylineno); }
#line 1550 "limbaj.tab.c"
    break;

  case 62: /* tipeof: TYPEOF '(' expr ')'  */
#line 203 "limbaj.y"
                             { string tip = (yyvsp[-1].astnode)->TypeOf(yylineno);
    (yyval.strval) = strdup(tip.c_str());  }
#line 1557 "limbaj.tab.c"
    break;

  case 72: /* cond_for: ID ASSIGN expr  */
#line 220 "limbaj.y"
                          {string tipStanga = getType((yyvsp[-2].strval)); 
                string tipDreapta = (yyvsp[0].astnode)->getTip(); 
                if (tipStanga != tipDreapta) {
                    yyerror(("Tipuri incompatibile pentru atribuire la linia " + to_string(yylineno)).c_str());
                }}
#line 1567 "limbaj.tab.c"
    break;

  case 73: /* expr2: expr  */
#line 227 "limbaj.y"
             { (yyval.astnode) = (yyvsp[0].astnode); }
#line 1573 "limbaj.tab.c"
    break;

  case 75: /* expr: ID  */
#line 231 "limbaj.y"
          {verif((yyvsp[0].strval), yylineno, 0,0); (yyval.astnode) = new AST((yyvsp[0].strval), NULL, NULL,0, Tip_nod::IDENTIFICATOR);}
#line 1579 "limbaj.tab.c"
    break;

  case 76: /* expr: ADEV  */
#line 232 "limbaj.y"
            {(yyval.astnode) = new AST("true", nullptr, nullptr,0, Tip_nod::BOOL);}
#line 1585 "limbaj.tab.c"
    break;

  case 77: /* expr: FALS  */
#line 233 "limbaj.y"
            {(yyval.astnode) = new AST("false", nullptr, nullptr,0, Tip_nod::BOOL);}
#line 1591 "limbaj.tab.c"
    break;

  case 78: /* expr: NR  */
#line 234 "limbaj.y"
          { (yyval.astnode) = new AST(yytext, nullptr, nullptr,0, Tip_nod::NUMAR);}
#line 1597 "limbaj.tab.c"
    break;

  case 79: /* expr: ID '[' NR ']'  */
#line 235 "limbaj.y"
                     {verif((yyvsp[-3].strval), yylineno, 1,(yyvsp[-1].intval)); (yyval.astnode) = new AST((yyvsp[-3].strval), NULL, NULL, (yyvsp[-1].intval),  Tip_nod::ARRAY);}
#line 1603 "limbaj.tab.c"
    break;

  case 80: /* expr: ID '(' list_param2 ')'  */
#line 236 "limbaj.y"
                              {verifFct((yyvsp[-3].strval),(yyvsp[-1].strval), yylineno);(yyval.astnode) = new AST((yyvsp[-3].strval), nullptr,nullptr, 0,Tip_nod::FUNCTIE);}
#line 1609 "limbaj.tab.c"
    break;

  case 81: /* expr: ID '(' ')'  */
#line 237 "limbaj.y"
                  {verifFct((yyvsp[-2].strval),"", yylineno);(yyval.astnode) = new AST((yyvsp[-2].strval), nullptr,nullptr, 0,Tip_nod::FUNCTIE);}
#line 1615 "limbaj.tab.c"
    break;

  case 82: /* expr: expr '+' expr  */
#line 238 "limbaj.y"
                      {(yyval.astnode) = new AST("+", (yyvsp[-2].astnode), (yyvsp[0].astnode), 0,Tip_nod::OPERATOR);}
#line 1621 "limbaj.tab.c"
    break;

  case 83: /* expr: expr '-' expr  */
#line 239 "limbaj.y"
                     {(yyval.astnode) = new AST("-", (yyvsp[-2].astnode), (yyvsp[0].astnode), 0,Tip_nod::OPERATOR);}
#line 1627 "limbaj.tab.c"
    break;

  case 84: /* expr: expr '/' expr  */
#line 240 "limbaj.y"
                     {(yyval.astnode) = new AST("/", (yyvsp[-2].astnode), (yyvsp[0].astnode),0, Tip_nod::OPERATOR);}
#line 1633 "limbaj.tab.c"
    break;

  case 85: /* expr: expr '*' expr  */
#line 241 "limbaj.y"
                     {(yyval.astnode) = new AST("*", (yyvsp[-2].astnode), (yyvsp[0].astnode), 0,Tip_nod::OPERATOR);}
#line 1639 "limbaj.tab.c"
    break;

  case 86: /* list_param2: param3  */
#line 244 "limbaj.y"
                     {(yyval.strval) = (yyvsp[0].strval);}
#line 1645 "limbaj.tab.c"
    break;

  case 87: /* list_param2: list_param2 ',' param3  */
#line 245 "limbaj.y"
                                      { (yyval.strval) = strdup(lipire2Parametrii((yyvsp[-2].strval), (yyvsp[0].strval), ",").c_str());}
#line 1651 "limbaj.tab.c"
    break;

  case 88: /* param3: ID  */
#line 248 "limbaj.y"
            {verif((yyvsp[0].strval), yylineno, 0,0); }
#line 1657 "limbaj.tab.c"
    break;

  case 89: /* param3: ID '[' NR ']'  */
#line 249 "limbaj.y"
                       {verif((yyvsp[-3].strval), yylineno, 1,(yyvsp[-1].intval));}
#line 1663 "limbaj.tab.c"
    break;

  case 90: /* param3: NR  */
#line 250 "limbaj.y"
            {if (yytext != nullptr) {(yyval.strval)= strdup(yytext);} else {(yyval.strval) = strdup("");}}
#line 1669 "limbaj.tab.c"
    break;

  case 93: /* param3: ID '(' ')'  */
#line 253 "limbaj.y"
                    {verifFct((yyvsp[-2].strval),"", yylineno);}
#line 1675 "limbaj.tab.c"
    break;

  case 94: /* param3: ID '(' list_param2 ')'  */
#line 254 "limbaj.y"
                                {verifFct((yyvsp[-3].strval),(yyvsp[-1].strval),yylineno);}
#line 1681 "limbaj.tab.c"
    break;


#line 1685 "limbaj.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 260 "limbaj.y"


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
