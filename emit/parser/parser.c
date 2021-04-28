/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include <assert.h>
    #include <stddef.h>
    #include <string.h>
    #include "parser.h"
    #include "symbol_table.h"
    #include "intermediate.h"
    #include "tools.h"

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
        "TABLEGETELEM",   "TABLESETELEM"
    };

    char *_func_name;
    int _func_count = 0;
    int _anon_func_counter = 0;
    int _further_checks = 0;
    int _func_lvalue_check = 0;
    int _in_control = 0;
    long _temp_counter = 0;

    int scope;
    extern int yylineno;
    extern char *yytext;
    extern FILE *yyin;
    SymTable *symTable;
    CallStack *stack;

#line 125 "parser.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 58 "parser.y"

    char*   strValue;
    double  numValue;

    struct SymTableEntry   *symValue;
    struct Expression      *exprValue;

    struct Call            *functionCall;

#line 281 "parser.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */



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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   615

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  176

#define YYUNDEFTOK  2
#define YYMAXUTOK   302


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    93,    93,    95,    96,    99,   100,   101,   102,   103,
     113,   120,   128,   129,   130,   133,   136,   140,   144,   148,
     152,   156,   161,   166,   171,   176,   181,   186,   190,   194,
     199,   200,   201,   202,   233,   264,   295,   326,   332,   331,
     367,   394,   395,   396,   397,   402,   422,   444,   458,   462,
     463,   464,   465,   468,   471,   509,   515,   516,   519,   523,
     527,   530,   537,   540,   541,   544,   545,   548,   551,   552,
     555,   559,   564,   565,   568,   568,   568,   589,   615,   629,
     632,   635,   638,   641,   645,   646,   647,   650,   666,   667,
     670,   672,   674,   676,   678,   680,   681
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
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
  "statements", "statement", "expression", "term", "assignexpr", "$@1",
  "primary", "lvalue", "member", "call", "callsuffix", "normcall",
  "methodcall", "elist", "objectdef", "indexed", "indexedelem", "block",
  "blockstart", "blockend", "blockstmt", "funcdef", "$@2", "$@3",
  "funcstart", "const", "idlist", "arg", "ifstmt", "ifstart", "whilestmt",
  "whilestart", "forstmt", "forstart", "returnstmt", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302
};
# endif

#define YYPACT_NINF (-78)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-39)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -78,     5,   174,   -78,   -78,   -78,   -78,   -17,   -15,    -5,
      18,   205,   -21,    -4,   255,    25,   -78,   -78,   -78,    13,
     -78,   224,   -78,    33,    41,    41,   255,   -78,   272,   -78,
     -78,   -78,   122,   -78,   -10,   -78,   -78,   104,   -78,    14,
     -78,   -78,   255,   -78,   255,   -78,   255,   -78,   -78,   -78,
     -78,   -78,   -78,   287,   -78,   -78,   -78,   -78,   255,   320,
      22,    35,    31,   335,    20,   -78,    40,   -18,   -10,   -18,
     -78,   255,   255,   -78,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,    57,    58,   -78,
     -78,    32,   -78,   -78,   -78,   255,   255,    60,   -78,   174,
     -78,    43,   -78,   368,   383,    59,   -78,   416,   255,   -78,
     -78,    45,   -78,    62,    63,   403,   556,   -11,   -11,   -78,
     -78,   -78,   569,   569,   432,   432,   432,   432,   449,    64,
     -78,    66,   255,   482,    68,   -78,   -78,   -78,    80,   174,
     174,   255,   255,   -78,   -78,   255,    62,   -78,   -78,   255,
     542,   -78,   -78,   -78,    69,    70,    78,   -78,   496,   529,
      73,    75,   -78,    80,   174,   255,   -78,   -78,   -78,    65,
     -78,   -78,    76,   -78,   174,   -78
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     0,     2,     1,    79,    45,    80,     0,     0,     0,
      78,     0,     0,     0,     0,     0,    82,    83,    81,    62,
      70,     0,    14,     0,     0,     0,     0,     3,     0,    29,
      15,    37,    40,    48,    41,    42,    12,     0,    13,     0,
      44,     6,     0,     7,     0,     8,    62,     9,    90,    92,
      94,    77,    95,     0,    10,    11,    32,    46,     0,    60,
       0,     0,    65,     0,     0,    47,     0,    33,     0,    35,
      31,     0,     0,     5,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    62,     0,     0,    34,
      36,     0,    54,    56,    57,     0,    62,     0,    71,    72,
      68,     0,    74,     0,     0,     0,    96,     0,    62,    63,
      64,     0,    30,    43,     0,    27,    28,    16,    17,    18,
      19,    20,    25,    26,    21,    23,    22,    24,     0,     0,
      49,     0,     0,     0,     0,    51,    73,    69,    86,     0,
       0,     0,     0,    61,    66,    62,     0,    50,    58,    62,
      39,    52,    53,    87,     0,    84,    88,    91,     0,     0,
       0,     0,    75,    86,     0,    62,    67,    55,    59,     0,
      85,    89,     0,    76,     0,    93
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -78,   -78,   -78,     2,    -2,   -78,   -78,   -78,   -78,    24,
     -78,    28,   -78,   -78,   -78,   -45,   -78,    -8,   -78,   -77,
     -78,     4,    -3,   -19,   -78,   -78,   -78,   -78,   -57,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    99,    59,    29,    30,    91,    31,    32,
      33,    34,    92,    93,    94,    60,    35,    61,    62,    36,
      37,   100,   101,    38,   138,   169,    39,    40,   154,   155,
      41,    42,    43,    44,    45,    46,    47
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      28,   105,    64,    85,    27,     3,    54,    86,    48,    53,
      49,    95,    56,    87,    88,    96,     4,     5,     6,    63,
      50,    97,    51,    55,    70,    76,    77,    78,    14,    57,
      15,    16,    17,    18,    19,    28,    58,    65,    21,   102,
     103,   129,   104,    23,   109,     5,   113,   114,    67,    69,
      10,   134,    68,    68,    24,    25,   107,   110,    15,   111,
      26,   130,   131,   143,   135,   132,    66,    98,    58,   115,
     116,    23,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   153,   164,   141,   145,    20,   146,
     148,   149,   173,   133,   152,   162,   136,    28,   163,   167,
     160,   168,   174,   144,   161,   137,   170,     4,     5,     6,
       7,     0,     8,     9,    10,    11,    12,    13,     0,    14,
     172,    15,    16,    17,    18,    19,     0,    20,    98,    21,
     150,    22,     0,     0,    23,     0,     0,    28,    28,   158,
     159,   156,   157,    85,     0,    24,    25,    86,     0,     0,
       0,    26,     0,    87,    88,   -38,     0,     0,     0,     0,
       0,     0,    28,    89,    90,     0,   171,     0,     0,     0,
       0,     0,    28,     0,     0,     0,   175,     4,     5,     6,
       7,     0,     8,     9,    10,    11,    12,    13,     0,    14,
       0,    15,    16,    17,    18,    19,     0,    20,     0,    21,
       0,    22,     0,     0,    23,     0,     0,     0,     4,     5,
       6,     0,     0,     0,     0,    24,    25,     0,     0,     0,
      14,    26,    15,    16,    17,    18,    19,     4,     5,     6,
      21,     0,    52,     0,    10,    23,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    24,    25,     0,    21,
       0,     0,    26,     0,    23,     0,     0,     0,     4,     5,
       6,     0,     0,     0,     0,    24,    25,     0,     0,     0,
      14,    26,    15,    16,    17,    18,    19,     0,     0,     0,
      21,     0,     0,     0,     0,    23,    71,     0,    72,     0,
       0,     0,     0,     0,     0,     0,    24,    25,     0,    73,
       0,    71,    26,    72,     0,     0,    74,    75,    76,    77,
      78,    79,    80,     0,   106,    81,    82,    83,    84,     0,
       0,    74,    75,    76,    77,    78,    79,    80,     0,     0,
      81,    82,    83,    84,    71,     0,    72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   108,    71,
       0,    72,     0,     0,    74,    75,    76,    77,    78,    79,
      80,   112,     0,    81,    82,    83,    84,     0,     0,    74,
      75,    76,    77,    78,    79,    80,     0,     0,    81,    82,
      83,    84,    71,     0,    72,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   139,     0,     0,    71,     0,    72,
       0,     0,    74,    75,    76,    77,    78,    79,    80,   140,
       0,    81,    82,    83,    84,     0,     0,    74,    75,    76,
      77,    78,    79,    80,     0,     0,    81,    82,    83,    84,
      71,     0,    72,     0,     0,     0,     0,    74,    75,    76,
      77,    78,    79,    80,     0,   142,    81,    82,    83,    84,
      74,    75,    76,    77,    78,    79,    80,     0,     0,    81,
      82,    83,    84,    71,     0,    72,    74,    75,    76,    77,
      78,   147,     0,     0,     0,   -39,   -39,   -39,   -39,     0,
       0,     0,     0,    74,    75,    76,    77,    78,    79,    80,
       0,     0,    81,    82,    83,    84,    71,     0,    72,     0,
       0,     0,     0,     0,   151,     0,     0,     0,     0,     0,
      71,     0,    72,     0,     0,     0,    74,    75,    76,    77,
      78,    79,    80,   165,     0,    81,    82,    83,    84,     0,
      74,    75,    76,    77,    78,    79,    80,     0,     0,    81,
      82,    83,    84,    71,     0,    72,     0,     0,     0,     0,
       0,     0,     0,   166,     0,     0,    71,     0,    72,     0,
       0,     0,     0,    74,    75,    76,    77,    78,    79,    80,
      71,     0,    81,    82,    83,    84,    74,    75,    76,    77,
      78,    79,    80,     0,     0,    81,    82,    83,    84,     0,
      74,    75,    76,    77,    78,    79,    80,     0,     0,    81,
      82,    83,    84,    74,    75,    76,    77,    78,   -39,   -39,
       0,     0,    81,    82,    83,    84
};

static const yytype_int16 yycheck[] =
{
       2,    46,    21,    21,     2,     0,    27,    25,    25,    11,
      25,    21,    14,    31,    32,    25,     3,     4,     5,    21,
      25,    31,     4,    27,    26,    36,    37,    38,    15,     4,
      17,    18,    19,    20,    21,    37,    23,     4,    25,    25,
      42,    86,    44,    30,    22,     4,    26,    66,    24,    25,
      10,    96,    24,    25,    41,    42,    58,    22,    17,    28,
      47,     4,     4,   108,     4,    33,    25,    24,    23,    71,
      72,    30,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,     4,     7,    27,    25,    23,    26,
      26,    25,   169,    95,    26,    26,    99,    99,    28,    26,
     145,    26,    26,   111,   149,   101,   163,     3,     4,     5,
       6,    -1,     8,     9,    10,    11,    12,    13,    -1,    15,
     165,    17,    18,    19,    20,    21,    -1,    23,    24,    25,
     132,    27,    -1,    -1,    30,    -1,    -1,   139,   140,   141,
     142,   139,   140,    21,    -1,    41,    42,    25,    -1,    -1,
      -1,    47,    -1,    31,    32,    33,    -1,    -1,    -1,    -1,
      -1,    -1,   164,    41,    42,    -1,   164,    -1,    -1,    -1,
      -1,    -1,   174,    -1,    -1,    -1,   174,     3,     4,     5,
       6,    -1,     8,     9,    10,    11,    12,    13,    -1,    15,
      -1,    17,    18,    19,    20,    21,    -1,    23,    -1,    25,
      -1,    27,    -1,    -1,    30,    -1,    -1,    -1,     3,     4,
       5,    -1,    -1,    -1,    -1,    41,    42,    -1,    -1,    -1,
      15,    47,    17,    18,    19,    20,    21,     3,     4,     5,
      25,    -1,    27,    -1,    10,    30,    -1,    -1,    -1,    15,
      -1,    17,    18,    19,    20,    21,    41,    42,    -1,    25,
      -1,    -1,    47,    -1,    30,    -1,    -1,    -1,     3,     4,
       5,    -1,    -1,    -1,    -1,    41,    42,    -1,    -1,    -1,
      15,    47,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    30,    14,    -1,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    -1,    27,
      -1,    14,    47,    16,    -1,    -1,    34,    35,    36,    37,
      38,    39,    40,    -1,    27,    43,    44,    45,    46,    -1,
      -1,    34,    35,    36,    37,    38,    39,    40,    -1,    -1,
      43,    44,    45,    46,    14,    -1,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    14,
      -1,    16,    -1,    -1,    34,    35,    36,    37,    38,    39,
      40,    26,    -1,    43,    44,    45,    46,    -1,    -1,    34,
      35,    36,    37,    38,    39,    40,    -1,    -1,    43,    44,
      45,    46,    14,    -1,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    14,    -1,    16,
      -1,    -1,    34,    35,    36,    37,    38,    39,    40,    26,
      -1,    43,    44,    45,    46,    -1,    -1,    34,    35,    36,
      37,    38,    39,    40,    -1,    -1,    43,    44,    45,    46,
      14,    -1,    16,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    40,    -1,    29,    43,    44,    45,    46,
      34,    35,    36,    37,    38,    39,    40,    -1,    -1,    43,
      44,    45,    46,    14,    -1,    16,    34,    35,    36,    37,
      38,    22,    -1,    -1,    -1,    43,    44,    45,    46,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    40,
      -1,    -1,    43,    44,    45,    46,    14,    -1,    16,    -1,
      -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,
      14,    -1,    16,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    40,    27,    -1,    43,    44,    45,    46,    -1,
      34,    35,    36,    37,    38,    39,    40,    -1,    -1,    43,
      44,    45,    46,    14,    -1,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    -1,    -1,    14,    -1,    16,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    40,
      14,    -1,    43,    44,    45,    46,    34,    35,    36,    37,
      38,    39,    40,    -1,    -1,    43,    44,    45,    46,    -1,
      34,    35,    36,    37,    38,    39,    40,    -1,    -1,    43,
      44,    45,    46,    34,    35,    36,    37,    38,    39,    40,
      -1,    -1,    43,    44,    45,    46
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    49,    50,     0,     3,     4,     5,     6,     8,     9,
      10,    11,    12,    13,    15,    17,    18,    19,    20,    21,
      23,    25,    27,    30,    41,    42,    47,    51,    52,    53,
      54,    56,    57,    58,    59,    64,    67,    68,    71,    74,
      75,    78,    79,    80,    81,    82,    83,    84,    25,    25,
      25,     4,    27,    52,    27,    27,    52,     4,    23,    52,
      63,    65,    66,    52,    71,     4,    25,    57,    59,    57,
      52,    14,    16,    27,    34,    35,    36,    37,    38,    39,
      40,    43,    44,    45,    46,    21,    25,    31,    32,    41,
      42,    55,    60,    61,    62,    21,    25,    31,    24,    51,
      69,    70,    25,    52,    52,    63,    27,    52,    28,    22,
      22,    28,    26,    26,    71,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    63,
       4,     4,    33,    52,    63,     4,    70,    69,    72,    26,
      26,    27,    29,    63,    65,    25,    26,    22,    26,    25,
      52,    22,    26,     4,    76,    77,    51,    51,    52,    52,
      63,    63,    26,    28,     7,    27,    24,    26,    26,    73,
      76,    51,    63,    67,    26,    51
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    49,    50,    50,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      53,    53,    53,    53,    53,    53,    53,    53,    55,    54,
      56,    56,    56,    56,    56,    57,    57,    57,    57,    58,
      58,    58,    58,    59,    59,    59,    60,    60,    61,    62,
      63,    63,    63,    64,    64,    65,    65,    66,    67,    67,
      68,    69,    70,    70,    72,    73,    71,    74,    74,    75,
      75,    75,    75,    75,    76,    76,    76,    77,    78,    78,
      79,    80,    81,    82,    83,    84,    84
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     2,     1,     1,     1,     1,
       2,     2,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       3,     2,     2,     2,     2,     2,     2,     1,     0,     4,
       1,     1,     1,     3,     1,     1,     2,     2,     1,     3,
       4,     3,     4,     4,     2,     6,     1,     1,     3,     5,
       1,     3,     0,     3,     3,     1,     3,     5,     2,     3,
       1,     1,     1,     2,     0,     0,     7,     2,     1,     1,
       1,     1,     1,     1,     1,     3,     0,     1,     4,     6,
       2,     4,     2,     8,     2,     2,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
  case 9:
#line 103 "parser.y"
                                        {
                                            if(scope==0 && _in_control==0){
                                                printf("input:%d: error:  Return outside of scope \n", yylineno);
                                            }else{
                                                 //printf("Returns  %d %d\n", e->value.varValue->line, yylineno);
                                                if(_func_count>0 && _in_control >0) _in_control--;
                                                else _in_control=0;
                                            }
                                        }
#line 1678 "parser.c"
    break;

  case 10:
#line 113 "parser.y"
                                        {
                                            if(scope==0 && _in_control==0){
                                                printf("input:%d: error:  Break outside of scope \n", yylineno);
                                            }else{
                                                if(_in_control>0)  _in_control--;
                                            }
                                        }
#line 1690 "parser.c"
    break;

  case 11:
#line 120 "parser.y"
                                        { 
                                            if(scope==0 && _in_control==0){

                                                printf("input:%d: error:  Continue outside of scope \n", yylineno);
                                            }else{
                                                if(_in_control>0)  _in_control--;
                                            }
                                        }
#line 1703 "parser.c"
    break;

  case 15:
#line 133 "parser.y"
                                                {

                                                }
#line 1711 "parser.c"
    break;

  case 16:
#line 136 "parser.y"
                                                {
                                                    (yyval.exprValue) = sym_expr(new_temp(symTable, scope));
                                                    emit(ADD_I, (yyval.exprValue), (yyvsp[-2].exprValue), (yyvsp[0].exprValue), 0, yylineno);
                                                }
#line 1720 "parser.c"
    break;

  case 17:
#line 140 "parser.y"
                                                {
                                                    (yyval.exprValue) = sym_expr(new_temp(symTable, scope));
                                                    emit(SUB_I, (yyval.exprValue), (yyvsp[-2].exprValue), (yyvsp[0].exprValue), 0, yylineno);
                                                }
#line 1729 "parser.c"
    break;

  case 18:
#line 144 "parser.y"
                                                {
                                                    (yyval.exprValue) = sym_expr(new_temp(symTable, scope));
                                                    emit(MUL_I, (yyval.exprValue), (yyvsp[-2].exprValue), (yyvsp[0].exprValue), 0, yylineno);
                                                }
#line 1738 "parser.c"
    break;

  case 19:
#line 148 "parser.y"
                                                {
                                                    (yyval.exprValue) = sym_expr(new_temp(symTable, scope));
                                                    emit(DIV_I, (yyval.exprValue), (yyvsp[-2].exprValue), (yyvsp[0].exprValue), 0, yylineno);
                                                }
#line 1747 "parser.c"
    break;

  case 20:
#line 152 "parser.y"
                                                {
                                                    (yyval.exprValue) = sym_expr(new_temp(symTable, scope));
                                                    emit(MOD_I, (yyval.exprValue), (yyvsp[-2].exprValue), (yyvsp[0].exprValue), 0, yylineno);
                                                }
#line 1756 "parser.c"
    break;

  case 21:
#line 157 "parser.y"
                                                {
                                                    (yyval.exprValue) = sym_expr(new_temp(symTable, scope));
                                                    emit_compares(IF_GREATER_I, (yyval.exprValue), (yyvsp[-2].exprValue), (yyvsp[0].exprValue), symTable, 0, yylineno);
                                                }
#line 1765 "parser.c"
    break;

  case 22:
#line 162 "parser.y"
                                                {
                                                    (yyval.exprValue) = sym_expr(new_temp(symTable, scope));
                                                    emit_compares(IF_GREATEREQ_I, (yyval.exprValue), (yyvsp[-2].exprValue), (yyvsp[0].exprValue), symTable, 0, yylineno);
                                                }
#line 1774 "parser.c"
    break;

  case 23:
#line 167 "parser.y"
                                                {
                                                    (yyval.exprValue) = sym_expr(new_temp(symTable, scope));
                                                    emit_compares(IF_LESS_I, (yyval.exprValue), (yyvsp[-2].exprValue), (yyvsp[0].exprValue), symTable, 0, yylineno);
                                                }
#line 1783 "parser.c"
    break;

  case 24:
#line 172 "parser.y"
                                                {
                                                    (yyval.exprValue) = sym_expr(new_temp(symTable, scope));
                                                    emit_compares(IF_LESSEQ_I, (yyval.exprValue), (yyvsp[-2].exprValue), (yyvsp[0].exprValue), symTable, 0, yylineno);
                                                }
#line 1792 "parser.c"
    break;

  case 25:
#line 177 "parser.y"
                                                {
                                                    (yyval.exprValue) = sym_expr(new_temp(symTable, scope));
                                                    emit_compares(IF_EQ_I, (yyval.exprValue), (yyvsp[-2].exprValue), (yyvsp[0].exprValue), symTable, 0, yylineno);
                                                }
#line 1801 "parser.c"
    break;

  case 26:
#line 182 "parser.y"
                                                {
                                                    (yyval.exprValue) = sym_expr(new_temp(symTable, scope));
                                                    emit_compares(IF_NOTEQ_I, (yyval.exprValue), (yyvsp[-2].exprValue), (yyvsp[0].exprValue), symTable, 0, yylineno);
                                                }
#line 1810 "parser.c"
    break;

  case 27:
#line 186 "parser.y"
                                                {
                                                    (yyval.exprValue) = sym_expr(new_temp(symTable, scope));
                                                    emit_logical(AND_I, (yyval.exprValue), (yyvsp[-2].exprValue), (yyvsp[0].exprValue), symTable, 0, yylineno);
                                                }
#line 1819 "parser.c"
    break;

  case 28:
#line 190 "parser.y"
                                                {
                                                    (yyval.exprValue) = sym_expr(new_temp(symTable, scope));
                                                    emit_logical(OR_I, (yyval.exprValue), (yyvsp[-2].exprValue), (yyvsp[0].exprValue), symTable, 0, yylineno);
                                                }
#line 1828 "parser.c"
    break;

  case 29:
#line 194 "parser.y"
                        {
                            (yyval.exprValue) = (yyvsp[0].exprValue);
                        }
#line 1836 "parser.c"
    break;

  case 33:
#line 202 "parser.y"
                                   {               
                            SymTableEntry *e;

                            // Check wether lvalue is a function

                            if((yyvsp[0].exprValue) && (yyvsp[0].exprValue)->sym && _further_checks){
                                (yyval.exprValue) = (yyvsp[0].exprValue);
                                e = (yyvsp[0].exprValue)->sym;

                                if(e->type == LOCAL_VAR || e->type == GLOBAL_VAR || e->type == ARGUMENT_VAR){

                                    // If it's a variable, check wether we have to create a new one or its referencing an existing one
                                    if(!e->isActive){
                                        //printf("Adding, I found it inactive on line %d %d\n", e->value.varValue->line, yylineno);
                                        if(scope == 0){
                                            (yyval.exprValue) = sym_expr(insert(symTable, e->value.varValue->name, scope, yylineno, GLOBAL_VAR));
                                        }else
                                            (yyval.exprValue) = sym_expr(insert(symTable, e->value.varValue->name, scope, yylineno, LOCAL_VAR));
                                    }else if(!is_valid(stack, e, scope)){
                                        if(e->value.varValue->scope != scope){
                                            printf("input:%d: error: could not access variable %s\n", yylineno, e->value.varValue->name);
                                        }
                                    }

                                }else{
                                    
                                    // Functions can not be l-values
                                    if(_func_lvalue_check) printf("input:%d: error: on function %s, functions cannot be l-values\n", yylineno, e->value.funcValue->name);
                                }
                            }
                        }
#line 1872 "parser.c"
    break;

  case 34:
#line 233 "parser.y"
                                   {               
                            SymTableEntry *e;

                            // Check wether lvalue is a function

                            if((yyvsp[-1].exprValue) && (yyvsp[-1].exprValue)->sym && _further_checks){
                                (yyval.exprValue) = (yyvsp[-1].exprValue);
                                e = (yyvsp[-1].exprValue)->sym;

                                if(e->type == LOCAL_VAR || e->type == GLOBAL_VAR || e->type == ARGUMENT_VAR){

                                    // If it's a variable, check wether we have to create a new one or its referencing an existing one
                                    if(!e->isActive){
                                        //printf("Adding, I found it inactive on line %d %d\n", e->value.varValue->line, yylineno);
                                        if(scope == 0){
                                            (yyval.exprValue) = sym_expr(insert(symTable, e->value.varValue->name, scope, yylineno, GLOBAL_VAR));
                                        }else
                                            (yyval.exprValue) = sym_expr(insert(symTable, e->value.varValue->name, scope, yylineno, LOCAL_VAR));
                                    }else if(!is_valid(stack, e, scope)){
                                        if(e->value.varValue->scope != scope){
                                            printf("input:%d: error: could not access variable %s\n", yylineno, e->value.varValue->name);
                                        }
                                    }

                                }else{
                                    
                                    // Functions can not be l-values
                                    if(_func_lvalue_check) printf("input:%d: error: on function %s, functions cannot be l-values\n", yylineno, e->value.funcValue->name);
                                }
                            }
                        }
#line 1908 "parser.c"
    break;

  case 35:
#line 264 "parser.y"
                                     {               
                            SymTableEntry *e;

                            // Check wether lvalue is a function

                            if((yyvsp[0].exprValue) && (yyvsp[0].exprValue)->sym && _further_checks){
                                (yyval.exprValue) = (yyvsp[0].exprValue);
                                e = (yyvsp[0].exprValue)->sym;

                                if(e->type == LOCAL_VAR || e->type == GLOBAL_VAR || e->type == ARGUMENT_VAR){

                                    // If it's a variable, check wether we have to create a new one or its referencing an existing one
                                    if(!e->isActive){
                                        //printf("Adding, I found it inactive on line %d %d\n", e->value.varValue->line, yylineno);
                                        if(scope == 0){
                                            (yyval.exprValue) = sym_expr(insert(symTable, e->value.varValue->name, scope, yylineno, GLOBAL_VAR));
                                        }else
                                            (yyval.exprValue) = sym_expr(insert(symTable, e->value.varValue->name, scope, yylineno, LOCAL_VAR));
                                    }else if(!is_valid(stack, e, scope)){
                                        if(e->value.varValue->scope != scope){
                                            printf("input:%d: error: could not access variable %s\n", yylineno, e->value.varValue->name);
                                        }
                                    }

                                }else{
                                    
                                    // Functions can not be l-values
                                    if(_func_lvalue_check) printf("input:%d: error: on function %s, functions cannot be l-values\n", yylineno, e->value.funcValue->name);
                                }
                            }
                        }
#line 1944 "parser.c"
    break;

  case 36:
#line 295 "parser.y"
                                     {               
                            SymTableEntry *e;

                            // Check wether lvalue is a function

                            if((yyvsp[-1].exprValue) && (yyvsp[-1].exprValue)->sym && _further_checks){
                                (yyval.exprValue) = (yyvsp[-1].exprValue);
                                e = (yyvsp[-1].exprValue)->sym;

                                if(e->type == LOCAL_VAR || e->type == GLOBAL_VAR || e->type == ARGUMENT_VAR){

                                    // If it's a variable, check wether we have to create a new one or its referencing an existing one
                                    if(!e->isActive){
                                        //printf("Adding, I found it inactive on line %d %d\n", e->value.varValue->line, yylineno);
                                        if(scope == 0){
                                            (yyval.exprValue) = sym_expr(insert(symTable, e->value.varValue->name, scope, yylineno, GLOBAL_VAR));
                                        }else
                                            (yyval.exprValue) = sym_expr(insert(symTable, e->value.varValue->name, scope, yylineno, LOCAL_VAR));
                                    }else if(!is_valid(stack, e, scope)){
                                        if(e->value.varValue->scope != scope){
                                            printf("input:%d: error: could not access variable %s\n", yylineno, e->value.varValue->name);
                                        }
                                    }

                                }else{
                                    
                                    // Functions can not be l-values
                                    if(_func_lvalue_check) printf("input:%d: error: on function %s, functions cannot be l-values\n", yylineno, e->value.funcValue->name);
                                }
                            }
                        }
#line 1980 "parser.c"
    break;

  case 37:
#line 326 "parser.y"
                            {
                                (yyval.exprValue) = (yyvsp[0].exprValue);
                            }
#line 1988 "parser.c"
    break;

  case 38:
#line 332 "parser.y"
                        {               
                            SymTableEntry *e;

                            // Check wether lvalue is a function

                            if((yyvsp[0].exprValue) && (yyvsp[0].exprValue)->sym && _further_checks){
                                e = (yyvsp[0].exprValue)->sym;

                                if(e->type == LOCAL_VAR || e->type == GLOBAL_VAR || e->type == ARGUMENT_VAR){

                                    // If it's a variable, check wether we have to create a new one or its referencing an existing one
                                    if(!e->isActive){
                                        //printf("Adding, I found it inactive on line %d %d\n", e->value.varValue->line, yylineno);
                                        if(scope == 0){
                                            (yyvsp[0].exprValue) = sym_expr(insert(symTable, e->value.varValue->name, scope, yylineno, GLOBAL_VAR));
                                        }else
                                            (yyvsp[0].exprValue) = sym_expr(insert(symTable, e->value.varValue->name, scope, yylineno, LOCAL_VAR));
                                    }else if(!is_valid(stack, e, scope)){
                                        if(e->value.varValue->scope != scope && e->type != GLOBAL_VAR){
                                            printf("input:%d: error: could not access variable %s\n", yylineno, e->value.varValue->name);
                                            (yyvsp[0].exprValue) = NULL;
                                        }
                                    }

                                }else{
                                    (yyvsp[0].exprValue) = NULL;
                                    // Functions can not be l-values
                                    if(_func_lvalue_check) printf("input:%d: error: on function %s, functions cannot be l-values\n", yylineno, e->value.funcValue->name);
                                }
                            }
                        }
#line 2024 "parser.c"
    break;

  case 39:
#line 363 "parser.y"
                    {
                        emit(ASSIGN_I, (yyvsp[-3].exprValue), (yyvsp[0].exprValue), NULL, 0, yylineno);
                    }
#line 2032 "parser.c"
    break;

  case 40:
#line 367 "parser.y"
                        {               
                            SymTableEntry *e;

                            // Check wether lvalue is a function

                            if((yyvsp[0].exprValue) && (yyvsp[0].exprValue)->sym && _further_checks){
                                (yyval.exprValue) = (yyvsp[0].exprValue);
                                e = (yyvsp[0].exprValue)->sym;

                                if(e->type == LOCAL_VAR || e->type == GLOBAL_VAR || e->type == ARGUMENT_VAR){

                                    // If it's a variable, check wether we have to create a new one or its referencing an existing one
                                    if(!e->isActive){
                                        //printf("Adding, I found it inactive on line %d %d\n", e->value.varValue->line, yylineno);
                                        if(scope == 0){
                                            (yyval.exprValue) = sym_expr(insert(symTable, e->value.varValue->name, scope, yylineno, GLOBAL_VAR));
                                        }else
                                            (yyval.exprValue) = sym_expr(insert(symTable, e->value.varValue->name, scope, yylineno, LOCAL_VAR));
                                    }else if(!is_valid(stack, e, scope)){
                                        if(e->value.varValue->scope != scope && e->type != GLOBAL_VAR){
                                            printf("input:%d: error: could not access variable %s\n", yylineno, e->value.varValue->name);
                                        }
                                    }

                                }
                            }
                        }
#line 2064 "parser.c"
    break;

  case 41:
#line 394 "parser.y"
                       {(yyval.exprValue) = (yyvsp[0].exprValue);}
#line 2070 "parser.c"
    break;

  case 43:
#line 396 "parser.y"
                                                             {(yyval.exprValue) = (yyvsp[-1].exprValue);}
#line 2076 "parser.c"
    break;

  case 44:
#line 397 "parser.y"
                        {
                            (yyval.exprValue) = (yyvsp[0].exprValue);
                        }
#line 2084 "parser.c"
    break;

  case 45:
#line 402 "parser.y"
                                            {
                                                SymTableEntry *e;
                                                
                                                // Check if active variables exist in any scope from current and down
                                                if((e = lookup_variable(symTable, (yyvsp[0].strValue), scope)) == NULL){
                                                    
                                                    // If not, insert the variable
                                                    if(scope == 0)
                                                        (yyval.exprValue) = sym_expr(insert(symTable, (yyvsp[0].strValue), scope, yylineno, GLOBAL_VAR));
                                                    else
                                                        (yyval.exprValue) = sym_expr(insert(symTable, (yyvsp[0].strValue), scope, yylineno, LOCAL_VAR));
                                                }else{

                                                    // If exists, set value for further checks
                                                    //printf("Setting valuue for further checks on-> %s %s\n", e->value.varValue->name, typeToString[e->type]);
                                                    (yyval.exprValue) = sym_expr(e);
                                                }
                                                _further_checks = 1;
                                                _func_lvalue_check = 1;
                                            }
#line 2109 "parser.c"
    break;

  case 46:
#line 422 "parser.y"
                                            {
                                                SymTableEntry *e;
                                                
                                                // Check current scope
                                                if((e = lookup_no_type(symTable, (yyvsp[0].strValue), scope)) == NULL){
                                                    if((e = lookup(symTable, (yyvsp[0].strValue), 0, LIB_FUNC)) == NULL){
                                                        if(scope == 0){
                                                            (yyval.exprValue) = sym_expr(insert(symTable, (yyvsp[0].strValue), scope, yylineno, GLOBAL_VAR));
                                                        }else{
                                                            (yyval.exprValue) = sym_expr(insert(symTable, (yyvsp[0].strValue), scope, yylineno, LOCAL_VAR));
                                                        }
                                                    }else{
                                                        printf("input:%d: error: local symbol %s is attempting to shadow a library function\n", yylineno, (yyvsp[0].strValue));
                                                        (yyval.exprValue) = NULL;
                                                    }
                                                }else{
                                                    // If exists, set reference
                                                    (yyval.exprValue) = sym_expr(e);
                                                }
                                                _further_checks = 1;
                                                _func_lvalue_check = 1;
                                            }
#line 2136 "parser.c"
    break;

  case 47:
#line 444 "parser.y"
                                            {
                                                SymTableEntry *e;
                                                
                                                // Check globals
                                                if((e = lookup_no_type(symTable, (yyvsp[0].strValue), 0)) == NULL){
                                                    printf("input:%d: error: global reference %s in line %d not found\n", yylineno, (yyvsp[0].strValue), yylineno);
                                                    (yyval.exprValue) = NULL;
                                                }else{
                                                    // If exists, set reference
                                                    (yyval.exprValue) = sym_expr(e);
                                                }
                                                _further_checks = 0;
                                                _func_lvalue_check = 1;
                                            }
#line 2155 "parser.c"
    break;

  case 48:
#line 458 "parser.y"
                                            {
                                            _func_lvalue_check = 0;}
#line 2162 "parser.c"
    break;

  case 49:
#line 462 "parser.y"
                                {}
#line 2168 "parser.c"
    break;

  case 50:
#line 463 "parser.y"
                                                            {}
#line 2174 "parser.c"
    break;

  case 53:
#line 468 "parser.y"
                                                                {
                                                                    (yyval.exprValue) = make_call(symTable, scope, (yyvsp[-3].exprValue), reverse_elist(&(yyvsp[-1].exprValue)));
                                                                }
#line 2182 "parser.c"
    break;

  case 54:
#line 471 "parser.y"
                                    {
                                        SymTableEntry* e;

                                        Call *c;
                                        SymTableEntry *e1;
                                        e1 = (yyvsp[-1].exprValue)->sym;
                                        c = (yyvsp[0].functionCall);
                                        c->name = strdup(e1->value.funcValue->name);
                                        print_call(c);

                                        //printf("Usage of %s as call in %d\n", e->value.funcValue->name, yylineno);

                                        // Check wether lvalue is a function

                                        if((yyvsp[-1].exprValue) && (yyvsp[-1].exprValue)->sym){
                                            e = (yyvsp[-1].exprValue)->sym;

                                            if(e->type == LOCAL_VAR || e->type == GLOBAL_VAR || e->type == ARGUMENT_VAR){

                                                // If it's a variable, check wether we have to create a new one or its referencing an existing one
                                                if(!e->isActive){
                                                    //printf("Adding, I found it inactive on line %d %d\n", e->value.varValue->line, yylineno);
                                                    if(scope == 0){
                                                        insert(symTable, e->value.varValue->name, scope, yylineno, GLOBAL_VAR);
                                                    }else
                                                        insert(symTable, e->value.varValue->name, scope, yylineno, LOCAL_VAR);
                                                }else if(!is_valid(stack, e, scope)){
                                                    if(e->value.varValue->scope != scope){
                                                        printf("input:%d: error: could not access variable %s\n", yylineno, e->value.varValue->name);
                                                    }
                                                }

                                                
                                            }
                                        }

                                        (yyval.exprValue) = make_call(symTable, scope, (yyvsp[-1].exprValue), reverse_elist(&(yyvsp[0].functionCall)->elist));
                                    }
#line 2225 "parser.c"
    break;

  case 55:
#line 509 "parser.y"
                                                                                                      {
                                                        Expr *g = (yyvsp[-4].exprValue);
                                                        (yyval.exprValue) = make_call(symTable, scope, g, reverse_elist(&(yyvsp[-1].exprValue)));
                                                                                                        }
#line 2234 "parser.c"
    break;

  case 56:
#line 515 "parser.y"
                                {(yyval.functionCall) = (yyvsp[0].functionCall);}
#line 2240 "parser.c"
    break;

  case 57:
#line 516 "parser.y"
                                {(yyval.functionCall) = (yyvsp[0].functionCall);}
#line 2246 "parser.c"
    break;

  case 58:
#line 519 "parser.y"
                                                            {
                                                                (yyval.functionCall) = function_call(FALSE, NULL, scope, (yyvsp[-1].exprValue));
                                                            }
#line 2254 "parser.c"
    break;

  case 59:
#line 523 "parser.y"
                                                                        {
                                                                            (yyval.functionCall) = function_call(TRUE, (yyvsp[-3].strValue), scope, (yyvsp[-1].exprValue));
                                                                        }
#line 2262 "parser.c"
    break;

  case 60:
#line 527 "parser.y"
                                            {
                                                (yyval.exprValue) = (yyvsp[0].exprValue);
                                            }
#line 2270 "parser.c"
    break;

  case 61:
#line 530 "parser.y"
                                            {
                                                Expr *head = (yyvsp[-2].exprValue);

                                                head->next = (yyvsp[0].exprValue);

                                                (yyval.exprValue) = head;
                                            }
#line 2282 "parser.c"
    break;

  case 70:
#line 555 "parser.y"
                                {
                                    scope++; // Up scope
                                }
#line 2290 "parser.c"
    break;

  case 71:
#line 559 "parser.y"
                                {
                                    // Scope down and hide old symbols
                                    scope_down(symTable);
                                }
#line 2299 "parser.c"
    break;

  case 74:
#line 568 "parser.y"
                                           {scope++;}
#line 2305 "parser.c"
    break;

  case 75:
#line 568 "parser.y"
                                                                                {    scope--; 
                                                                                    _func_count++;

                                                                                    // Push function to stack
                                                                                    if((yyvsp[-4].exprValue) && (yyvsp[-4].exprValue)->sym)
                                                                                        push(stack, (yyvsp[-4].exprValue)->sym);
                                                                                    //printCallStack(stack, yylineno);
                                                                                }
#line 2318 "parser.c"
    break;

  case 76:
#line 577 "parser.y"
                        {
                            _func_count--;

                            // Removing function from stack
                            if((yyvsp[-6].exprValue) && (yyvsp[-6].exprValue)->sym)
                                pop(stack);

                            emit(FUNCEND_I, 0, 0, 0, 0, yylineno);
                            (yyval.exprValue) = (yyvsp[-6].exprValue);
                        }
#line 2333 "parser.c"
    break;

  case 77:
#line 589 "parser.y"
                            {
                                SymTableEntry *e;

                                _func_name = (yyvsp[0].strValue);

                                // Search for libfunc
                                if((e = function_lookup(symTable, (yyvsp[0].strValue), scope)) == NULL){

                                    // Check libfuncs
                                    if((e = lookup(symTable, (yyvsp[0].strValue), 0, LIB_FUNC)) != NULL){
                                        printf("input:%d: error: shadowing of library function %s is not permitted\n", yylineno, (yyvsp[0].strValue));
                                    }else{
                                        (yyval.exprValue) = sym_expr(insert(symTable, (yyvsp[0].strValue), scope, yylineno, USER_FUNC));
                                    }
                                }else{
                                    if(e->type == USER_FUNC)
                                        printf("input:%d: error: duplicate user function %s, first defined in line %d\n", yylineno, (yyvsp[0].strValue), e->value.funcValue->line);
                                    else if(e->type == LIB_FUNC)
                                        printf("input:%d: error: shadowing of library function %s is not permitted\n", yylineno, (yyvsp[0].strValue));
                                    else
                                        printf("input:%d: error: function %s has conflicting type with variable %s first defined in line %d\n", yylineno, (yyvsp[0].strValue), e->value.varValue->name, e->value.varValue->line);
                                    (yyval.exprValue) = NULL;
                                }

                                emit(FUNCSTART_I, 0, 0, 0, 0, yylineno);
                            }
#line 2364 "parser.c"
    break;

  case 78:
#line 615 "parser.y"
                            {  
                                char *s;
                                s = (char *)malloc(8 * sizeof(char));
                                _func_name = s;
     
                                sprintf(s, "$%d", _anon_func_counter);

                                (yyval.exprValue) = sym_expr(insert(symTable, s, scope, yylineno, USER_FUNC));

                                _anon_func_counter++;

                                emit(FUNCSTART_I, 0, 0, 0, 0, yylineno);
                            }
#line 2382 "parser.c"
    break;

  case 79:
#line 629 "parser.y"
                            {
                                (yyval.exprValue) = num_expr((yyvsp[0].numValue));
                            }
#line 2390 "parser.c"
    break;

  case 80:
#line 632 "parser.y"
                            {
                                (yyval.exprValue) = string_expr((yyvsp[0].strValue));
                            }
#line 2398 "parser.c"
    break;

  case 81:
#line 635 "parser.y"
                            {
                                (yyval.exprValue) = nil_expr();
                            }
#line 2406 "parser.c"
    break;

  case 82:
#line 638 "parser.y"
                            {
                                (yyval.exprValue) = bool_expr(1);
                            }
#line 2414 "parser.c"
    break;

  case 83:
#line 641 "parser.y"
                            {
                                (yyval.exprValue) = bool_expr(0);
                            }
#line 2422 "parser.c"
    break;

  case 86:
#line 647 "parser.y"
                  {}
#line 2428 "parser.c"
    break;

  case 87:
#line 650 "parser.y"
                    {
                        SymTableEntry *e, *a;

                        if((e = lookup(symTable, (yyvsp[0].strValue), 0, LIB_FUNC)) != NULL){
                            printf("input:%d: error: argument %s in function %s attempting to shadow a library function\n", yylineno, (yyvsp[0].strValue), _func_name);
                        }else{
                            if((e = lookup(symTable, _func_name, scope - 1, USER_FUNC)) != NULL){
                                if((a = lookup_active(symTable, (yyvsp[0].strValue), scope)) == NULL){
                                    insert(symTable, (yyvsp[0].strValue), scope, yylineno, ARGUMENT_VAR);
                                }else{
                                    printf("input:%d: error: duplicate argument %s in function %s\n", yylineno, (yyvsp[0].strValue), e->value.funcValue->name);
                                }
                            } 
                        }                         
                    }
#line 2448 "parser.c"
    break;

  case 90:
#line 670 "parser.y"
                                    { _in_control++; printf("line: %d: if statement\n", yylineno); }
#line 2454 "parser.c"
    break;

  case 92:
#line 674 "parser.y"
                                       { _in_control++; printf("line: %d: while statement\n", yylineno);}
#line 2460 "parser.c"
    break;

  case 94:
#line 678 "parser.y"
                                     { _in_control++; printf("line: %d: for statement\n", yylineno);}
#line 2466 "parser.c"
    break;


#line 2470 "parser.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
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
                  yystos[+*yyssp], yyvsp);
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
  return yyresult;
}
#line 686 "parser.y"


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

void printQuads(void){
    Quad q;
    Expr *e;
    int i;

    printf("-------------------------------\n");
    printf("Printing Quads\n");
    printf("-------------------------------\n");
    for(i = 0; i < currQuad; i++){
        q = quads[i];
        printf("%-10s ", opcodeToString[q.op]);

        // print result
        e = q.result;
        if(e){
            if(e->type == CONSTNUM_E){
                printf(" %-3f ", e->numConst);
            }else if(e->type == CONSTBOOL_E){
                if(e->boolConst == 0)
                    printf(" %-5s ", "false");
                else
                    printf(" %-5s ", "true");
            }else{
                if(e->sym->type == LOCAL_VAR || e->sym->type == GLOBAL_VAR || e->sym->type == ARGUMENT_VAR)
                    printf(" %-10s ", e->sym->value.varValue->name);
                else
                    printf(" %-10s ", e->sym->value.funcValue->name);
            }
        }

        // print arg1
        e = q.arg1;
        if(e){
            if(e->type == CONSTNUM_E){
                printf(" %-3f ", e->numConst);
            }else if(e->type == CONSTBOOL_E){
                if(e->boolConst == 0)
                    printf(" %-5s ", "false");
                else
                    printf(" %-5s ", "true");
            }else{
                if(e->sym->type == LOCAL_VAR || e->sym->type == GLOBAL_VAR || e->sym->type == ARGUMENT_VAR)
                    printf(" %-10s ", e->sym->value.varValue->name);
                else
                    printf(" %-10s ", e->sym->value.funcValue->name);
            }
        }

        // print arg2
        e = q.arg2;
        if(e){
            if(e->type == CONSTNUM_E){
                printf(" %-3f ", e->numConst);
            }else if(e->type == CONSTBOOL_E){
                if(e->boolConst == 0)
                    printf(" %-5s ", "false");
                else
                    printf(" %-5s ", "true");
            }else{
                if(e->sym->type == LOCAL_VAR || e->sym->type == GLOBAL_VAR || e->sym->type == ARGUMENT_VAR)
                    printf(" %-10s ", e->sym->value.varValue->name);
                else
                    printf(" %-10s ", e->sym->value.funcValue->name);
            }
        }

        printf("\n");
    }



}

int main(int argc, char **argv){
    if(argc > 1){
        if(!(yyin = fopen(argv[1], "r"))){
            printf("AAA\n");
            exit(0);
        }
    }else{
        yyin = stdin;

    }

    init_quads();
    symTable = init_sym_table();
    stack = init_call_stack();
    yyparse();

    //printSymTable(symTable);
    printByScope(symTable);
    printQuads();

    return 0;
}
