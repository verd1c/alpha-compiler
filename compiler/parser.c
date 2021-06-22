
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "compiler/parser.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include <assert.h>
    #include <stddef.h>
    #include <string.h>
    #include "parser.h"
    #include "symbol_table.h"
    #include "intermediate.h"
    #include "tools.h"
    #include "stack.h"
    #include "consts.h"
    #include "binary.h"

    int yylex (void);
    int yyerror (char* yaccProvidedMessage);

    Quad*           quads;
    unsigned        total;
    unsigned int    currQuad;

    char *typeToString[] = {
        "LOCAL_VAR",
        "GLOBAL_VAR",
        "ARGUMENT",

        "USER_FUNC",
        "LIB_FUNC"
    };

    char *opcodeToString[] =  {
        "ASSIGN",  "ADD",    "SUB",
        "MUL",    "DIV",    "MOD",
        "UMINUS", "AND",    "OR",
        "NOT",    "IF_EQ",  "IF_NOTEQ",
        "IF_LESSEQ",  "IF_GREATEREQ",   "IF_LESS",
        "IF_GREATER",    "CALL", "PARAM",
        "RET",   "GETRETVAL",  "FUNCSTART",
        "FUNCEND",    "TABLECREATE", 
        "TABLEGETELEM",   "TABLESETELEM", "JUMP"
    };

    char *_func_name;
    int _func_count = 0;
    int _anon_func_counter = 0;
    int _further_checks = 0;
    int _func_lvalue_check = 0;
    int _in_control = 0;
    long _temp_counter = 0;
    int _func_locals = 0;

    int _valid_comp = 1;

    int scope;
    extern int yylineno;
    extern char *yytext;
    extern FILE *yyin;
    SymTable *symTable;
    Stack *_call_stack;
    Stack *_funcstart_stack;
    struct ExprList *idexprlist;
    OffsetStack *scopeoffsetstack;




/* Line 189 of yacc.c  */
#line 140 "compiler/parser.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUM = 258,
     ID = 259,
     STRING = 260,
     IF = 261,
     ELSE = 262,
     WHILE = 263,
     FOR = 264,
     FUNCTION = 265,
     RETURN = 266,
     BREAK = 267,
     CONTINUE = 268,
     AND = 269,
     NOT = 270,
     OR = 271,
     LOCAL = 272,
     TRUE = 273,
     FALSE = 274,
     NIL = 275,
     LEFT_BRACE = 276,
     RIGHT_BRACE = 277,
     LEFT_BRACKET = 278,
     RIGHT_BRACKET = 279,
     LEFT_PARENTHESIS = 280,
     RIGHT_PARENTHESIS = 281,
     SEMICOLON = 282,
     COMMA = 283,
     COLON = 284,
     DOUBLE_COLON = 285,
     DOT = 286,
     DOUBLE_DOT = 287,
     EQUALS = 288,
     PLUS = 289,
     MINUS = 290,
     MULT = 291,
     DIV = 292,
     MOD = 293,
     EQUALS_EQUALS = 294,
     NOT_EQUALS = 295,
     PLUS_PLUS = 296,
     MINUS_MINUS = 297,
     GREATER_THAN = 298,
     LESS_THAN = 299,
     GREATER_OR_EQUAL = 300,
     LESS_OR_EQUAL = 301,
     UMINUS = 302
   };
#endif
/* Tokens.  */
#define NUM 258
#define ID 259
#define STRING 260
#define IF 261
#define ELSE 262
#define WHILE 263
#define FOR 264
#define FUNCTION 265
#define RETURN 266
#define BREAK 267
#define CONTINUE 268
#define AND 269
#define NOT 270
#define OR 271
#define LOCAL 272
#define TRUE 273
#define FALSE 274
#define NIL 275
#define LEFT_BRACE 276
#define RIGHT_BRACE 277
#define LEFT_BRACKET 278
#define RIGHT_BRACKET 279
#define LEFT_PARENTHESIS 280
#define RIGHT_PARENTHESIS 281
#define SEMICOLON 282
#define COMMA 283
#define COLON 284
#define DOUBLE_COLON 285
#define DOT 286
#define DOUBLE_DOT 287
#define EQUALS 288
#define PLUS 289
#define MINUS 290
#define MULT 291
#define DIV 292
#define MOD 293
#define EQUALS_EQUALS 294
#define NOT_EQUALS 295
#define PLUS_PLUS 296
#define MINUS_MINUS 297
#define GREATER_THAN 298
#define LESS_THAN 299
#define GREATER_OR_EQUAL 300
#define LESS_OR_EQUAL 301
#define UMINUS 302




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 69 "compiler/parser.y"

    char*   strValue;
    double  numValue;

    struct SymTableEntry    *symValue;
    struct Expression       *exprValue;
    struct Stmt             *stmtValue;

    struct Call             *functionCall;



/* Line 214 of yacc.c  */
#line 283 "compiler/parser.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 295 "compiler/parser.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  70
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   584

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  110
/* YYNRULES -- Number of states.  */
#define YYNSTATES  195

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,    10,    12,    15,    17,    19,
      21,    23,    26,    29,    31,    33,    35,    37,    41,    45,
      49,    53,    57,    61,    65,    69,    73,    74,    79,    80,
      85,    86,    92,    93,    99,   101,   102,   106,   109,   112,
     115,   118,   121,   124,   126,   127,   132,   134,   136,   138,
     142,   144,   146,   149,   152,   154,   158,   163,   167,   172,
     177,   180,   187,   189,   191,   195,   201,   203,   207,   208,
     212,   216,   218,   222,   228,   231,   235,   237,   239,   241,
     244,   245,   246,   247,   256,   258,   261,   263,   265,   267,
     269,   271,   273,   275,   279,   280,   282,   285,   290,   292,
     293,   299,   301,   302,   307,   311,   318,   321,   329,   330,
     333
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      49,     0,    -1,    50,    -1,    -1,    50,    51,    52,    -1,
      52,    -1,    53,    27,    -1,    86,    -1,    93,    -1,    96,
      -1,    98,    -1,    12,    27,    -1,    13,    27,    -1,    73,
      -1,    77,    -1,    27,    -1,    60,    -1,    53,    34,    53,
      -1,    53,    35,    53,    -1,    53,    36,    53,    -1,    53,
      37,    53,    -1,    53,    38,    53,    -1,    53,    43,    53,
      -1,    53,    45,    53,    -1,    53,    44,    53,    -1,    53,
      46,    53,    -1,    -1,    53,    39,    54,    53,    -1,    -1,
      53,    40,    55,    53,    -1,    -1,    53,    14,    56,    58,
      53,    -1,    -1,    53,    16,    57,    58,    53,    -1,    59,
      -1,    -1,    25,    53,    26,    -1,    35,    53,    -1,    15,
      53,    -1,    41,    63,    -1,    63,    41,    -1,    42,    63,
      -1,    63,    42,    -1,    62,    -1,    -1,    63,    61,    33,
      53,    -1,    63,    -1,    65,    -1,    70,    -1,    25,    77,
      26,    -1,    83,    -1,     4,    -1,    17,     4,    -1,    30,
       4,    -1,    64,    -1,    63,    31,     4,    -1,    63,    21,
      53,    22,    -1,    65,    31,     4,    -1,    65,    21,    53,
      22,    -1,    65,    25,    69,    26,    -1,    63,    66,    -1,
      25,    77,    26,    25,    69,    26,    -1,    67,    -1,    68,
      -1,    25,    69,    26,    -1,    32,     4,    25,    69,    26,
      -1,    53,    -1,    53,    28,    69,    -1,    -1,    21,    69,
      22,    -1,    21,    71,    22,    -1,    72,    -1,    72,    28,
      71,    -1,    23,    53,    29,    53,    24,    -1,    74,    75,
      -1,    74,    76,    75,    -1,    23,    -1,    24,    -1,    52,
      -1,    52,    76,    -1,    -1,    -1,    -1,    82,    25,    78,
      84,    79,    26,    80,    81,    -1,    73,    -1,    10,     4,
      -1,    10,    -1,     3,    -1,     5,    -1,    20,    -1,    18,
      -1,    19,    -1,    85,    -1,    85,    28,    84,    -1,    -1,
       4,    -1,    88,    52,    -1,    88,    52,    87,    52,    -1,
       7,    -1,    -1,     6,    25,    89,    53,    26,    -1,     8,
      -1,    -1,    25,    92,    53,    26,    -1,    90,    91,    52,
      -1,    95,    69,    27,    58,    53,    27,    -1,     9,    25,
      -1,    94,    97,    69,    26,    97,    52,    97,    -1,    -1,
      11,    27,    -1,    11,    53,    27,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   107,   107,   109,   109,   110,   113,   119,   124,   129,
     134,   157,   170,   184,   189,   194,   201,   205,   209,   213,
     217,   222,   227,   236,   245,   254,   263,   263,   275,   275,
     287,   287,   306,   306,   325,   331,   333,   337,   343,   363,
     413,   463,   513,   566,   573,   572,   629,   660,   664,   668,
     672,   677,   698,   722,   738,   744,   748,   758,   762,   774,
     778,   841,   847,   848,   851,   855,   859,   863,   871,   876,
     891,   905,   909,   920,   929,   933,   939,   944,   950,   954,
     962,   962,   963,   962,   997,  1004,  1051,  1076,  1079,  1082,
    1085,  1088,  1092,  1096,  1100,  1103,  1125,  1132,  1142,  1148,
    1148,  1157,  1162,  1162,  1170,  1182,  1191,  1193,  1208,  1213,
    1217
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "ID", "STRING", "IF", "ELSE",
  "WHILE", "FOR", "FUNCTION", "RETURN", "BREAK", "CONTINUE", "AND", "NOT",
  "OR", "LOCAL", "TRUE", "FALSE", "NIL", "LEFT_BRACE", "RIGHT_BRACE",
  "LEFT_BRACKET", "RIGHT_BRACKET", "LEFT_PARENTHESIS", "RIGHT_PARENTHESIS",
  "SEMICOLON", "COMMA", "COLON", "DOUBLE_COLON", "DOT", "DOUBLE_DOT",
  "EQUALS", "PLUS", "MINUS", "MULT", "DIV", "MOD", "EQUALS_EQUALS",
  "NOT_EQUALS", "PLUS_PLUS", "MINUS_MINUS", "GREATER_THAN", "LESS_THAN",
  "GREATER_OR_EQUAL", "LESS_OR_EQUAL", "UMINUS", "$accept", "program",
  "statements", "$@1", "statement", "expression", "$@2", "$@3", "$@4",
  "$@5", "M", "term", "assignexpr", "$@6", "primary", "lvalue", "member",
  "call", "callsuffix", "normcall", "methodcall", "elist", "objectdef",
  "indexed", "indexedelem", "block", "blockstart", "blockend", "blockstmt",
  "funcdef", "$@7", "$@8", "$@9", "funcbody", "funcstart", "const",
  "idlist", "arg", "ifstmt", "elseprefix", "ifprefix", "$@10",
  "whilestart", "whilecond", "$@11", "whilestmt", "forprefix", "forstart",
  "forstmt", "N", "returnstmt", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    51,    50,    50,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    54,    53,    55,    53,
      56,    53,    57,    53,    53,    58,    59,    59,    59,    59,
      59,    59,    59,    59,    61,    60,    62,    62,    62,    62,
      62,    63,    63,    63,    63,    64,    64,    64,    64,    65,
      65,    65,    66,    66,    67,    68,    69,    69,    69,    70,
      70,    71,    71,    72,    73,    73,    74,    75,    76,    76,
      78,    79,    80,    77,    81,    82,    82,    83,    83,    83,
      83,    83,    84,    84,    84,    85,    86,    86,    87,    89,
      88,    90,    92,    91,    93,    94,    95,    96,    97,    98,
      98
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     3,     1,     2,     1,     1,     1,
       1,     2,     2,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     0,     4,     0,     4,
       0,     5,     0,     5,     1,     0,     3,     2,     2,     2,
       2,     2,     2,     1,     0,     4,     1,     1,     1,     3,
       1,     1,     2,     2,     1,     3,     4,     3,     4,     4,
       2,     6,     1,     1,     3,     5,     1,     3,     0,     3,
       3,     1,     3,     5,     2,     3,     1,     1,     1,     2,
       0,     0,     0,     8,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     3,     0,     1,     2,     4,     1,     0,
       5,     1,     0,     4,     3,     6,     2,     7,     0,     2,
       3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    87,    51,    88,     0,   101,     0,    86,     0,     0,
       0,     0,     0,    90,    91,    89,    68,    76,     0,    15,
       0,     0,     0,     0,     0,     3,     5,     0,    34,    16,
      43,    46,    54,    47,    48,    13,     0,    14,     0,    50,
       7,     0,     0,     8,   108,    68,     9,    10,    99,   106,
      85,   109,     0,    11,    12,    38,    52,     0,    66,     0,
       0,    71,     0,     0,    53,    37,     0,    39,     0,    41,
       1,     0,    30,    32,     6,     0,     0,     0,     0,     0,
      26,    28,     0,     0,     0,     0,     0,    68,     0,     0,
      40,    42,     0,    60,    62,    63,     0,    68,     0,    77,
      78,    74,     0,    80,    96,   102,     0,    68,     0,     0,
     110,     0,    68,    69,    70,     0,    36,    49,     0,     4,
      35,    35,    17,    18,    19,    20,    21,     0,     0,    22,
      24,    23,    25,     0,     0,    55,     0,     0,     0,     0,
      57,    79,    75,    94,    98,     0,     0,   104,     0,    35,
       0,     0,    67,    72,    68,     0,     0,     0,    27,    29,
      56,    64,    68,    45,    58,    59,    95,    81,    92,    97,
       0,   108,     0,   100,     0,     0,    31,    33,     0,     0,
      94,   103,     0,     0,    73,    61,    65,    82,    93,   108,
     105,     0,   107,    84,    83
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,    25,    71,   100,    27,   127,   128,   120,   121,
     156,    28,    29,    92,    30,    31,    32,    33,    93,    94,
      95,    59,    34,    60,    61,    35,    36,   101,   102,    37,
     143,   179,   191,   194,    38,    39,   167,   168,    40,   145,
      41,   109,    42,   106,   146,    43,    44,    45,    46,   107,
      47
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -167
static const yytype_int16 yypact[] =
{
     208,  -167,  -167,  -167,   -21,  -167,   -15,     4,    97,     3,
      18,   255,    11,  -167,  -167,  -167,    17,  -167,   236,  -167,
      42,   255,   104,   104,    48,    50,  -167,   265,  -167,  -167,
    -167,   115,  -167,     8,  -167,  -167,   168,  -167,    26,  -167,
    -167,   208,    28,  -167,  -167,   255,  -167,  -167,  -167,  -167,
    -167,  -167,   279,  -167,  -167,  -167,  -167,   255,   312,    34,
      35,    32,   327,    36,  -167,  -167,    51,   -14,     8,   -14,
    -167,   208,  -167,  -167,  -167,   255,   255,   255,   255,   255,
    -167,  -167,   255,   255,   255,   255,   255,   255,    59,    61,
    -167,  -167,    33,  -167,  -167,  -167,   255,   255,    64,  -167,
     208,  -167,    46,  -167,    65,  -167,   208,   255,    52,   255,
    -167,   360,   255,  -167,  -167,    55,  -167,    78,    60,  -167,
    -167,  -167,   -12,   -12,  -167,  -167,  -167,   255,   255,   376,
     376,   376,   376,   393,    83,  -167,    79,   255,   426,    87,
    -167,  -167,  -167,   116,  -167,   208,   255,  -167,   102,  -167,
     441,   255,  -167,  -167,   255,    78,   255,   255,   347,   347,
    -167,  -167,   255,   538,  -167,  -167,  -167,  -167,    95,  -167,
     474,  -167,   255,  -167,   491,   105,   458,    53,   107,   111,
     116,  -167,   208,   524,  -167,  -167,  -167,  -167,  -167,  -167,
    -167,   118,  -167,  -167,  -167
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -167,  -167,  -167,  -167,     0,    -2,  -167,  -167,  -167,  -167,
    -118,  -167,  -167,  -167,  -167,   -10,  -167,     5,  -167,  -167,
    -167,   -43,  -167,    15,  -167,   -49,  -167,    41,    58,   -17,
    -167,  -167,  -167,  -167,  -167,  -167,   -30,  -167,  -167,  -167,
    -167,  -167,  -167,  -167,  -167,  -167,  -167,  -167,  -167,  -166,
    -167
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -45
static const yytype_int16 yytable[] =
{
      26,    63,   108,   157,    48,   182,    52,    86,    50,    55,
      49,    87,    67,    69,    58,    56,    62,    88,    89,    65,
       1,     2,     3,   192,    77,    78,    79,    68,    68,    96,
      53,   172,    11,    97,    12,    13,    14,    15,    16,    98,
      57,   104,    18,    58,   134,    54,    64,    20,    70,   118,
      -2,   103,    21,   105,   139,   111,   113,   114,    22,    23,
     115,     7,   117,   135,   148,   136,   137,    72,   140,   152,
      99,   119,   144,   122,   123,   124,   125,   126,    57,   149,
     129,   130,   131,   132,   133,    58,   155,    75,    76,    77,
      78,    79,    80,    81,   138,    58,    82,    83,    84,    85,
       1,     2,     3,   154,   162,    58,   147,   150,     2,   161,
      58,   175,    11,   165,    12,    13,    14,    15,    16,   178,
     166,    12,    18,   180,    51,   158,   159,    20,   171,    66,
     153,   185,    21,   186,    20,   163,    86,   187,    22,    23,
      87,    17,   193,   142,   170,   169,    88,    89,   -44,   174,
     188,     0,    58,     0,   176,   177,    90,    91,   141,     0,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     183,     1,     2,     3,     4,     0,     5,     6,     7,     8,
       9,    10,   189,    11,     0,    12,    13,    14,    15,    16,
       0,    17,    99,    18,     0,    19,     0,     0,    20,     0,
       0,     0,     0,    21,     0,     0,     0,     0,     0,    22,
      23,     1,     2,     3,     4,     0,     5,     6,     7,     8,
       9,    10,     0,    11,     0,    12,    13,    14,    15,    16,
       0,    17,     0,    18,     0,    19,     0,     0,    20,     1,
       2,     3,     0,    21,     0,     0,     7,     0,     0,    22,
      23,    11,     0,    12,    13,    14,    15,    16,     1,     2,
       3,    18,     0,     0,     0,     0,    20,     0,     0,     0,
      11,    21,    12,    13,    14,    15,    16,    22,    23,    72,
      18,    73,     0,     0,     0,    20,     0,     0,     0,     0,
      21,     0,    74,    72,     0,    73,    22,    23,     0,    75,
      76,    77,    78,    79,    80,    81,   110,     0,    82,    83,
      84,    85,     0,    75,    76,    77,    78,    79,    80,    81,
       0,     0,    82,    83,    84,    85,    72,     0,    73,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     112,    72,     0,    73,     0,     0,    75,    76,    77,    78,
      79,    80,    81,   116,     0,    82,    83,    84,    85,     0,
       0,    75,    76,    77,    78,    79,    80,    81,     0,     0,
      82,    83,    84,    85,    72,     0,    73,     0,     0,     0,
       0,    75,    76,    77,    78,    79,   -45,   -45,     0,   151,
      82,    83,    84,    85,    75,    76,    77,    78,    79,    80,
      81,     0,     0,    82,    83,    84,    85,    72,     0,    73,
      75,    76,    77,    78,    79,   160,     0,     0,     0,   -45,
     -45,   -45,   -45,     0,     0,     0,     0,    75,    76,    77,
      78,    79,    80,    81,     0,     0,    82,    83,    84,    85,
      72,     0,    73,     0,     0,     0,     0,     0,   164,     0,
       0,     0,     0,     0,     0,    72,     0,    73,     0,     0,
      75,    76,    77,    78,    79,    80,    81,   173,     0,    82,
      83,    84,    85,     0,     0,    75,    76,    77,    78,    79,
      80,    81,     0,     0,    82,    83,    84,    85,    72,     0,
      73,     0,    75,    76,    77,    78,    79,    80,    81,     0,
     181,    82,    83,    84,    85,    72,     0,    73,    75,    76,
      77,    78,    79,    80,    81,   184,     0,    82,    83,    84,
      85,     0,     0,     0,     0,    75,    76,    77,    78,    79,
      80,    81,     0,     0,    82,    83,    84,    85,    72,     0,
      73,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   190,    72,     0,    73,     0,     0,     0,    75,    76,
      77,    78,    79,    80,    81,     0,     0,    82,    83,    84,
      85,     0,    75,    76,    77,    78,    79,    80,    81,     0,
       0,    82,    83,    84,    85
};

static const yytype_int16 yycheck[] =
{
       0,    18,    45,   121,    25,   171,     8,    21,     4,    11,
      25,    25,    22,    23,    16,     4,    18,    31,    32,    21,
       3,     4,     5,   189,    36,    37,    38,    22,    23,    21,
      27,   149,    15,    25,    17,    18,    19,    20,    21,    31,
      23,    41,    25,    45,    87,    27,     4,    30,     0,    66,
       0,    25,    35,    25,    97,    57,    22,    22,    41,    42,
      28,    10,    26,     4,   107,     4,    33,    14,     4,   112,
      24,    71,     7,    75,    76,    77,    78,    79,    23,    27,
      82,    83,    84,    85,    86,    87,    26,    34,    35,    36,
      37,    38,    39,    40,    96,    97,    43,    44,    45,    46,
       3,     4,     5,    25,    25,   107,   106,   109,     4,    26,
     112,   154,    15,    26,    17,    18,    19,    20,    21,   162,
       4,    17,    25,    28,    27,   127,   128,    30,    26,    25,
     115,    26,    35,    26,    30,   137,    21,    26,    41,    42,
      25,    23,   191,   102,   146,   145,    31,    32,    33,   151,
     180,    -1,   154,    -1,   156,   157,    41,    42,   100,    -1,
     162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     172,     3,     4,     5,     6,    -1,     8,     9,    10,    11,
      12,    13,   182,    15,    -1,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,    -1,    27,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    41,
      42,     3,     4,     5,     6,    -1,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    17,    18,    19,    20,    21,
      -1,    23,    -1,    25,    -1,    27,    -1,    -1,    30,     3,
       4,     5,    -1,    35,    -1,    -1,    10,    -1,    -1,    41,
      42,    15,    -1,    17,    18,    19,    20,    21,     3,     4,
       5,    25,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      15,    35,    17,    18,    19,    20,    21,    41,    42,    14,
      25,    16,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      35,    -1,    27,    14,    -1,    16,    41,    42,    -1,    34,
      35,    36,    37,    38,    39,    40,    27,    -1,    43,    44,
      45,    46,    -1,    34,    35,    36,    37,    38,    39,    40,
      -1,    -1,    43,    44,    45,    46,    14,    -1,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    14,    -1,    16,    -1,    -1,    34,    35,    36,    37,
      38,    39,    40,    26,    -1,    43,    44,    45,    46,    -1,
      -1,    34,    35,    36,    37,    38,    39,    40,    -1,    -1,
      43,    44,    45,    46,    14,    -1,    16,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    40,    -1,    29,
      43,    44,    45,    46,    34,    35,    36,    37,    38,    39,
      40,    -1,    -1,    43,    44,    45,    46,    14,    -1,    16,
      34,    35,    36,    37,    38,    22,    -1,    -1,    -1,    43,
      44,    45,    46,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    40,    -1,    -1,    43,    44,    45,    46,
      14,    -1,    16,    -1,    -1,    -1,    -1,    -1,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    14,    -1,    16,    -1,    -1,
      34,    35,    36,    37,    38,    39,    40,    26,    -1,    43,
      44,    45,    46,    -1,    -1,    34,    35,    36,    37,    38,
      39,    40,    -1,    -1,    43,    44,    45,    46,    14,    -1,
      16,    -1,    34,    35,    36,    37,    38,    39,    40,    -1,
      26,    43,    44,    45,    46,    14,    -1,    16,    34,    35,
      36,    37,    38,    39,    40,    24,    -1,    43,    44,    45,
      46,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    40,    -1,    -1,    43,    44,    45,    46,    14,    -1,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    14,    -1,    16,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    40,    -1,    -1,    43,    44,    45,
      46,    -1,    34,    35,    36,    37,    38,    39,    40,    -1,
      -1,    43,    44,    45,    46
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     8,     9,    10,    11,    12,
      13,    15,    17,    18,    19,    20,    21,    23,    25,    27,
      30,    35,    41,    42,    49,    50,    52,    53,    59,    60,
      62,    63,    64,    65,    70,    73,    74,    77,    82,    83,
      86,    88,    90,    93,    94,    95,    96,    98,    25,    25,
       4,    27,    53,    27,    27,    53,     4,    23,    53,    69,
      71,    72,    53,    77,     4,    53,    25,    63,    65,    63,
       0,    51,    14,    16,    27,    34,    35,    36,    37,    38,
      39,    40,    43,    44,    45,    46,    21,    25,    31,    32,
      41,    42,    61,    66,    67,    68,    21,    25,    31,    24,
      52,    75,    76,    25,    52,    25,    91,    97,    69,    89,
      27,    53,    28,    22,    22,    28,    26,    26,    77,    52,
      56,    57,    53,    53,    53,    53,    53,    54,    55,    53,
      53,    53,    53,    53,    69,     4,     4,    33,    53,    69,
       4,    76,    75,    78,     7,    87,    92,    52,    69,    27,
      53,    29,    69,    71,    25,    26,    58,    58,    53,    53,
      22,    26,    25,    53,    22,    26,     4,    84,    85,    52,
      53,    26,    58,    26,    53,    69,    53,    53,    69,    79,
      28,    26,    97,    53,    24,    26,    26,    26,    84,    52,
      27,    80,    97,    73,    81
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:

/* Line 1455 of yacc.c  */
#line 109 "compiler/parser.y"
    {}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 114 "compiler/parser.y"
    {
                        (yyval.stmtValue) = stmt();
                        mk_bool_vmasm((yyvsp[(1) - (2)].exprValue));
                        //reset_temp_counter();
                    }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 120 "compiler/parser.y"
    {
                        (yyval.stmtValue) = (yyvsp[(1) - (1)].stmtValue);
                        //reset_temp_counter();
                    }
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 125 "compiler/parser.y"
    {
                        (yyval.stmtValue) = stmt();
                        //reset_temp_counter();
                    }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 130 "compiler/parser.y"
    {
                        (yyval.stmtValue) = stmt();
                        //reset_temp_counter();
                    }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 134 "compiler/parser.y"
    {
                                            SymTableEntry *curfunc = (SymTableEntry*)top(_call_stack);    

                                            if(!curfunc){
                                                printf("input:%d: error:  Return outside of scope \n", yylineno);
                                                _valid_comp = 0;
                                                YYABORT;
                                            }     

                                            if(scope==0 && _in_control==0){
                                                printf("input:%d: error:  Return outside of scope \n", yylineno);

                                                _valid_comp = 0;
                                                YYABORT;
                                            }else{
                                                 //printf("Returns  %d %d\n", e->value.varValue->line, yylineno);
                                                if(_func_count>0 && _in_control >0) _in_control--;
                                                else _in_control=0;
                                            }
                                            (yyval.stmtValue) = (yyvsp[(1) - (1)].stmtValue); // might need new
                                            //reset_temp_counter();
                                        }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 157 "compiler/parser.y"
    {
                                            if(scope==0 && _in_control==0){
                                                printf("input:%d: error:  Break outside of scope \n", yylineno);
                                                _valid_comp = 0;
                                                YYABORT;
                                            }else{
                                                if(_in_control>0)  _in_control--;
                                            }
                                            (yyval.stmtValue) = stmt();
                                            (yyval.stmtValue)->breaklist = next_quad();
                                            emit(JUMP_I, NULL, NULL, NULL, 0, yylineno);
                                            //reset_temp_counter();
                                        }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 170 "compiler/parser.y"
    { 
                                            if(scope==0 && _in_control==0){

                                                printf("input:%d: error:  Continue outside of scope \n", yylineno);
                                                _valid_comp = 0;
                                                YYABORT;
                                            }else{
                                                if(_in_control>0)  _in_control--;
                                            }
                                            (yyval.stmtValue) = stmt();
                                            (yyval.stmtValue)->contlist = next_quad();
                                            emit(JUMP_I, NULL, NULL, NULL, 0, yylineno);
                                            //reset_temp_counter();
                                        }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 185 "compiler/parser.y"
    {
                        (yyval.stmtValue) = (yyvsp[(1) - (1)].stmtValue);
                        //reset_temp_counter();
                    }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 190 "compiler/parser.y"
    {
                        (yyval.stmtValue) = stmt();
                        //reset_temp_counter();
                    }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 195 "compiler/parser.y"
    {
                        (yyval.stmtValue) = stmt();
                        //reset_temp_counter();
                    }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 202 "compiler/parser.y"
    {
                        (yyval.exprValue) = (yyvsp[(1) - (1)].exprValue);
                    }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 205 "compiler/parser.y"
    {
                                                    (yyval.exprValue) = sym_expr(new_temp(symTable, scope));
                                                    emit(ADD_I, (yyval.exprValue), (yyvsp[(1) - (3)].exprValue), (yyvsp[(3) - (3)].exprValue), 0, yylineno);
                                                }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 209 "compiler/parser.y"
    {
                                                    (yyval.exprValue) = sym_expr(new_temp(symTable, scope));
                                                    emit(SUB_I, (yyval.exprValue), (yyvsp[(1) - (3)].exprValue), (yyvsp[(3) - (3)].exprValue), 0, yylineno);
                                                }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 213 "compiler/parser.y"
    {
                                                    (yyval.exprValue) = sym_expr(new_temp(symTable, scope));
                                                    emit(MUL_I, (yyval.exprValue), (yyvsp[(1) - (3)].exprValue), (yyvsp[(3) - (3)].exprValue), 0, yylineno);
                                                }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 218 "compiler/parser.y"
    {
                        (yyval.exprValue) = sym_expr(new_temp(symTable, scope));
                        emit(DIV_I, (yyval.exprValue), (yyvsp[(1) - (3)].exprValue), (yyvsp[(3) - (3)].exprValue), 0, yylineno);
                    }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 223 "compiler/parser.y"
    {
                        (yyval.exprValue) = sym_expr(new_temp(symTable, scope));
                        emit(MOD_I, (yyval.exprValue), (yyvsp[(1) - (3)].exprValue), (yyvsp[(3) - (3)].exprValue), 0, yylineno);
                    }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 228 "compiler/parser.y"
    {
                        (yyval.exprValue) = expr(BOOLEXPR_E);
                        (yyval.exprValue)->sym = new_temp(symTable, scope);
                        (yyval.exprValue)->truelist = llist(next_quad());
                        (yyval.exprValue)->falselist = llist(next_quad() + 1);
                        emit(IF_GREATER_I, NULL, (yyvsp[(1) - (3)].exprValue), (yyvsp[(3) - (3)].exprValue), 0, yylineno);
                        emit(JUMP_I, NULL, NULL, NULL, 0, yylineno);
                    }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 237 "compiler/parser.y"
    {
                        (yyval.exprValue) = expr(BOOLEXPR_E);
                        (yyval.exprValue)->sym = new_temp(symTable, scope);
                        (yyval.exprValue)->truelist = llist(next_quad());
                        (yyval.exprValue)->falselist = llist(next_quad() + 1);
                        emit(IF_GREATEREQ_I, NULL, (yyvsp[(1) - (3)].exprValue), (yyvsp[(3) - (3)].exprValue), 0, yylineno);
                        emit(JUMP_I, NULL, NULL, NULL, 0, yylineno);
                    }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 246 "compiler/parser.y"
    {
                        (yyval.exprValue) = expr(BOOLEXPR_E);
                        (yyval.exprValue)->sym = new_temp(symTable, scope);
                        (yyval.exprValue)->truelist = llist(next_quad());
                        (yyval.exprValue)->falselist = llist(next_quad() + 1);
                        emit(IF_LESS_I, NULL, (yyvsp[(1) - (3)].exprValue), (yyvsp[(3) - (3)].exprValue), 0, yylineno);
                        emit(JUMP_I, NULL, NULL, NULL, 0, yylineno);
                    }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 255 "compiler/parser.y"
    {
                        (yyval.exprValue) = expr(BOOLEXPR_E);
                        (yyval.exprValue)->sym = new_temp(symTable, scope);
                        (yyval.exprValue)->truelist = llist(next_quad());
                        (yyval.exprValue)->falselist = llist(next_quad() + 1);
                        emit(IF_LESSEQ_I, NULL, (yyvsp[(1) - (3)].exprValue), (yyvsp[(3) - (3)].exprValue), 0, yylineno);
                        emit(JUMP_I, NULL, NULL, NULL, 0, yylineno);
                    }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 263 "compiler/parser.y"
    {mk_bool_vmasm((yyvsp[(1) - (2)].exprValue));}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 264 "compiler/parser.y"
    {
                        (yyval.exprValue) = expr(BOOLEXPR_E);
                        (yyval.exprValue)->sym = new_temp(symTable, scope);

                        mk_bool_vmasm((yyvsp[(4) - (4)].exprValue));

                        (yyval.exprValue)->truelist = llist(next_quad());
                        (yyval.exprValue)->falselist = llist(next_quad() + 1);
                        emit(IF_EQ_I, NULL, (yyvsp[(1) - (4)].exprValue), (yyvsp[(4) - (4)].exprValue), 0, yylineno);
                        emit(JUMP_I, NULL, NULL, NULL, 0, yylineno);
                    }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 275 "compiler/parser.y"
    {mk_bool_vmasm((yyvsp[(1) - (2)].exprValue));}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 276 "compiler/parser.y"
    {
                        (yyval.exprValue) = expr(BOOLEXPR_E);
                        (yyval.exprValue)->sym = new_temp(symTable, scope);

                        mk_bool_vmasm((yyvsp[(4) - (4)].exprValue));

                        (yyval.exprValue)->truelist = llist(next_quad());
                        (yyval.exprValue)->falselist = llist(next_quad() + 1);
                        emit(IF_NOTEQ_I, NULL, (yyvsp[(1) - (4)].exprValue), (yyvsp[(4) - (4)].exprValue), 0, yylineno);
                        emit(JUMP_I, NULL, NULL, NULL, 0, yylineno);
                    }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 287 "compiler/parser.y"
    {mk_nbe_vmasm(AND_I, (yyvsp[(1) - (2)].exprValue));}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 288 "compiler/parser.y"
    {
                        (yyval.exprValue) = expr(BOOLEXPR_E);
                        (yyval.exprValue)->sym = new_temp(symTable, scope);

                        // emit if_eq if second expression is not a boolexpr
                        if((yyvsp[(5) - (5)].exprValue)->type != BOOLEXPR_E){
                            (yyvsp[(5) - (5)].exprValue)->truelist = llist(next_quad());
                            (yyvsp[(5) - (5)].exprValue)->falselist = llist(next_quad() + 1);
                            emit(IF_EQ_I, NULL, (yyvsp[(5) - (5)].exprValue), bool_expr(1), 0, yylineno);
                            emit(JUMP_I, NULL, NULL, NULL, 0, yylineno);
                        }

                        if((yyvsp[(1) - (5)].exprValue)->type == BOOLEXPR_E)
                            llist_patch((yyvsp[(1) - (5)].exprValue)->truelist, (yyvsp[(4) - (5)].numValue));

                        (yyval.exprValue)->truelist = (yyvsp[(5) - (5)].exprValue)->truelist;
                        (yyval.exprValue)->falselist = llist_merge((yyvsp[(1) - (5)].exprValue)->falselist, (yyvsp[(5) - (5)].exprValue)->falselist);
                    }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 306 "compiler/parser.y"
    {mk_nbe_vmasm(OR_I, (yyvsp[(1) - (2)].exprValue));}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 307 "compiler/parser.y"
    {
                        (yyval.exprValue) = expr(BOOLEXPR_E);
                        (yyval.exprValue)->sym = new_temp(symTable, scope);

                         // emit if_eq if second expression is not a boolexpr
                        if((yyvsp[(5) - (5)].exprValue)->type != BOOLEXPR_E){
                            (yyvsp[(5) - (5)].exprValue)->truelist = llist(next_quad());
                            (yyvsp[(5) - (5)].exprValue)->falselist = llist(next_quad() + 1);
                            emit(IF_EQ_I, NULL, (yyvsp[(5) - (5)].exprValue), bool_expr(1), 0, yylineno);
                            emit(JUMP_I, NULL, NULL, NULL, 0, yylineno);
                        }

                        if((yyvsp[(1) - (5)].exprValue)->type == BOOLEXPR_E)
                            llist_patch((yyvsp[(1) - (5)].exprValue)->falselist, (yyvsp[(4) - (5)].numValue));

                        (yyval.exprValue)->truelist = llist_merge((yyvsp[(1) - (5)].exprValue)->truelist, (yyvsp[(5) - (5)].exprValue)->truelist);
                        (yyval.exprValue)->falselist = (yyvsp[(5) - (5)].exprValue)->falselist;
                    }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 326 "compiler/parser.y"
    {
                        (yyval.exprValue) = (yyvsp[(1) - (1)].exprValue);
                    }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 331 "compiler/parser.y"
    {(yyval.numValue) = next_quad();}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 334 "compiler/parser.y"
    {
                        (yyval.exprValue) = (yyvsp[(2) - (3)].exprValue);
                    }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 338 "compiler/parser.y"
    {
                        (yyval.exprValue) = expr(ARITHEXPR_E);
                        (yyval.exprValue)->sym = new_temp(symTable, scope);
                        emit(UMINUS_I, (yyval.exprValue), (yyvsp[(2) - (2)].exprValue), NULL, next_quad(), yylineno);
                    }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 344 "compiler/parser.y"
    {
                        llist_t temp;
                        (yyval.exprValue) = sym_expr(new_temp(symTable, scope));
                        (yyval.exprValue)->type = BOOLEXPR_E;

                        if((yyvsp[(2) - (2)].exprValue)->type != BOOLEXPR_E){

                            // reverse
                            (yyval.exprValue)->falselist = llist(next_quad());
                            (yyval.exprValue)->truelist = llist(next_quad() + 1);
                            emit(IF_EQ_I, NULL, (yyvsp[(2) - (2)].exprValue), bool_expr(1), 0, yylineno);
                            emit(JUMP_I, NULL, NULL, NULL, 0, yylineno);
                        }else{
                            temp = (yyvsp[(2) - (2)].exprValue)->truelist;
                            (yyval.exprValue)->truelist = (yyvsp[(2) - (2)].exprValue)->falselist;
                            (yyval.exprValue)->falselist = temp;
                        }

                    }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 364 "compiler/parser.y"
    {            
                        Expr *ex = (Expr*)0;   
                        SymTableEntry *e;

                        // Check wether lvalue is a function

                        if((yyvsp[(2) - (2)].exprValue) && (yyvsp[(2) - (2)].exprValue)->sym && _further_checks){
                            e = (yyvsp[(2) - (2)].exprValue)->sym;
                            ex = (yyvsp[(2) - (2)].exprValue);

                            if(e->type == LOCAL_VAR || e->type == GLOBAL_VAR || e->type == ARGUMENT_VAR){

                                // If it's a variable, check wether we have to create a new one or its referencing an existing one
                                if(!e->isActive){
                                    //printf("Adding, I found it inactive on line %d %d\n", e->value.varValue->line, yylineno);
                                    if(scope == 0){
                                        ex = sym_expr(insert(symTable, e->value.varValue->name, scope, yylineno, GLOBAL_VAR));
                                    }else
                                        ex = sym_expr(insert(symTable, e->value.varValue->name, scope, yylineno, LOCAL_VAR));
                                }else if(!is_valid(_call_stack, e, scope)){
                                    if(e->value.varValue->scope != scope){
                                        printf("input:%d: error: could not access variable %s\n", yylineno, e->value.varValue->name);
                                        _valid_comp = 0;
                                        YYABORT;
                                    }
                                }

                            }else{
                                
                                // Functions can not be l-values
                                if(_func_lvalue_check) {
                                    printf("input:%d: error: on function %s, functions cannot be l-values\n", yylineno, e->value.funcValue->name);
                                    _valid_comp = 0;
                                    YYABORT;
                                }
                            }

                            if(ex->type == TABLEITEM_E){
                                (yyval.exprValue) = emit_if_table_item(symTable, scope, ex);
                                emit(ADD_I, (yyval.exprValue), (yyval.exprValue), num_expr(1), 0, yylineno);
                                emit(TABLESETELEM_I, ex, ex->index, (yyval.exprValue), 0, yylineno);
                            }else{
                                emit(ADD_I, ex, ex, num_expr(1), 0, yylineno);
                                (yyval.exprValue) = expr(ARITHEXPR_E);
                                (yyval.exprValue)->sym = new_temp(symTable, scope);
                                emit(ASSIGN_I, (yyval.exprValue), ex, NULL, 0, yylineno);
                            }
                        }
                    }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 414 "compiler/parser.y"
    {
                        Expr *ex = (Expr*)0, *val = (Expr*)0;
                        SymTableEntry *e;

                        // Check wether lvalue is a function

                        if((yyvsp[(1) - (2)].exprValue) && (yyvsp[(1) - (2)].exprValue)->sym && _further_checks){
                            e = (yyvsp[(1) - (2)].exprValue)->sym;
                            ex = (yyvsp[(1) - (2)].exprValue);

                            if(e->type == LOCAL_VAR || e->type == GLOBAL_VAR || e->type == ARGUMENT_VAR){

                                // If it's a variable, check wether we have to create a new one or its referencing an existing one
                                if(!e->isActive){
                                    //printf("Adding, I found it inactive on line %d %d\n", e->value.varValue->line, yylineno);
                                    if(scope == 0){
                                        ex = sym_expr(insert(symTable, e->value.varValue->name, scope, yylineno, GLOBAL_VAR));
                                    }else
                                        ex = sym_expr(insert(symTable, e->value.varValue->name, scope, yylineno, LOCAL_VAR));
                                }else if(!is_valid(_call_stack, e, scope)){
                                    if(e->value.varValue->scope != scope){
                                        printf("input:%d: error: could not access variable %s\n", yylineno, e->value.varValue->name);
                                        _valid_comp = 0;
                                        YYABORT;
                                    }
                                }

                            }else{
                                
                                // Functions can not be l-values
                                if(_func_lvalue_check) {
                                    printf("input:%d: error: on function %s, functions cannot be l-values\n", yylineno, e->value.funcValue->name);
                                    _valid_comp = 0;
                                    YYABORT;
                                }
                            }

                            (yyval.exprValue) = sym_expr(new_temp(symTable, scope));
                            if(ex->type == TABLEITEM_E){
                                val = emit_if_table_item(symTable, scope, ex);
                                emit(ASSIGN_I, (yyval.exprValue), val, NULL, 0, yylineno);
                                emit(ADD_I, val, val, num_expr(1), 0, yylineno);
                                emit(TABLESETELEM_I, ex, ex->index, val, 0, yylineno);
                            }else{
                                emit(ASSIGN_I, (yyval.exprValue), ex, NULL, 0, yylineno);
                                emit(ADD_I, ex, ex, num_expr(1), 0, yylineno);
                            }
                        }
                    }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 464 "compiler/parser.y"
    {               
                        Expr *ex = (Expr*)0;
                        SymTableEntry *e;

                        // Check wether lvalue is a function

                        if((yyvsp[(2) - (2)].exprValue) && (yyvsp[(2) - (2)].exprValue)->sym && _further_checks){
                            e = (yyvsp[(2) - (2)].exprValue)->sym;
                            ex = (yyvsp[(2) - (2)].exprValue);

                            if(e->type == LOCAL_VAR || e->type == GLOBAL_VAR || e->type == ARGUMENT_VAR){

                                // If it's a variable, check wether we have to create a new one or its referencing an existing one
                                if(!e->isActive){
                                    //printf("Adding, I found it inactive on line %d %d\n", e->value.varValue->line, yylineno);
                                    if(scope == 0){
                                        ex = sym_expr(insert(symTable, e->value.varValue->name, scope, yylineno, GLOBAL_VAR));
                                    }else
                                        ex = sym_expr(insert(symTable, e->value.varValue->name, scope, yylineno, LOCAL_VAR));
                                }else if(!is_valid(_call_stack, e, scope)){
                                    if(e->value.varValue->scope != scope){
                                        printf("input:%d: error: could not access variable %s\n", yylineno, e->value.varValue->name);
                                        _valid_comp = 0;
                                        YYABORT;
                                    }
                                }

                            }else{
                                
                                // Functions can not be l-values
                                if(_func_lvalue_check) {
                                    printf("input:%d: error: on function %s, functions cannot be l-values\n", yylineno, e->value.funcValue->name);
                                    _valid_comp = 0;
                                    YYABORT;
                                }
                            }

                            if(ex->type == TABLEITEM_E){
                                (yyval.exprValue) = emit_if_table_item(symTable, scope, ex);
                                emit(SUB_I, (yyval.exprValue), (yyval.exprValue), num_expr(1), 0, yylineno);
                                emit(TABLESETELEM_I, ex, ex->index, (yyval.exprValue), 0, yylineno);
                            }else{
                                emit(SUB_I, ex, ex, num_expr(1), 0, yylineno);
                                (yyval.exprValue) = expr(ARITHEXPR_E);
                                (yyval.exprValue)->sym = new_temp(symTable, scope);
                                emit(ASSIGN_I, (yyval.exprValue), ex, NULL, 0, yylineno);
                            }
                        }
                    }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 514 "compiler/parser.y"
    {               
                        Expr *ex = (Expr*)0, *val = (Expr*)0;
                        SymTableEntry *e;

                        // Check wether lvalue is a function

                        if((yyvsp[(1) - (2)].exprValue) && (yyvsp[(1) - (2)].exprValue)->sym && _further_checks){
                            e = (yyvsp[(1) - (2)].exprValue)->sym;
                            ex = (yyvsp[(1) - (2)].exprValue);

                            if(e->type == LOCAL_VAR || e->type == GLOBAL_VAR || e->type == ARGUMENT_VAR){

                                // If it's a variable, check wether we have to create a new one or its referencing an existing one
                                if(!e->isActive){
                                    //printf("Adding, I found it inactive on line %d %d\n", e->value.varValue->line, yylineno);
                                    if(scope == 0){
                                        ex = sym_expr(insert(symTable, e->value.varValue->name, scope, yylineno, GLOBAL_VAR));
                                    }else
                                        ex = sym_expr(insert(symTable, e->value.varValue->name, scope, yylineno, LOCAL_VAR));
                                }else if(!is_valid(_call_stack, e, scope)){
                                    if(e->value.varValue->scope != scope){
                                        printf("input:%d: error: could not access variable %s\n", yylineno, e->value.varValue->name);
                                        _valid_comp = 0;
                                        YYABORT;
                                    }
                                }

                            }else{
                                
                                // Functions can not be l-values
                                if(_func_lvalue_check) {
                                    printf("input:%d: error: on function %s, functions cannot be l-values\n", yylineno, e->value.funcValue->name);
                                    _valid_comp = 0;
                                    YYABORT;
                                }
                            }

                            (yyval.exprValue) = sym_expr(new_temp(symTable, scope));
                            if(ex->type == TABLEITEM_E){
                                val = emit_if_table_item(symTable, scope, ex);
                                emit(ASSIGN_I, (yyval.exprValue), val, NULL, 0, yylineno);
                                emit(SUB_I, val, val, num_expr(1), 0, yylineno);
                                emit(TABLESETELEM_I, ex, ex->index, val, 0, yylineno);
                            }else{
                                emit(ASSIGN_I, (yyval.exprValue), ex, NULL, 0, yylineno);
                                emit(SUB_I, ex, ex, num_expr(1), 0, yylineno);
                            }
                        }



                    }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 567 "compiler/parser.y"
    {   
                        (yyval.exprValue) = (yyvsp[(1) - (1)].exprValue);
                    }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 573 "compiler/parser.y"
    {               
                            SymTableEntry *e;

                            // Check wether lvalue is a function

                            if((yyvsp[(1) - (1)].exprValue) && (yyvsp[(1) - (1)].exprValue)->sym && _further_checks){
                                e = (yyvsp[(1) - (1)].exprValue)->sym;

                                if(e->type == LOCAL_VAR || e->type == GLOBAL_VAR || e->type == ARGUMENT_VAR){

                                    // If it's a variable, check wether we have to create a new one or its referencing an existing one
                                    if(!e->isActive){
                                        //printf("Adding, I found it inactive on line %d %d\n", e->value.varValue->line, yylineno);
                                        if(scope == 0){
                                            (yyvsp[(1) - (1)].exprValue) = sym_expr(insert(symTable, e->value.varValue->name, scope, yylineno, GLOBAL_VAR));
                                        }else
                                            (yyvsp[(1) - (1)].exprValue) = sym_expr(insert(symTable, e->value.varValue->name, scope, yylineno, LOCAL_VAR));
                                    }else if(!is_valid(_call_stack, e, scope)){
                                        if(e->value.varValue->scope != scope && e->type != GLOBAL_VAR){
                                            printf("input:%d: error: could not access variable %s\n", yylineno, e->value.varValue->name);
                                            _valid_comp = 0;
                                            YYABORT;
                                            (yyvsp[(1) - (1)].exprValue) = NULL;
                                        }
                                    }

                                }else{
                                    (yyvsp[(1) - (1)].exprValue) = NULL;
                                    // Functions can not be l-values
                                    if(_func_lvalue_check) {
                                        printf("input:%d: error: on function %s, functions cannot be l-values\n", yylineno, e->value.funcValue->name);
                                        _valid_comp = 0;
                                        YYABORT;
                                    }
                                }
                            }
                        }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 610 "compiler/parser.y"
    {

                        mk_bool_vmasm((yyvsp[(4) - (4)].exprValue));

                        if((yyvsp[(1) - (4)].exprValue)->type == TABLEITEM_E){
                            emit(TABLESETELEM_I, (yyvsp[(1) - (4)].exprValue), (yyvsp[(1) - (4)].exprValue)->index, (yyvsp[(4) - (4)].exprValue), 0, yylineno);
                            //emit(TABLESETELEM_I, $4, $1, $1->index, 0, yylineno);

                            (yyval.exprValue) = emit_if_table_item(symTable, scope, (yyvsp[(1) - (4)].exprValue));
                            (yyval.exprValue)->type = ASSIGNEXPR_E;
                        }else{
                            emit(ASSIGN_I, (yyvsp[(1) - (4)].exprValue), (yyvsp[(4) - (4)].exprValue), NULL, 0, yylineno);
                            (yyval.exprValue) = sym_expr(new_temp(symTable, scope));

                            // second emit
                            emit(ASSIGN_I, (yyval.exprValue), (yyvsp[(1) - (4)].exprValue), NULL, 0, yylineno);
                        }
                    }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 629 "compiler/parser.y"
    {               
                            SymTableEntry *e;

                            // Check wether lvalue is a function

                            if((yyvsp[(1) - (1)].exprValue) && (yyvsp[(1) - (1)].exprValue)->sym && _further_checks){
                                (yyval.exprValue) = (yyvsp[(1) - (1)].exprValue);
                                e = (yyvsp[(1) - (1)].exprValue)->sym;

                                if(e->type == LOCAL_VAR || e->type == GLOBAL_VAR || e->type == ARGUMENT_VAR){

                                    // If it's a variable, check wether we have to create a new one or its referencing an existing one
                                    if(!e->isActive){
                                        //printf("Adding, I found it inactive on line %d %d\n", e->value.varValue->line, yylineno);
                                        if(scope == 0){
                                            (yyval.exprValue) = sym_expr(insert(symTable, e->value.varValue->name, scope, yylineno, GLOBAL_VAR));
                                        }else
                                            (yyval.exprValue) = sym_expr(insert(symTable, e->value.varValue->name, scope, yylineno, LOCAL_VAR));
                                    }else if(!is_valid(_call_stack, e, scope)){
                                        if(e->value.varValue->scope != scope && e->type != GLOBAL_VAR){
                                            printf("input:%d: error: could not access variable %s\n", yylineno, e->value.varValue->name);
                                            _valid_comp = 0;
                                            YYABORT;
                                        }
                                    }

                                }
                            }

                            (yyval.exprValue) = emit_if_table_item(symTable, scope, (yyvsp[(1) - (1)].exprValue));
                        }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 661 "compiler/parser.y"
    {
                        (yyval.exprValue) = (yyvsp[(1) - (1)].exprValue);
                    }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 665 "compiler/parser.y"
    {
                        (yyval.exprValue) = (yyvsp[(1) - (1)].exprValue);
                    }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 669 "compiler/parser.y"
    {
                        (yyval.exprValue) = (yyvsp[(2) - (3)].exprValue);
                    }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 672 "compiler/parser.y"
    {   
                            (yyval.exprValue) = (yyvsp[(1) - (1)].exprValue);
                        }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 677 "compiler/parser.y"
    {
                                                SymTableEntry *e;
                                                
                                                // Check if active variables exist in any scope from current and down
                                                if((e = lookup_variable(symTable, (yyvsp[(1) - (1)].strValue), scope)) == NULL){
                                                    
                                                    // If not, insert the variable
                                                    if(scope == 0)
                                                        (yyval.exprValue) = sym_expr(insert(symTable, (yyvsp[(1) - (1)].strValue), scope, yylineno, GLOBAL_VAR));
                                                    else
                                                        (yyval.exprValue) = sym_expr(insert(symTable, (yyvsp[(1) - (1)].strValue), scope, yylineno, LOCAL_VAR));
                                                }else{

                                                    // If exists, set value for further checks
                                                    //printf("Setting valuue for further checks on-> %s %s\n", e->value.varValue->name, typeToString[e->type]);
                                                    (yyval.exprValue) = sym_expr(e);
                                                    printf("IN HERE for %s\n", e->value.funcValue->name);
                                                }
                                                _further_checks = 1;
                                                _func_lvalue_check = 1;
                                            }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 698 "compiler/parser.y"
    {
                                                SymTableEntry *e;
                                                
                                                // Check current scope
                                                if((e = lookup_no_type(symTable, (yyvsp[(2) - (2)].strValue), scope)) == NULL){
                                                    if((e = lookup(symTable, (yyvsp[(2) - (2)].strValue), 0, LIB_FUNC)) == NULL){
                                                        if(scope == 0){
                                                            (yyval.exprValue) = sym_expr(insert(symTable, (yyvsp[(2) - (2)].strValue), scope, yylineno, GLOBAL_VAR));
                                                        }else{
                                                            (yyval.exprValue) = sym_expr(insert(symTable, (yyvsp[(2) - (2)].strValue), scope, yylineno, LOCAL_VAR));
                                                        }
                                                    }else{
                                                        printf("input:%d: error: local symbol %s is attempting to shadow a library function\n", yylineno, (yyvsp[(2) - (2)].strValue));
                                                        _valid_comp = 0;
                                                        YYABORT;
                                                        (yyval.exprValue) = NULL;
                                                    }
                                                }else{
                                                    // If exists, set reference
                                                    (yyval.exprValue) = sym_expr(e);
                                                }
                                                _further_checks = 1;
                                                _func_lvalue_check = 1;
                                            }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 722 "compiler/parser.y"
    {
                                                SymTableEntry *e;
                                                
                                                // Check globals
                                                if((e = lookup_no_type(symTable, (yyvsp[(2) - (2)].strValue), 0)) == NULL){
                                                    printf("input:%d: error: global reference %s in line %d not found\n", yylineno, (yyvsp[(2) - (2)].strValue), yylineno);
                                                    _valid_comp = 0;
                                                    YYABORT;
                                                    (yyval.exprValue) = NULL;
                                                }else{
                                                    // If exists, set reference
                                                    (yyval.exprValue) = sym_expr(e);
                                                }
                                                _further_checks = 0;
                                                _func_lvalue_check = 1;
                                            }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 738 "compiler/parser.y"
    {
                                                _func_lvalue_check = 0;
                                                (yyval.exprValue) = (yyvsp[(1) - (1)].exprValue);
                                            }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 745 "compiler/parser.y"
    {   
                        (yyval.exprValue) = member_expr(symTable, scope, (yyvsp[(1) - (3)].exprValue), (yyvsp[(3) - (3)].strValue));
                    }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 749 "compiler/parser.y"
    {
                        Expr *res;
                        printf("Hallo in here for %s\n", (yyvsp[(1) - (4)].exprValue)->sym->value.varValue->name);
                        (yyvsp[(1) - (4)].exprValue) = emit_if_table_item(symTable, scope, (yyvsp[(1) - (4)].exprValue));
                        res = expr(TABLEITEM_E);
                        res->sym = (yyvsp[(1) - (4)].exprValue)->sym;
                        res->index = (yyvsp[(3) - (4)].exprValue);
                        (yyval.exprValue) = res;
                    }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 759 "compiler/parser.y"
    {
                        (yyval.exprValue) = member_expr(symTable, scope, (yyvsp[(1) - (3)].exprValue), (yyvsp[(3) - (3)].strValue));
                    }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 763 "compiler/parser.y"
    {
                        Expr *res;

                        (yyvsp[(1) - (4)].exprValue) = emit_if_table_item(symTable, scope, (yyvsp[(1) - (4)].exprValue));
                        res = expr(TABLEITEM_E);
                        res->sym = (yyvsp[(1) - (4)].exprValue)->sym;
                        res->index = (yyvsp[(3) - (4)].exprValue);
                        (yyval.exprValue) = res;
                    }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 775 "compiler/parser.y"
    {
                        (yyval.exprValue) = make_call(symTable, scope, (yyvsp[(1) - (4)].exprValue), reverse_elist(&(yyvsp[(3) - (4)].exprValue)));
                    }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 778 "compiler/parser.y"
    {
                                        SymTableEntry* e;

                                        Call *c;
                                        SymTableEntry *e1;
                                        e1 = (yyvsp[(1) - (2)].exprValue)->sym;
                                        c = (yyvsp[(2) - (2)].functionCall);
                                        char *orig_name = (yyvsp[(2) - (2)].functionCall)->name;
                                        c->name = strdup(e1->value.funcValue->name);

                                        //printf("Usage of %s as call in %d\n", e->value.funcValue->name, yylineno);

                                        // Check wether lvalue is a function

                                        if((yyvsp[(1) - (2)].exprValue) && (yyvsp[(1) - (2)].exprValue)->sym){
                                            e = (yyvsp[(1) - (2)].exprValue)->sym;

                                            if(e->type == LOCAL_VAR || e->type == GLOBAL_VAR || e->type == ARGUMENT_VAR){

                                                // If it's a variable, check wether we have to create a new one or its referencing an existing one
                                                if(!e->isActive){
                                                    //printf("Adding, I found it inactive on line %d %d\n", e->value.varValue->line, yylineno);
                                                    if(scope == 0){
                                                        insert(symTable, e->value.varValue->name, scope, yylineno, GLOBAL_VAR);
                                                    }else
                                                        insert(symTable, e->value.varValue->name, scope, yylineno, LOCAL_VAR);
                                                }else if(!is_valid(_call_stack, e, scope)){
                                                    if(e->value.varValue->scope != scope && e->value.varValue->scope != 0){
                                                        printf("input:%d: error: could not access variable %s\n", yylineno, e->value.varValue->name);
                                                        _valid_comp = 0;
                                                        YYABORT;
                                                    }
                                                }

                                                
                                            }
                                        }

                                        if((yyvsp[(2) - (2)].functionCall)->isMethod){
                                            Expr *h = (yyvsp[(1) - (2)].exprValue);

                                            if((yyvsp[(2) - (2)].functionCall)->elist->type == NIL_E){
                                                (yyvsp[(1) - (2)].exprValue) = member_expr(symTable, scope, (yyvsp[(1) - (2)].exprValue), orig_name); 
                                                emit_if_table_item(symTable, scope, (yyvsp[(1) - (2)].exprValue));

                                                (yyvsp[(1) - (2)].exprValue)->next = NULL;
                                                (yyval.exprValue) = make_call(symTable, scope, (yyvsp[(1) - (2)].exprValue), (yyvsp[(1) - (2)].exprValue));
                                            }else{
                                               
    
                                                (yyvsp[(1) - (2)].exprValue) = member_expr(symTable, scope, (yyvsp[(1) - (2)].exprValue), orig_name);
                                                emit_if_table_item(symTable, scope, (yyvsp[(1) - (2)].exprValue));

                                                (yyvsp[(1) - (2)].exprValue)->next = (yyvsp[(2) - (2)].functionCall)->elist;
                                                (yyvsp[(2) - (2)].functionCall)->elist = (yyvsp[(1) - (2)].exprValue);
                    
                                                (yyval.exprValue) = make_call(symTable, scope, (yyvsp[(1) - (2)].exprValue), reverse_elist(&(yyvsp[(2) - (2)].functionCall)->elist));
                                            }

                                        }else{
                                            (yyval.exprValue) = make_call(symTable, scope, (yyvsp[(1) - (2)].exprValue), reverse_elist(&(yyvsp[(2) - (2)].functionCall)->elist));
                                        }
                                    }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 841 "compiler/parser.y"
    {
                                                        Expr *g = (yyvsp[(2) - (6)].exprValue);
                                                        (yyval.exprValue) = make_call(symTable, scope, g, reverse_elist(&(yyvsp[(5) - (6)].exprValue)));
                                                                                                        }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 847 "compiler/parser.y"
    {(yyval.functionCall) = (yyvsp[(1) - (1)].functionCall);}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 848 "compiler/parser.y"
    {(yyval.functionCall) = (yyvsp[(1) - (1)].functionCall);}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 851 "compiler/parser.y"
    {
                                                                (yyval.functionCall) = function_call(0, NULL, scope, (yyvsp[(2) - (3)].exprValue));
                                                            }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 855 "compiler/parser.y"
    {
                                                                            (yyval.functionCall) = function_call(1, (yyvsp[(2) - (5)].strValue), scope, (yyvsp[(4) - (5)].exprValue));
                                                                        }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 859 "compiler/parser.y"
    {
                                                mk_bool_vmasm((yyvsp[(1) - (1)].exprValue));
                                                (yyval.exprValue) = (yyvsp[(1) - (1)].exprValue);
                                            }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 863 "compiler/parser.y"
    {
                                                Expr *head = (yyvsp[(1) - (3)].exprValue);

                                                head->next = (yyvsp[(3) - (3)].exprValue);

                                                (yyval.exprValue) = head;
                                            }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 871 "compiler/parser.y"
    {
                        (yyval.exprValue) = nil_expr();
                    }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 877 "compiler/parser.y"
    {
                        int i = 0;
                        Expr* t = expr(NEWTABLE_E);
                        t->sym  = new_temp(symTable, scope);
                        emit(TABLECREATE_I,t,NULL,NULL,next_quad(),yylineno);
                        Expr* tmp = (yyvsp[(2) - (3)].exprValue);
                        if(tmp->type != NIL_E){
                            while(tmp != NULL){
                                emit(TABLESETELEM_I,t,num_expr(i++),tmp,next_quad(),yylineno);
                                tmp = tmp->next;
                            }
                        }
                        (yyval.exprValue) = t;
                    }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 892 "compiler/parser.y"
    {
                        Expr* t = expr(NEWTABLE_E);
                        t->sym  = new_temp(symTable, scope);
                        emit(TABLECREATE_I, t, NULL, NULL, next_quad(), yylineno);
                        Expr* tmp = (yyvsp[(2) - (3)].exprValue);
                        while(tmp != NULL){
                            emit(TABLESETELEM_I, t, tmp->index, tmp->next_index, next_quad(), yylineno);
                            tmp = tmp->next;
                        }
                        (yyval.exprValue) = t;
                    }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 906 "compiler/parser.y"
    {
                        (yyval.exprValue) = (yyvsp[(1) - (1)].exprValue);
                    }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 910 "compiler/parser.y"
    {
                        Expr* tmp = (yyvsp[(1) - (3)].exprValue);
                        while(tmp->next != NULL){
                            tmp = tmp->next;
                        }
                        tmp->next   = (yyvsp[(3) - (3)].exprValue);
                        (yyval.exprValue) = (yyvsp[(1) - (3)].exprValue);
                    }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 921 "compiler/parser.y"
    {
                        mk_bool_vmasm((yyvsp[(4) - (5)].exprValue));
                        (yyval.exprValue)=expr(NEWTABLE_E);
                        (yyval.exprValue)->index= (yyvsp[(2) - (5)].exprValue);
                        (yyval.exprValue)->next_index  = (yyvsp[(4) - (5)].exprValue);
                    }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 930 "compiler/parser.y"
    {
                        (yyval.stmtValue) = stmt();
                    }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 934 "compiler/parser.y"
    {
                        (yyval.stmtValue) = (yyvsp[(2) - (3)].stmtValue);
                    }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 940 "compiler/parser.y"
    {
                        scope++; // Up scope
                    }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 945 "compiler/parser.y"
    {
                        // Scope down and hide old symbols
                        scope_down(symTable);
                    }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 951 "compiler/parser.y"
    {
                        (yyval.stmtValue) = (yyvsp[(1) - (1)].stmtValue);
                    }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 955 "compiler/parser.y"
    {
                        (yyval.stmtValue) = stmt();
                        (yyval.stmtValue)->breaklist = llist_merge((yyvsp[(1) - (2)].stmtValue)->breaklist, (yyvsp[(2) - (2)].stmtValue)->breaklist);
                        (yyval.stmtValue)->contlist = llist_merge((yyvsp[(1) - (2)].stmtValue)->contlist, (yyvsp[(2) - (2)].stmtValue)->contlist);
                    }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 962 "compiler/parser.y"
    {scope++;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 962 "compiler/parser.y"
    { enterscopespace(); resetfunctionlocalsoffset();}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 963 "compiler/parser.y"
    {    
                        scope--; 
                        _func_count++;

                        // Push function to stack
                        if((yyvsp[(1) - (6)].exprValue) && (yyvsp[(1) - (6)].exprValue)->sym)
                            push(_call_stack, (void*)(yyvsp[(1) - (6)].exprValue)->sym);
                        //printCallStack(stack, yylineno);
                    }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 973 "compiler/parser.y"
    {
                            _func_count--;
                            exitscopespace();
                            if((yyvsp[(1) - (8)].exprValue) && (yyvsp[(1) - (8)].exprValue)->sym)
                                (yyvsp[(1) - (8)].exprValue)->sym->total_locals = (yyvsp[(8) - (8)].numValue);

                            //printf("TOTAL LOCALS FOR SMTH: %d\n", $8);
                            
                            restorecurrscopeoffset(pop_and_top_offset(scopeoffsetstack));

                            SymTableEntry *last = (SymTableEntry*)top(_call_stack);

                            // Removing function from stack
                            if((yyvsp[(1) - (8)].exprValue) && (yyvsp[(1) - (8)].exprValue)->sym)
                                pop(_call_stack);

                            emit(FUNCEND_I, sym_expr(last), 0, 0, 0, yylineno);
                            int toPatch = *((int*)top(_funcstart_stack));
                            pop(_funcstart_stack);
                            patch_label(toPatch, next_quad());
                            (yyval.exprValue) = (yyvsp[(1) - (8)].exprValue);
                        }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 998 "compiler/parser.y"
    {
                        (yyval.numValue) = currscopeoffset();
                        //printf("CURSCOPEOFFSET : %d\n", $$);
                        exitscopespace();
                    }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 1004 "compiler/parser.y"
    {
                                SymTableEntry *e;

                                _func_name = (yyvsp[(2) - (2)].strValue);

                                // Search for libfunc
                                if((e = function_lookup(symTable, (yyvsp[(2) - (2)].strValue), scope)) == NULL){

                                    // Check libfuncs
                                    if((e = lookup(symTable, (yyvsp[(2) - (2)].strValue), 0, LIB_FUNC)) != NULL){
                                        printf("input:%d: error: shadowing of library function %s is not permitted\n", yylineno, (yyvsp[(2) - (2)].strValue));
                                        _valid_comp = 0;
                                        YYABORT;
                                    }else{
                                        (yyval.exprValue) = sym_expr(insert(symTable, (yyvsp[(2) - (2)].strValue), scope, yylineno, USER_FUNC));
                                    }
                                }else{
                                    if(e->type == USER_FUNC)
                                        printf("input:%d: error: duplicate user function %s, first defined in line %d\n", yylineno, (yyvsp[(2) - (2)].strValue), e->value.funcValue->line);
                                    else if(e->type == LIB_FUNC)
                                        printf("input:%d: error: shadowing of library function %s is not permitted\n", yylineno, (yyvsp[(2) - (2)].strValue));
                                    else
                                        printf("input:%d: error: function %s has conflicting type with variable %s first defined in line %d\n", yylineno, (yyvsp[(2) - (2)].strValue), e->value.varValue->name, e->value.varValue->line);
                                    _valid_comp = 0;
                                    YYABORT;
                                    (yyval.exprValue) = NULL;
                                }


                                if((yyval.exprValue) && (yyval.exprValue)->sym)
                                    (yyval.exprValue)->sym->iaddress = next_quad();

                                if((yyval.exprValue)){
                                    int *ti = (int*)malloc(sizeof(int));
                                    *ti = next_quad();
                                    push(_funcstart_stack, (void*)ti);
                                    emit(JUMP_I, 0, 0, 0, next_quad(), yylineno);
                                    emit(FUNCSTART_I, (yyval.exprValue), 0, 0, 0, yylineno);
                                }



                                push_offset(scopeoffsetstack, currscopeoffset());
                                
                                enterscopespace(); 
                                resetformalargsoffset();
                            }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 1051 "compiler/parser.y"
    {  
                                char *s;
                                s = (char *)malloc(8 * sizeof(char));
                                _func_name = s;
     
                                sprintf(s, "$%d", _anon_func_counter);

                                (yyval.exprValue) = sym_expr(insert(symTable, s, scope, yylineno, USER_FUNC));

                                _anon_func_counter++;

                                if((yyval.exprValue) && (yyval.exprValue)->sym)
                                    (yyval.exprValue)->sym->iaddress = next_quad();

                                int *ti = (int*)malloc(sizeof(int));
                                *ti = next_quad();
                                push(_funcstart_stack, (void*)ti);
                                emit(JUMP_I, 0, 0, 0, next_quad(), yylineno);
                                emit(FUNCSTART_I, (yyval.exprValue), 0, 0, 0, yylineno);
                                push_offset(scopeoffsetstack, currscopeoffset());

                                enterscopespace(); 
                                resetformalargsoffset();
                            }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 1076 "compiler/parser.y"
    {
                                (yyval.exprValue) = num_expr((yyvsp[(1) - (1)].numValue));
                            }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 1079 "compiler/parser.y"
    {   
                                (yyval.exprValue) = string_expr((yyvsp[(1) - (1)].strValue));
                            }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 1082 "compiler/parser.y"
    {
                                (yyval.exprValue) = nil_expr();
                            }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 1085 "compiler/parser.y"
    {
                                (yyval.exprValue) = bool_expr(1);
                            }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 1088 "compiler/parser.y"
    {
                                (yyval.exprValue) = bool_expr(0);
                            }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 1093 "compiler/parser.y"
    {
                        _func_locals++;
                    }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 1097 "compiler/parser.y"
    {
                        _func_locals++;
                    }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 1100 "compiler/parser.y"
    {}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 1104 "compiler/parser.y"
    {
                        SymTableEntry *e, *a;
                        (yyval.exprValue) = NULL;

                        if((e = lookup(symTable, (yyvsp[(1) - (1)].strValue), 0, LIB_FUNC)) != NULL){
                            printf("input:%d: error: argument %s in function %s attempting to shadow a library function\n", yylineno, (yyvsp[(1) - (1)].strValue), _func_name);
                            _valid_comp = 0;
                            YYABORT;
                        }else{
                            if((e = lookup(symTable, _func_name, scope - 1, USER_FUNC)) != NULL){
                                if((a = lookup_active(symTable, (yyvsp[(1) - (1)].strValue), scope)) == NULL){
                                    (yyval.exprValue) = sym_expr(insert(symTable, (yyvsp[(1) - (1)].strValue), scope, yylineno, ARGUMENT_VAR));
                                }else{
                                    printf("input:%d: error: duplicate argument %s in function %s\n", yylineno, (yyvsp[(1) - (1)].strValue), e->value.funcValue->name);
                                    _valid_comp = 0;
                                    YYABORT;
                                }
                            } 
                        }                         
                    }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 1126 "compiler/parser.y"
    {
                        (yyval.stmtValue) = stmt();
                        (yyval.stmtValue)->contlist = (yyvsp[(2) - (2)].stmtValue)->contlist;
                        (yyval.stmtValue)->breaklist = (yyvsp[(2) - (2)].stmtValue)->breaklist;
                        patch_label((yyvsp[(1) - (2)].numValue), next_quad());
                    }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 1133 "compiler/parser.y"
    {
                        (yyval.stmtValue) = stmt();
                        (yyval.stmtValue)->contlist = llist_merge((yyvsp[(2) - (4)].stmtValue)->contlist, (yyvsp[(4) - (4)].stmtValue)->contlist);
                        (yyval.stmtValue)->breaklist = llist_merge((yyvsp[(2) - (4)].stmtValue)->breaklist, (yyvsp[(4) - (4)].stmtValue)->breaklist);
                        patch_label((yyvsp[(1) - (4)].numValue), (yyvsp[(3) - (4)].numValue) + 1);
                        patch_label((yyvsp[(3) - (4)].numValue), next_quad());
                    }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 1143 "compiler/parser.y"
    {
                        (yyval.numValue) = next_quad();
                        emit(JUMP_I, NULL, NULL, NULL, 0, yylineno);
                    }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 1148 "compiler/parser.y"
    { _in_control++; }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 1149 "compiler/parser.y"
    {
                        mk_bool_vmasm((yyvsp[(4) - (5)].exprValue));

                        emit(IF_EQ_I, NULL, (yyvsp[(4) - (5)].exprValue), bool_expr(1), next_quad() + 2, yylineno);
                        (yyval.numValue) = next_quad();
                        emit(JUMP_I, NULL, NULL, NULL, 0, yylineno);
                    }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 1158 "compiler/parser.y"
    {
                        (yyval.numValue) = next_quad();
                    }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 1162 "compiler/parser.y"
    { _in_control++;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 1163 "compiler/parser.y"
    {
                        mk_bool_vmasm((yyvsp[(3) - (4)].exprValue));
                        emit(IF_EQ_I, NULL, (yyvsp[(3) - (4)].exprValue), bool_expr(1), next_quad() + 2, yylineno);
                        (yyval.numValue) = next_quad();
                        emit(JUMP_I, NULL, NULL, NULL, 0, yylineno);
                    }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 1171 "compiler/parser.y"
    {
                        (yyval.stmtValue) = stmt();
                        (yyval.stmtValue)->contlist = (yyvsp[(3) - (3)].stmtValue)->contlist;
                        (yyval.stmtValue)->breaklist = (yyvsp[(3) - (3)].stmtValue)->breaklist;

                        emit(JUMP_I, NULL, NULL, NULL, (yyvsp[(1) - (3)].numValue), yylineno);
                        patch_label((yyvsp[(2) - (3)].numValue), next_quad());
                        llist_patch((yyvsp[(3) - (3)].stmtValue)->breaklist, next_quad());
                        llist_patch((yyvsp[(3) - (3)].stmtValue)->contlist, (yyvsp[(1) - (3)].numValue));
                    }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 1183 "compiler/parser.y"
    {
                        (yyval.exprValue) = bool_expr(1);
                        mk_bool_vmasm((yyvsp[(5) - (6)].exprValue));
                        (yyval.exprValue)->test = (yyvsp[(4) - (6)].numValue);
                        (yyval.exprValue)->enter = next_quad();
                        emit(IF_EQ_I, NULL, (yyvsp[(5) - (6)].exprValue), bool_expr(1), next_quad(), yylineno);
                    }
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 1191 "compiler/parser.y"
    { ++_in_control;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 1194 "compiler/parser.y"
    {
                        (yyval.stmtValue) = stmt();
                        (yyval.stmtValue)->contlist = (yyvsp[(6) - (7)].stmtValue)->contlist;
                        (yyval.stmtValue)->breaklist = (yyvsp[(6) - (7)].stmtValue)->breaklist;

                        patch_label((yyvsp[(1) - (7)].exprValue)->enter, (yyvsp[(5) - (7)].numValue) + 1);
                        patch_label((yyvsp[(2) - (7)].numValue), next_quad());
                        patch_label((yyvsp[(5) - (7)].numValue), (yyvsp[(1) - (7)].exprValue)->test);
                        patch_label((yyvsp[(7) - (7)].numValue), (yyvsp[(2) - (7)].numValue) + 1);

                        llist_patch((yyvsp[(6) - (7)].stmtValue)->breaklist,next_quad());
                        llist_patch((yyvsp[(6) - (7)].stmtValue)->contlist,(yyvsp[(2) - (7)].numValue)+1);
                    }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 1208 "compiler/parser.y"
    {
                        (yyval.numValue) = next_quad();
                        emit(JUMP_I, NULL, NULL, NULL, 0, yylineno);
                    }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 1214 "compiler/parser.y"
    {
                        emit(RET_I, NULL, NULL, NULL, 0, yylineno);
                    }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 1218 "compiler/parser.y"
    {
                        mk_bool_vmasm((yyvsp[(2) - (3)].exprValue));
                        emit(RET_I, (yyvsp[(2) - (3)].exprValue), NULL, NULL, 0, yylineno);
                        (yyval.stmtValue) = (yyvsp[(2) - (3)].exprValue);
                    }
    break;



/* Line 1455 of yacc.c  */
#line 3391 "compiler/parser.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 1227 "compiler/parser.y"


int yyerror(char *yaccProvidedMessage){
    printf("alpha: %s\n", yaccProvidedMessage);
    return 1;
}

void printSymTable(SymTable *symTable){
    SymTableEntry *e;
    int i;

    printf("----------------------------------------------------------------\n");
    printf("Symbol Table  [Name                ] [Line] [Scope] [Type      ]\n");
    printf("----------------------------------------------------------------\n");
    for(i = 0; i < SIZE; i++){
        e = symTable->table[i];

        if(e == NULL) continue;

        while(e != NULL){
            if(e->type == LOCAL_VAR || e->type == GLOBAL_VAR || e->type == ARGUMENT_VAR){
                printf("SymTableEntry [%-20s] [%-4d] [%-5d] [%-10s]\n", e->value.varValue->name, e->value.varValue->line, e->value.varValue->scope, typeToString[e->type]);
            }else{
                printf("SymTableEntry [%-20s] [%-4d] [%-5d] [%-10s]\n", e->value.funcValue->name, e->value.funcValue->line, e->value.funcValue->scope, typeToString[e->type]);
            }

            e = e->nextEntry;
        }
    }
    printf("----------------------------------------------------------------\n");
}

void printByScope(SymTable *symTable){
    SymTableEntry *scopeIter, *e;
    int scope = 0;

    printf("----------------------------------------------------------------\n");
    printf("Symbol Table  [Name                ] [Line] [Scope] [Type      ]\n");
    printf("----------------------------------------------------------------\n");
    scopeIter = symTable->scopeChain;

    while(scopeIter != NULL){
        e = scopeIter;
        printf("|                          SCOPE %d                             |\n", scope);
        printf("----------------------------------------------------------------\n");

        while(e != NULL){

            if(e->type == LOCAL_VAR || e->type == GLOBAL_VAR || e->type == ARGUMENT_VAR){
                printf("SymTableEntry [%-20s] [%-4d] [%-5d] [%-10s]\n", e->value.varValue->name, e->value.varValue->line, e->value.varValue->scope, typeToString[e->type]);
            }else{
                printf("SymTableEntry [%-20s] [%-4d] [%-5d] [%-10s]\n", e->value.funcValue->name, e->value.funcValue->line, e->value.funcValue->scope, typeToString[e->type]);
            }
            
            e = e->nextInScope;
        }

        scopeIter = scopeIter->nextScope;
        if(scopeIter != NULL){
            if(scopeIter->type == LOCAL_VAR || scopeIter->type == GLOBAL_VAR || scopeIter->type == ARGUMENT_VAR){
                scope = scopeIter->value.varValue->scope;
            }else{
                scope = scopeIter->value.funcValue->scope;
            }
        }


        printf("----------------------------------------------------------------\n");
    }

    return;
}

int main(int argc, char **argv){

    // redir stdout
    //freopen("quads.txt", "w", stdout);

    if(argc > 1){
        if(!(yyin = fopen(argv[1], "r"))){
            printf("File not found\n");
            exit(0);
        }
    }else{
        yyin = stdin;

    }

    init_quads();
    symTable = init_sym_table();
    _call_stack = stack();
    _funcstart_stack = stack();
    scopeoffsetstack = init_offset_stack();
    yyparse();

    if(!_valid_comp){
        printf("alpha: compilation failed\n");
        return 0;
    }

    //printSymTable(symTable);
    printByScope(symTable);
    printQuads();

    parse_target_code();

    mk_bin("../AVM/target.abc");

    return 0;
}

