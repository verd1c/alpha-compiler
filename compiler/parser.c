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
        "TABLEGETELEM",   "TABLESETELEM", "JUMP"
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
#define YYLAST   632

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  103
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  187

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
       0,    94,    94,    96,    96,    97,   100,   101,   102,   103,
     104,   114,   121,   129,   130,   131,   134,   137,   141,   145,
     149,   153,   157,   166,   175,   184,   193,   197,   201,   209,
     217,   223,   225,   229,   235,   241,   285,   329,   361,   393,
     401,   400,   451,   480,   484,   485,   489,   497,   517,   539,
     553,   559,   562,   572,   576,   579,   582,   620,   626,   627,
     630,   634,   638,   641,   649,   654,   655,   658,   659,   662,
     665,   666,   669,   673,   678,   679,   682,   682,   682,   703,
     729,   743,   746,   749,   752,   755,   759,   760,   761,   764,
     780,   784,   787,   787,   797,   799,   799,   806,   814,   818,
     826,   836,   838,   842
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
  "statements", "$@1", "statement", "expression", "M", "term",
  "assignexpr", "$@2", "primary", "lvalue", "member", "call", "callsuffix",
  "normcall", "methodcall", "elist", "objectdef", "indexed", "indexedelem",
  "block", "blockstart", "blockend", "blockstmt", "funcdef", "$@3", "$@4",
  "funcstart", "const", "idlist", "arg", "ifstmt", "ifprefix", "$@5",
  "whilestart", "whilecond", "$@6", "whilestmt", "N", "forprefix",
  "forstmt", "forstart", "returnstmt", YY_NULLPTR
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

#define YYPACT_NINF (-164)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-41)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -164,     5,     7,  -164,   212,  -164,  -164,  -164,   -15,  -164,
      -6,    17,   106,   -10,     6,   295,    41,  -164,  -164,  -164,
     243,  -164,   276,  -164,    50,    36,    36,   295,  -164,   312,
    -164,  -164,  -164,    87,  -164,    -9,  -164,  -164,   172,  -164,
      35,  -164,  -164,   212,    38,  -164,  -164,  -164,   295,  -164,
    -164,  -164,  -164,  -164,   327,  -164,  -164,  -164,  -164,   295,
     360,    42,    43,    40,   375,    44,  -164,    59,    63,    -9,
      63,  -164,  -164,  -164,  -164,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,    81,    82,
    -164,  -164,    54,  -164,  -164,  -164,   295,   295,    85,  -164,
     212,  -164,    66,  -164,    84,  -164,   212,   295,    70,   295,
    -164,   408,   295,  -164,  -164,    75,  -164,    68,    73,   295,
     295,   -23,   -23,  -164,  -164,  -164,   122,   122,    13,    13,
      13,    13,   441,    74,  -164,    76,   295,   474,    77,  -164,
    -164,  -164,   102,   212,   295,  -164,    88,  -164,   489,   295,
    -164,  -164,   295,    68,   395,    -8,  -164,  -164,   295,   586,
    -164,  -164,  -164,    91,    94,  -164,   522,  -164,   295,  -164,
     539,   104,   108,  -164,   102,  -164,   212,   572,  -164,  -164,
    -164,   112,  -164,  -164,  -164,  -164,  -164
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       5,     0,     3,     1,     0,    81,    47,    82,     0,    94,
       0,    80,     0,     0,     0,     0,     0,    84,    85,    83,
      64,    72,     0,    15,     0,     0,     0,     0,     4,     0,
      30,    16,    39,    42,    50,    43,    44,    13,     0,    14,
       0,    46,     7,     0,     0,     8,    98,     9,    64,    10,
      92,   101,    79,   102,     0,    11,    12,    34,    48,     0,
      62,     0,     0,    67,     0,     0,    49,     0,    35,     0,
      37,    33,    31,    31,     6,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    64,     0,     0,
      36,    38,     0,    56,    58,    59,     0,    64,     0,    73,
      74,    70,     0,    76,    90,    95,     0,    64,     0,     0,
     103,     0,    64,    65,    66,     0,    32,    45,     0,     0,
       0,    17,    18,    19,    20,    21,    26,    27,    22,    24,
      23,    25,     0,     0,    51,     0,     0,     0,     0,    53,
      75,    71,    88,     0,     0,    97,     0,    31,     0,     0,
      63,    68,    64,     0,    28,    29,    52,    60,    64,    41,
      54,    55,    89,     0,    86,    91,     0,    98,     0,    93,
       0,     0,     0,    77,    88,    96,     0,     0,    69,    57,
      61,     0,    87,    98,    99,    78,   100
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -164,  -164,  -164,  -164,    -2,    -4,   -64,  -164,  -164,  -164,
    -164,    -1,  -164,    18,  -164,  -164,  -164,   -45,  -164,    22,
    -164,   -43,  -164,    47,    46,   -21,  -164,  -164,  -164,  -164,
     -32,  -164,  -164,  -164,  -164,  -164,  -164,  -164,  -164,  -163,
    -164,  -164,  -164,  -164
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,   100,    60,   119,    30,    31,    92,
      32,    33,    34,    35,    93,    94,    95,    61,    36,    62,
      63,    37,    38,   101,   102,    39,   142,   181,    40,    41,
     163,   164,    42,    43,   109,    44,   106,   144,    45,   107,
      46,    47,    48,    49
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      29,    65,    28,   108,   176,     3,    72,    -2,    54,   120,
      50,    57,    96,    77,    78,    79,    97,    55,    64,    51,
     186,    52,    98,    71,    68,    70,    75,    76,    77,    78,
      79,    80,    81,    56,    29,    82,    83,    84,    85,    29,
       6,   104,   133,    69,    69,    58,   118,    75,    76,    77,
      78,    79,   138,    16,    66,   111,   -41,   -41,   -41,   -41,
     103,    67,   146,   105,   113,   114,    24,   150,   115,    11,
     117,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   168,    86,   134,   135,   136,    87,   139,
      99,   143,   137,   152,    88,    89,    29,   147,    59,   153,
     157,   158,    29,   161,   145,   148,   162,   171,    86,     5,
       6,     7,    87,   172,   167,   154,   155,   173,    88,    89,
     -40,    15,   174,    16,    17,    18,    19,    20,    90,    91,
     179,    22,   159,    53,   180,    21,    24,   151,   185,    29,
     166,   165,   182,     0,     0,   170,   140,    25,    26,   141,
       0,     0,     0,    27,     0,     0,    75,    76,    77,    78,
      79,   -41,   -41,     0,   177,    82,    83,    84,    85,     0,
       0,     0,    29,     0,   183,     5,     6,     7,     8,     0,
       9,    10,    11,    12,    13,    14,     0,    15,     0,    16,
      17,    18,    19,    20,     0,    21,    99,    22,     0,    23,
       0,     0,    24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    25,    26,     5,     6,     7,     8,    27,
       9,    10,    11,    12,    13,    14,     0,    15,     0,    16,
      17,    18,    19,    20,     0,    21,     0,    22,     0,    23,
       0,     0,    24,     0,     0,     0,     5,     6,     7,     0,
       0,     0,     0,    25,    26,     0,     0,     0,    15,    27,
      16,    17,    18,    19,    20,     0,    59,     0,    22,     0,
       0,     0,     0,    24,     0,     0,     0,     0,     0,     5,
       6,     7,     0,     0,    25,    26,    11,     0,     0,     0,
      27,    15,     0,    16,    17,    18,    19,    20,     5,     6,
       7,    22,     0,     0,     0,     0,    24,     0,     0,     0,
      15,     0,    16,    17,    18,    19,    20,    25,    26,     0,
      22,     0,     0,    27,     0,    24,    72,     0,    73,     0,
       0,     0,     0,     0,     0,     0,    25,    26,     0,    74,
       0,    72,    27,    73,     0,     0,    75,    76,    77,    78,
      79,    80,    81,     0,   110,    82,    83,    84,    85,     0,
       0,    75,    76,    77,    78,    79,    80,    81,     0,     0,
      82,    83,    84,    85,    72,     0,    73,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   112,    72,
       0,    73,     0,     0,    75,    76,    77,    78,    79,    80,
      81,   116,     0,    82,    83,    84,    85,     0,     0,    75,
      76,    77,    78,    79,    80,    81,     0,     0,    82,    83,
      84,    85,    72,     0,    73,     0,     0,     0,     0,    75,
      76,    77,    78,    79,    80,    81,     0,   149,    82,    83,
      84,    85,    75,    76,    77,    78,    79,    80,    81,     0,
       0,    82,    83,    84,    85,    72,     0,    73,     0,     0,
       0,     0,     0,   156,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    75,    76,    77,    78,    79,
      80,    81,     0,     0,    82,    83,    84,    85,    72,     0,
      73,     0,     0,     0,     0,     0,   160,     0,     0,     0,
       0,     0,     0,    72,     0,    73,     0,     0,    75,    76,
      77,    78,    79,    80,    81,   169,     0,    82,    83,    84,
      85,     0,     0,    75,    76,    77,    78,    79,    80,    81,
       0,     0,    82,    83,    84,    85,    72,     0,    73,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   175,     0,
       0,     0,     0,    72,     0,    73,    75,    76,    77,    78,
      79,    80,    81,   178,     0,    82,    83,    84,    85,     0,
       0,     0,     0,    75,    76,    77,    78,    79,    80,    81,
       0,     0,    82,    83,    84,    85,    72,     0,    73,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   184,
      72,     0,    73,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    81,     0,     0,    82,    83,    84,    85,     0,
      75,    76,    77,    78,    79,    80,    81,     0,     0,    82,
      83,    84,    85
};

static const yytype_int16 yycheck[] =
{
       4,    22,     4,    48,   167,     0,    14,     0,    12,    73,
      25,    15,    21,    36,    37,    38,    25,    27,    22,    25,
     183,     4,    31,    27,    25,    26,    34,    35,    36,    37,
      38,    39,    40,    27,    38,    43,    44,    45,    46,    43,
       4,    43,    87,    25,    26,     4,    67,    34,    35,    36,
      37,    38,    97,    17,     4,    59,    43,    44,    45,    46,
      25,    25,   107,    25,    22,    22,    30,   112,    28,    10,
      26,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,   147,    21,     4,     4,    33,    25,     4,
      24,     7,    96,    25,    31,    32,   100,    27,    23,    26,
      26,    25,   106,    26,   106,   109,     4,   152,    21,     3,
       4,     5,    25,   158,    26,   119,   120,    26,    31,    32,
      33,    15,    28,    17,    18,    19,    20,    21,    41,    42,
      26,    25,   136,    27,    26,    23,    30,   115,   181,   143,
     144,   143,   174,    -1,    -1,   149,   100,    41,    42,   102,
      -1,    -1,    -1,    47,    -1,    -1,    34,    35,    36,    37,
      38,    39,    40,    -1,   168,    43,    44,    45,    46,    -1,
      -1,    -1,   176,    -1,   176,     3,     4,     5,     6,    -1,
       8,     9,    10,    11,    12,    13,    -1,    15,    -1,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,    -1,    27,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    42,     3,     4,     5,     6,    47,
       8,     9,    10,    11,    12,    13,    -1,    15,    -1,    17,
      18,    19,    20,    21,    -1,    23,    -1,    25,    -1,    27,
      -1,    -1,    30,    -1,    -1,    -1,     3,     4,     5,    -1,
      -1,    -1,    -1,    41,    42,    -1,    -1,    -1,    15,    47,
      17,    18,    19,    20,    21,    -1,    23,    -1,    25,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,    -1,    41,    42,    10,    -1,    -1,    -1,
      47,    15,    -1,    17,    18,    19,    20,    21,     3,     4,
       5,    25,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      15,    -1,    17,    18,    19,    20,    21,    41,    42,    -1,
      25,    -1,    -1,    47,    -1,    30,    14,    -1,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    -1,    27,
      -1,    14,    47,    16,    -1,    -1,    34,    35,    36,    37,
      38,    39,    40,    -1,    27,    43,    44,    45,    46,    -1,
      -1,    34,    35,    36,    37,    38,    39,    40,    -1,    -1,
      43,    44,    45,    46,    14,    -1,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    14,
      -1,    16,    -1,    -1,    34,    35,    36,    37,    38,    39,
      40,    26,    -1,    43,    44,    45,    46,    -1,    -1,    34,
      35,    36,    37,    38,    39,    40,    -1,    -1,    43,    44,
      45,    46,    14,    -1,    16,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,    40,    -1,    29,    43,    44,
      45,    46,    34,    35,    36,    37,    38,    39,    40,    -1,
      -1,    43,    44,    45,    46,    14,    -1,    16,    -1,    -1,
      -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    40,    -1,    -1,    43,    44,    45,    46,    14,    -1,
      16,    -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    14,    -1,    16,    -1,    -1,    34,    35,
      36,    37,    38,    39,    40,    26,    -1,    43,    44,    45,
      46,    -1,    -1,    34,    35,    36,    37,    38,    39,    40,
      -1,    -1,    43,    44,    45,    46,    14,    -1,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    14,    -1,    16,    34,    35,    36,    37,
      38,    39,    40,    24,    -1,    43,    44,    45,    46,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    40,
      -1,    -1,    43,    44,    45,    46,    14,    -1,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      14,    -1,    16,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    40,    -1,    -1,    43,    44,    45,    46,    -1,
      34,    35,    36,    37,    38,    39,    40,    -1,    -1,    43,
      44,    45,    46
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    49,    50,     0,    51,     3,     4,     5,     6,     8,
       9,    10,    11,    12,    13,    15,    17,    18,    19,    20,
      21,    23,    25,    27,    30,    41,    42,    47,    52,    53,
      55,    56,    58,    59,    60,    61,    66,    69,    70,    73,
      76,    77,    80,    81,    83,    86,    88,    89,    90,    91,
      25,    25,     4,    27,    53,    27,    27,    53,     4,    23,
      53,    65,    67,    68,    53,    73,     4,    25,    59,    61,
      59,    53,    14,    16,    27,    34,    35,    36,    37,    38,
      39,    40,    43,    44,    45,    46,    21,    25,    31,    32,
      41,    42,    57,    62,    63,    64,    21,    25,    31,    24,
      52,    71,    72,    25,    52,    25,    84,    87,    65,    82,
      27,    53,    28,    22,    22,    28,    26,    26,    73,    54,
      54,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    65,     4,     4,    33,    53,    65,     4,
      72,    71,    74,     7,    85,    52,    65,    27,    53,    29,
      65,    67,    25,    26,    53,    53,    22,    26,    25,    53,
      22,    26,     4,    78,    79,    52,    53,    26,    54,    26,
      53,    65,    65,    26,    28,    26,    87,    53,    24,    26,
      26,    75,    78,    52,    27,    69,    87
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    49,    51,    50,    50,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    54,    55,    55,    55,    55,    55,    55,    55,    55,
      57,    56,    58,    58,    58,    58,    58,    59,    59,    59,
      59,    60,    60,    60,    60,    61,    61,    61,    62,    62,
      63,    64,    65,    65,    65,    66,    66,    67,    67,    68,
      69,    69,    70,    71,    72,    72,    74,    75,    73,    76,
      76,    77,    77,    77,    77,    77,    78,    78,    78,    79,
      80,    80,    82,    81,    83,    85,    84,    86,    87,    88,
      89,    90,    91,    91
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     3,     0,     2,     1,     1,     1,
       1,     2,     2,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     4,     4,
       1,     0,     3,     2,     2,     2,     2,     2,     2,     1,
       0,     4,     1,     1,     1,     3,     1,     1,     2,     2,
       1,     3,     4,     3,     4,     4,     2,     6,     1,     1,
       3,     5,     1,     3,     0,     3,     3,     1,     3,     5,
       2,     3,     1,     1,     1,     2,     0,     0,     7,     2,
       1,     1,     1,     1,     1,     1,     1,     3,     0,     1,
       2,     4,     0,     5,     1,     0,     4,     3,     0,     6,
       7,     2,     2,     3
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
  case 3:
#line 96 "parser.y"
                           {reset_temp_counter();}
#line 1683 "parser.c"
    break;

  case 8:
#line 102 "parser.y"
                             {(yyval.exprValue) = (yyvsp[0].exprValue);}
#line 1689 "parser.c"
    break;

  case 10:
#line 104 "parser.y"
                                        {
                                            if(scope==0 && _in_control==0){
                                                printf("input:%d: error:  Return outside of scope \n", yylineno);
                                            }else{
                                                 //printf("Returns  %d %d\n", e->value.varValue->line, yylineno);
                                                if(_func_count>0 && _in_control >0) _in_control--;
                                                else _in_control=0;
                                            }
                                        }
#line 1703 "parser.c"
    break;

  case 11:
#line 114 "parser.y"
                                        {
                                            if(scope==0 && _in_control==0){
                                                printf("input:%d: error:  Break outside of scope \n", yylineno);
                                            }else{
                                                if(_in_control>0)  _in_control--;
                                            }
                                        }
#line 1715 "parser.c"
    break;

  case 12:
#line 121 "parser.y"
                                        { 
                                            if(scope==0 && _in_control==0){

                                                printf("input:%d: error:  Continue outside of scope \n", yylineno);
                                            }else{
                                                if(_in_control>0)  _in_control--;
                                            }
                                        }
#line 1728 "parser.c"
    break;

  case 13:
#line 129 "parser.y"
                        {(yyval.exprValue) = (yyvsp[0].exprValue);}
#line 1734 "parser.c"
    break;

  case 14:
#line 130 "parser.y"
                          {(yyval.exprValue) = (yyvsp[0].exprValue);}
#line 1740 "parser.c"
    break;

  case 15:
#line 131 "parser.y"
                            {(yyval.exprValue) = (yyvsp[0].strValue);}
#line 1746 "parser.c"
    break;

  case 16:
#line 134 "parser.y"
                                                {
                                                    (yyval.exprValue) = (yyvsp[0].exprValue);
                                                }
#line 1754 "parser.c"
    break;

  case 17:
#line 137 "parser.y"
                                                {
                                                    (yyval.exprValue) = sym_expr(new_temp(symTable, scope));
                                                    emit(ADD_I, (yyval.exprValue), (yyvsp[-2].exprValue), (yyvsp[0].exprValue), 0, yylineno);
                                                }
#line 1763 "parser.c"
    break;

  case 18:
#line 141 "parser.y"
                                                {
                                                    (yyval.exprValue) = sym_expr(new_temp(symTable, scope));
                                                    emit(SUB_I, (yyval.exprValue), (yyvsp[-2].exprValue), (yyvsp[0].exprValue), 0, yylineno);
                                                }
#line 1772 "parser.c"
    break;

  case 19:
#line 145 "parser.y"
                                                {
                                                    (yyval.exprValue) = sym_expr(new_temp(symTable, scope));
                                                    emit(MUL_I, (yyval.exprValue), (yyvsp[-2].exprValue), (yyvsp[0].exprValue), 0, yylineno);
                                                }
#line 1781 "parser.c"
    break;

  case 20:
#line 149 "parser.y"
                                                {
                                                    (yyval.exprValue) = sym_expr(new_temp(symTable, scope));
                                                    emit(DIV_I, (yyval.exprValue), (yyvsp[-2].exprValue), (yyvsp[0].exprValue), 0, yylineno);
                                                }
#line 1790 "parser.c"
    break;

  case 21:
#line 153 "parser.y"
                                                {
                                                    (yyval.exprValue) = sym_expr(new_temp(symTable, scope));
                                                    emit(MOD_I, (yyval.exprValue), (yyvsp[-2].exprValue), (yyvsp[0].exprValue), 0, yylineno);
                                                }
#line 1799 "parser.c"
    break;

  case 22:
#line 158 "parser.y"
                    {
                        (yyval.exprValue) = expr(BOOLEXPR_E);
                        (yyval.exprValue)->sym = new_temp(symTable, scope);
                        (yyval.exprValue)->truelist = llist(next_quad());
                        (yyval.exprValue)->falselist = llist(next_quad() + 1);
                        emit(IF_GREATER_I, NULL, (yyvsp[-2].exprValue), (yyvsp[0].exprValue), 0, yylineno);
                        emit(JUMP_I, NULL, NULL, NULL, 0, yylineno);
                    }
#line 1812 "parser.c"
    break;

  case 23:
#line 167 "parser.y"
                    {
                        (yyval.exprValue) = expr(BOOLEXPR_E);
                        (yyval.exprValue)->sym = new_temp(symTable, scope);
                        (yyval.exprValue)->truelist = llist(next_quad());
                        (yyval.exprValue)->falselist = llist(next_quad() + 1);
                        emit(IF_GREATEREQ_I, NULL, (yyvsp[-2].exprValue), (yyvsp[0].exprValue), 0, yylineno);
                        emit(JUMP_I, NULL, NULL, NULL, 0, yylineno);
                    }
#line 1825 "parser.c"
    break;

  case 24:
#line 176 "parser.y"
                    {
                        (yyval.exprValue) = expr(BOOLEXPR_E);
                        (yyval.exprValue)->sym = new_temp(symTable, scope);
                        (yyval.exprValue)->truelist = llist(next_quad());
                        (yyval.exprValue)->falselist = llist(next_quad() + 1);
                        emit(IF_LESS_I, NULL, (yyvsp[-2].exprValue), (yyvsp[0].exprValue), 0, yylineno);
                        emit(JUMP_I, NULL, NULL, NULL, 0, yylineno);
                    }
#line 1838 "parser.c"
    break;

  case 25:
#line 185 "parser.y"
                    {
                        (yyval.exprValue) = expr(BOOLEXPR_E);
                        (yyval.exprValue)->sym = new_temp(symTable, scope);
                        (yyval.exprValue)->truelist = llist(next_quad());
                        (yyval.exprValue)->falselist = llist(next_quad() + 1);
                        emit(IF_LESSEQ_I, NULL, (yyvsp[-2].exprValue), (yyvsp[0].exprValue), 0, yylineno);
                        emit(JUMP_I, NULL, NULL, NULL, 0, yylineno);
                    }
#line 1851 "parser.c"
    break;

  case 26:
#line 194 "parser.y"
                    {

                    }
#line 1859 "parser.c"
    break;

  case 27:
#line 198 "parser.y"
                    {

                    }
#line 1867 "parser.c"
    break;

  case 28:
#line 202 "parser.y"
                    {
                        (yyval.exprValue) = expr(BOOLEXPR_E);
                        (yyval.exprValue)->sym = new_temp(symTable, scope);
                        llist_patch((yyvsp[-3].exprValue)->truelist, (yyvsp[-1].numValue));
                        (yyval.exprValue)->truelist = (yyvsp[0].exprValue)->truelist;
                        (yyval.exprValue)->falselist = llist_merge((yyvsp[-3].exprValue)->falselist, (yyvsp[0].exprValue)->falselist);
                    }
#line 1879 "parser.c"
    break;

  case 29:
#line 210 "parser.y"
                    {
                        (yyval.exprValue) = expr(BOOLEXPR_E);
                        (yyval.exprValue)->sym = new_temp(symTable, scope);
                        llist_patch((yyvsp[-3].exprValue)->falselist, (yyvsp[-1].numValue));
                        (yyval.exprValue)->truelist = llist_merge((yyvsp[-3].exprValue)->truelist, (yyvsp[0].exprValue)->truelist);
                        (yyval.exprValue)->falselist = (yyvsp[0].exprValue)->falselist;
                    }
#line 1891 "parser.c"
    break;

  case 30:
#line 218 "parser.y"
                    {
                        (yyval.exprValue) = (yyvsp[0].exprValue);
                    }
#line 1899 "parser.c"
    break;

  case 31:
#line 223 "parser.y"
              {(yyval.numValue) = next_quad();}
#line 1905 "parser.c"
    break;

  case 32:
#line 226 "parser.y"
                    {
                        (yyval.exprValue) = (yyvsp[-1].exprValue);
                    }
#line 1913 "parser.c"
    break;

  case 33:
#line 229 "parser.y"
                                    {
                                             SymTableEntry *e;
                                             (yyval.exprValue) = (yyvsp[0].exprValue);
                                            e = (yyvsp[0].exprValue)->sym;
                                               
                                    }
#line 1924 "parser.c"
    break;

  case 34:
#line 235 "parser.y"
                                 {
                                             SymTableEntry *e;
                                             (yyval.exprValue) = (yyvsp[0].exprValue);
                                            e = (yyvsp[0].exprValue)->sym;
                                               
                                    }
#line 1935 "parser.c"
    break;

  case 35:
#line 242 "parser.y"
                    {            
                        Expr *ex = (Expr*)0, *val = (Expr*)0;   
                        SymTableEntry *e;

                        // Check wether lvalue is a function

                        if((yyvsp[0].exprValue) && (yyvsp[0].exprValue)->sym && _further_checks){
                            e = (yyvsp[0].exprValue)->sym;
                            ex = (yyvsp[0].exprValue);

                            if(e->type == LOCAL_VAR || e->type == GLOBAL_VAR || e->type == ARGUMENT_VAR){

                                // If it's a variable, check wether we have to create a new one or its referencing an existing one
                                if(!e->isActive){
                                    //printf("Adding, I found it inactive on line %d %d\n", e->value.varValue->line, yylineno);
                                    if(scope == 0){
                                        ex = sym_expr(insert(symTable, e->value.varValue->name, scope, yylineno, GLOBAL_VAR));
                                    }else
                                        ex = sym_expr(insert(symTable, e->value.varValue->name, scope, yylineno, LOCAL_VAR));
                                }else if(!is_valid(stack, e, scope)){
                                    if(e->value.varValue->scope != scope){
                                        printf("input:%d: error: could not access variable %s\n", yylineno, e->value.varValue->name);
                                    }
                                }

                            }else{
                                
                                // Functions can not be l-values
                                if(_func_lvalue_check) printf("input:%d: error: on function %s, functions cannot be l-values\n", yylineno, e->value.funcValue->name);
                            }

                            if(ex->type == TABLEITEM_E){
                                (yyval.exprValue) = emit_if_table_item(symTable, scope, ex);
                                emit(ADD_I, (yyval.exprValue), (yyval.exprValue), num_expr(1), 0, yylineno);
                                emit(TABLESETELEM_I, (yyval.exprValue), ex, ex->index, 0, yylineno);
                            }else{
                                emit(ADD_I, ex, ex, num_expr(1), 0, yylineno);
                                (yyval.exprValue) = expr(ARITHEXPR_E);
                                (yyval.exprValue)->sym = new_temp(symTable, scope);
                                emit(ASSIGN_I, (yyval.exprValue), ex, NULL, 0, yylineno);
                            }
                        }
                    }
#line 1983 "parser.c"
    break;

  case 36:
#line 286 "parser.y"
                    {
                        Expr *ex = (Expr*)0, *val = (Expr*)0;
                        SymTableEntry *e;

                        // Check wether lvalue is a function

                        if((yyvsp[-1].exprValue) && (yyvsp[-1].exprValue)->sym && _further_checks){
                            e = (yyvsp[-1].exprValue)->sym;
                            ex = (yyvsp[-1].exprValue);

                            if(e->type == LOCAL_VAR || e->type == GLOBAL_VAR || e->type == ARGUMENT_VAR){

                                // If it's a variable, check wether we have to create a new one or its referencing an existing one
                                if(!e->isActive){
                                    //printf("Adding, I found it inactive on line %d %d\n", e->value.varValue->line, yylineno);
                                    if(scope == 0){
                                        ex = sym_expr(insert(symTable, e->value.varValue->name, scope, yylineno, GLOBAL_VAR));
                                    }else
                                        ex = sym_expr(insert(symTable, e->value.varValue->name, scope, yylineno, LOCAL_VAR));
                                }else if(!is_valid(stack, e, scope)){
                                    if(e->value.varValue->scope != scope){
                                        printf("input:%d: error: could not access variable %s\n", yylineno, e->value.varValue->name);
                                    }
                                }

                            }else{
                                
                                // Functions can not be l-values
                                if(_func_lvalue_check) printf("input:%d: error: on function %s, functions cannot be l-values\n", yylineno, e->value.funcValue->name);
                            }

                            (yyval.exprValue) = sym_expr(new_temp(symTable, scope));
                            if(ex->type == TABLEITEM_E){
                                val = emit_if_table_item(symTable, scope, ex);
                                emit(ASSIGN_I, (yyval.exprValue), val, NULL, 0, yylineno);
                                emit(ADD_I, val, val, num_expr(1), 0, yylineno);
                                emit(TABLESETELEM_I, val, ex, ex->index, 0, yylineno);
                            }else{
                                emit(ASSIGN_I, (yyval.exprValue), ex, NULL, 0, yylineno);
                                emit(ADD_I, ex, ex, num_expr(1), 0, yylineno);
                            }
                        }
                    }
#line 2031 "parser.c"
    break;

  case 37:
#line 330 "parser.y"
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
#line 2067 "parser.c"
    break;

  case 38:
#line 362 "parser.y"
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
#line 2103 "parser.c"
    break;

  case 39:
#line 394 "parser.y"
                    {   
                        printf("term -> primary\n");
                        (yyval.exprValue) = (yyvsp[0].exprValue);
                    }
#line 2112 "parser.c"
    break;

  case 40:
#line 401 "parser.y"
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
#line 2148 "parser.c"
    break;

  case 41:
#line 432 "parser.y"
                    {

                        mk_bool_vmasm((yyvsp[0].exprValue));

                        if((yyvsp[-3].exprValue)->type == TABLEITEM_E){
                            emit(TABLESETELEM_I, (yyvsp[-3].exprValue), (yyvsp[-3].exprValue)->index, (yyvsp[0].exprValue), 0, yylineno);
                            //emit(TABLESETELEM_I, $4, $1, $1->index, 0, yylineno);

                            (yyval.exprValue) = emit_if_table_item(symTable, scope, (yyvsp[-3].exprValue));
                            (yyval.exprValue)->type = ASSIGNEXPR_E;
                        }else{
                            emit(ASSIGN_I, (yyvsp[-3].exprValue), (yyvsp[0].exprValue), NULL, 0, yylineno);
                            (yyval.exprValue) = sym_expr(new_temp(symTable, scope));

                            // second emit
                            emit(ASSIGN_I, (yyval.exprValue), (yyvsp[-3].exprValue), NULL, 0, yylineno);
                        }
                    }
#line 2171 "parser.c"
    break;

  case 42:
#line 451 "parser.y"
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

                            (yyval.exprValue) = emit_if_table_item(symTable, scope, (yyvsp[0].exprValue));
                        }
#line 2205 "parser.c"
    break;

  case 43:
#line 481 "parser.y"
                    {
                        (yyval.exprValue) = (yyvsp[0].exprValue);
                    }
#line 2213 "parser.c"
    break;

  case 45:
#line 486 "parser.y"
                    {
                        (yyval.exprValue) = (yyvsp[-1].exprValue);
                    }
#line 2221 "parser.c"
    break;

  case 46:
#line 489 "parser.y"
                        {   
                            Expr *c = (yyvsp[0].exprValue);
                            (yyval.exprValue) = (yyvsp[0].exprValue);
                            if(c->type == CONSTSTRING_E)
                                printf("strVal : %s\n", c->strConst);
                        }
#line 2232 "parser.c"
    break;

  case 47:
#line 497 "parser.y"
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
#line 2257 "parser.c"
    break;

  case 48:
#line 517 "parser.y"
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
#line 2284 "parser.c"
    break;

  case 49:
#line 539 "parser.y"
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
#line 2303 "parser.c"
    break;

  case 50:
#line 553 "parser.y"
                                            {
                                                _func_lvalue_check = 0;
                                                (yyval.exprValue) = (yyvsp[0].strValue);
                                            }
#line 2312 "parser.c"
    break;

  case 51:
#line 559 "parser.y"
                                {
                                    (yyval.strValue) = member_expr(symTable, scope, (yyvsp[-2].exprValue), (yyvsp[0].strValue));
                                }
#line 2320 "parser.c"
    break;

  case 52:
#line 563 "parser.y"
                    {
                        Expr *res;

                        (yyvsp[-3].exprValue) = emit_if_table_item(symTable, scope, (yyvsp[-3].exprValue));
                        res = expr(TABLEITEM_E);
                        res->sym = (yyvsp[-3].exprValue)->sym;
                        res->index = (yyvsp[-1].exprValue);
                        (yyval.strValue) = res;
                    }
#line 2334 "parser.c"
    break;

  case 53:
#line 573 "parser.y"
                    {
                        
                    }
#line 2342 "parser.c"
    break;

  case 54:
#line 576 "parser.y"
                                                         {}
#line 2348 "parser.c"
    break;

  case 55:
#line 579 "parser.y"
                                                                {
                                                                    (yyval.exprValue) = make_call(symTable, scope, (yyvsp[-3].exprValue), reverse_elist(&(yyvsp[-1].exprValue)));
                                                                }
#line 2356 "parser.c"
    break;

  case 56:
#line 582 "parser.y"
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
#line 2399 "parser.c"
    break;

  case 57:
#line 620 "parser.y"
                                                                                                      {
                                                        Expr *g = (yyvsp[-4].exprValue);
                                                        (yyval.exprValue) = make_call(symTable, scope, g, reverse_elist(&(yyvsp[-1].exprValue)));
                                                                                                        }
#line 2408 "parser.c"
    break;

  case 58:
#line 626 "parser.y"
                                {(yyval.functionCall) = (yyvsp[0].functionCall);}
#line 2414 "parser.c"
    break;

  case 59:
#line 627 "parser.y"
                                {(yyval.functionCall) = (yyvsp[0].functionCall);}
#line 2420 "parser.c"
    break;

  case 60:
#line 630 "parser.y"
                                                            {
                                                                (yyval.functionCall) = function_call(FALSE, NULL, scope, (yyvsp[-1].exprValue));
                                                            }
#line 2428 "parser.c"
    break;

  case 61:
#line 634 "parser.y"
                                                                        {
                                                                            (yyval.functionCall) = function_call(TRUE, (yyvsp[-3].strValue), scope, (yyvsp[-1].exprValue));
                                                                        }
#line 2436 "parser.c"
    break;

  case 62:
#line 638 "parser.y"
                                            {
                                                (yyval.exprValue) = (yyvsp[0].exprValue);
                                            }
#line 2444 "parser.c"
    break;

  case 63:
#line 641 "parser.y"
                                            {
                                                Expr *head = (yyvsp[-2].exprValue);

                                                head->next = (yyvsp[0].exprValue);

                                                (yyval.exprValue) = head;
                                            }
#line 2456 "parser.c"
    break;

  case 64:
#line 649 "parser.y"
                    {
                        (yyval.exprValue) = nil_expr();
                    }
#line 2464 "parser.c"
    break;

  case 65:
#line 654 "parser.y"
                                              {}
#line 2470 "parser.c"
    break;

  case 66:
#line 655 "parser.y"
                                                 {}
#line 2476 "parser.c"
    break;

  case 72:
#line 669 "parser.y"
                                {
                                    scope++; // Up scope
                                }
#line 2484 "parser.c"
    break;

  case 73:
#line 673 "parser.y"
                                {
                                    // Scope down and hide old symbols
                                    scope_down(symTable);
                                }
#line 2493 "parser.c"
    break;

  case 76:
#line 682 "parser.y"
                                           {scope++;}
#line 2499 "parser.c"
    break;

  case 77:
#line 682 "parser.y"
                                                                                {    scope--; 
                                                                                    _func_count++;

                                                                                    // Push function to stack
                                                                                    if((yyvsp[-4].exprValue) && (yyvsp[-4].exprValue)->sym)
                                                                                        push(stack, (yyvsp[-4].exprValue)->sym);
                                                                                    //printCallStack(stack, yylineno);
                                                                                }
#line 2512 "parser.c"
    break;

  case 78:
#line 691 "parser.y"
                        {
                            _func_count--;

                            // Removing function from stack
                            if((yyvsp[-6].exprValue) && (yyvsp[-6].exprValue)->sym)
                                pop(stack);

                            emit(FUNCEND_I, 0, 0, 0, 0, yylineno);
                            (yyval.exprValue) = (yyvsp[-6].exprValue);
                        }
#line 2527 "parser.c"
    break;

  case 79:
#line 703 "parser.y"
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
#line 2558 "parser.c"
    break;

  case 80:
#line 729 "parser.y"
                            {  
                                char *s;
                                s = (char *)malloc(8 * sizeof(char));
                                _func_name = s;
     
                                sprintf(s, "$%d", _anon_func_counter);

                                (yyval.exprValue) = sym_expr(insert(symTable, s, scope, yylineno, USER_FUNC));

                                _anon_func_counter++;

                                emit(FUNCSTART_I, 0, 0, 0, 0, yylineno);
                            }
#line 2576 "parser.c"
    break;

  case 81:
#line 743 "parser.y"
                            {
                                (yyval.exprValue) = num_expr((yyvsp[0].numValue));
                            }
#line 2584 "parser.c"
    break;

  case 82:
#line 746 "parser.y"
                            {   
                                (yyval.exprValue) = string_expr((yyvsp[0].strValue));
                            }
#line 2592 "parser.c"
    break;

  case 83:
#line 749 "parser.y"
                            {
                                (yyval.exprValue) = nil_expr();
                            }
#line 2600 "parser.c"
    break;

  case 84:
#line 752 "parser.y"
                            {
                                (yyval.exprValue) = bool_expr(1);
                            }
#line 2608 "parser.c"
    break;

  case 85:
#line 755 "parser.y"
                            {
                                (yyval.exprValue) = bool_expr(0);
                            }
#line 2616 "parser.c"
    break;

  case 88:
#line 761 "parser.y"
                  {}
#line 2622 "parser.c"
    break;

  case 89:
#line 764 "parser.y"
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
#line 2642 "parser.c"
    break;

  case 90:
#line 781 "parser.y"
                    {
                        patch_label((yyvsp[-1].exprValue), next_quad());
                    }
#line 2650 "parser.c"
    break;

  case 92:
#line 787 "parser.y"
                                    { _in_control++; }
#line 2656 "parser.c"
    break;

  case 93:
#line 788 "parser.y"
                    {
                        mk_bool_vmasm((yyvsp[-1].exprValue));

                        emit(IF_EQ_I, NULL, (yyvsp[-1].exprValue), num_expr(1), next_quad() + 2, yylineno);
                        (yyval.exprValue) = next_quad();
                        emit(JUMP_I, NULL, NULL, NULL, 0, yylineno);
                    }
#line 2668 "parser.c"
    break;

  case 94:
#line 797 "parser.y"
                        { (yyval.exprValue)=next_quad(); }
#line 2674 "parser.c"
    break;

  case 95:
#line 799 "parser.y"
                               { _in_control++; printf("line: %d: while statement\n", yylineno);}
#line 2680 "parser.c"
    break;

  case 96:
#line 799 "parser.y"
                                                                                                                              {
                                                                                                                                    mk_bool_vmasm((yyvsp[-1].exprValue));
                                                                                                                                    emit(IF_EQ_I, NULL, (yyvsp[-1].exprValue), num_expr(1), next_quad() + 2, yylineno);
                                                                                                                                    (yyval.numValue)=next_quad();
                                                                                                                                    emit(JUMP_I,NULL,NULL,NULL,(yyvsp[-3].strValue),yylineno);  
                                                                                                                            }
#line 2691 "parser.c"
    break;

  case 97:
#line 806 "parser.y"
                                                  {

                                                emit(JUMP_I,NULL,NULL,NULL,(yyvsp[-2].exprValue),yylineno);  
                                                patch_label((yyvsp[-1].numValue),next_quad());
                                                llist_patch((yyvsp[0].exprValue)->breaklist,next_quad());
                                                llist_patch((yyvsp[0].exprValue)->contlist,(yyvsp[-2].exprValue));
                                            }
#line 2703 "parser.c"
    break;

  case 98:
#line 814 "parser.y"
                { (yyval.numValue) = next_quad(); 
                emit(JUMP_I,NULL,NULL,NULL,0,yylineno);  
                }
#line 2711 "parser.c"
    break;

  case 99:
#line 818 "parser.y"
                                                               {
                                                                mk_bool_vmasm((yyvsp[-1].exprValue));
                                                                (yyval.numValue)->test    = (yyvsp[-2].numValue);
                                                                (yyval.numValue)->enter   = next_quad();
                                                                emit(IF_EQ_I, NULL, (yyvsp[-1].exprValue), bool_expr(1), next_quad(), yylineno);
                                                            }
#line 2722 "parser.c"
    break;

  case 100:
#line 826 "parser.y"
                                                                  {    
                                                                patch_label((yyvsp[-6].numValue)->enter,(yyvsp[-2].numValue)+1);
                                                                patch_label((yyvsp[-5].numValue),next_quad());
                                                                patch_label((yyvsp[-2].numValue),(yyvsp[-6].numValue)->test);
                                                                patch_label((yyvsp[0].numValue),(yyvsp[-5].numValue)+1);
                                                                llist_patch((yyvsp[-1].exprValue)->breaklist,next_quad());
                                                                llist_patch((yyvsp[-1].exprValue)->contlist,(yyvsp[-5].numValue)+1);
                                                                }
#line 2735 "parser.c"
    break;

  case 101:
#line 836 "parser.y"
                                     { _in_control++; printf("line: %d: for statement\n", yylineno);}
#line 2741 "parser.c"
    break;

  case 102:
#line 839 "parser.y"
                    {
                        emit(RET_I, NULL, NULL, NULL, 0, yylineno);
                    }
#line 2749 "parser.c"
    break;

  case 103:
#line 843 "parser.y"
                    {
                        emit(RET_I, (yyvsp[-1].exprValue), NULL, NULL, 0, yylineno);
                    }
#line 2757 "parser.c"
    break;


#line 2761 "parser.c"

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
#line 850 "parser.y"


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
