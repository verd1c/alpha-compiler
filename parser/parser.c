/* A Bison parser, made by GNU Bison 3.7.5.  */

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
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

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

    #include "parser.h"
    #include "symbol_table.h"
    int yylex (void);
    int yyerror (char* yaccProvidedMessage);

    char *typeToString[] = {
        "LOCAL_VAR",
        "GLOBAL_VAR",
        "ARGUMENT",

        "USER_FUNC",
        "LIB_FUNC"
    };

    char *_func_name;
    int _func_count = 0;
    int _anon_func_counter = 0;

    int scope;
    extern int yylineno;
    extern char *yytext;
    extern FILE *yyin;
    SymTable *symTable;

#line 97 "parser.c"

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

#include "parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NUM = 3,                        /* NUM  */
  YYSYMBOL_ID = 4,                         /* ID  */
  YYSYMBOL_STRING = 5,                     /* STRING  */
  YYSYMBOL_IF = 6,                         /* IF  */
  YYSYMBOL_ELSE = 7,                       /* ELSE  */
  YYSYMBOL_WHILE = 8,                      /* WHILE  */
  YYSYMBOL_FOR = 9,                        /* FOR  */
  YYSYMBOL_FUNCTION = 10,                  /* FUNCTION  */
  YYSYMBOL_RETURN = 11,                    /* RETURN  */
  YYSYMBOL_BREAK = 12,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 13,                  /* CONTINUE  */
  YYSYMBOL_AND = 14,                       /* AND  */
  YYSYMBOL_NOT = 15,                       /* NOT  */
  YYSYMBOL_OR = 16,                        /* OR  */
  YYSYMBOL_LOCAL = 17,                     /* LOCAL  */
  YYSYMBOL_TRUE = 18,                      /* TRUE  */
  YYSYMBOL_FALSE = 19,                     /* FALSE  */
  YYSYMBOL_NIL = 20,                       /* NIL  */
  YYSYMBOL_LEFT_BRACE = 21,                /* LEFT_BRACE  */
  YYSYMBOL_RIGHT_BRACE = 22,               /* RIGHT_BRACE  */
  YYSYMBOL_LEFT_BRACKET = 23,              /* LEFT_BRACKET  */
  YYSYMBOL_RIGHT_BRACKET = 24,             /* RIGHT_BRACKET  */
  YYSYMBOL_LEFT_PARENTHESIS = 25,          /* LEFT_PARENTHESIS  */
  YYSYMBOL_RIGHT_PARENTHESIS = 26,         /* RIGHT_PARENTHESIS  */
  YYSYMBOL_SEMICOLON = 27,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 28,                     /* COMMA  */
  YYSYMBOL_COLON = 29,                     /* COLON  */
  YYSYMBOL_DOUBLE_COLON = 30,              /* DOUBLE_COLON  */
  YYSYMBOL_DOT = 31,                       /* DOT  */
  YYSYMBOL_DOUBLE_DOT = 32,                /* DOUBLE_DOT  */
  YYSYMBOL_EQUALS = 33,                    /* EQUALS  */
  YYSYMBOL_PLUS = 34,                      /* PLUS  */
  YYSYMBOL_MINUS = 35,                     /* MINUS  */
  YYSYMBOL_MULT = 36,                      /* MULT  */
  YYSYMBOL_DIV = 37,                       /* DIV  */
  YYSYMBOL_MOD = 38,                       /* MOD  */
  YYSYMBOL_EQUALS_EQUALS = 39,             /* EQUALS_EQUALS  */
  YYSYMBOL_NOT_EQUALS = 40,                /* NOT_EQUALS  */
  YYSYMBOL_PLUS_PLUS = 41,                 /* PLUS_PLUS  */
  YYSYMBOL_MINUS_MINUS = 42,               /* MINUS_MINUS  */
  YYSYMBOL_GREATER_THAN = 43,              /* GREATER_THAN  */
  YYSYMBOL_LESS_THAN = 44,                 /* LESS_THAN  */
  YYSYMBOL_GREATER_OR_EQUAL = 45,          /* GREATER_OR_EQUAL  */
  YYSYMBOL_LESS_OR_EQUAL = 46,             /* LESS_OR_EQUAL  */
  YYSYMBOL_UMINUS = 47,                    /* UMINUS  */
  YYSYMBOL_YYACCEPT = 48,                  /* $accept  */
  YYSYMBOL_program = 49,                   /* program  */
  YYSYMBOL_statements = 50,                /* statements  */
  YYSYMBOL_statement = 51,                 /* statement  */
  YYSYMBOL_expression = 52,                /* expression  */
  YYSYMBOL_term = 53,                      /* term  */
  YYSYMBOL_assignexpr = 54,                /* assignexpr  */
  YYSYMBOL_primary = 55,                   /* primary  */
  YYSYMBOL_lvalue = 56,                    /* lvalue  */
  YYSYMBOL_member = 57,                    /* member  */
  YYSYMBOL_call = 58,                      /* call  */
  YYSYMBOL_callsuffix = 59,                /* callsuffix  */
  YYSYMBOL_normcall = 60,                  /* normcall  */
  YYSYMBOL_methodcall = 61,                /* methodcall  */
  YYSYMBOL_elist = 62,                     /* elist  */
  YYSYMBOL_objectdef = 63,                 /* objectdef  */
  YYSYMBOL_indexed = 64,                   /* indexed  */
  YYSYMBOL_indexedelem = 65,               /* indexedelem  */
  YYSYMBOL_block = 66,                     /* block  */
  YYSYMBOL_blockstart = 67,                /* blockstart  */
  YYSYMBOL_blockend = 68,                  /* blockend  */
  YYSYMBOL_blockstmt = 69,                 /* blockstmt  */
  YYSYMBOL_funcdef = 70,                   /* funcdef  */
  YYSYMBOL_71_1 = 71,                      /* $@1  */
  YYSYMBOL_72_2 = 72,                      /* $@2  */
  YYSYMBOL_funcstart = 73,                 /* funcstart  */
  YYSYMBOL_const = 74,                     /* const  */
  YYSYMBOL_idlist = 75,                    /* idlist  */
  YYSYMBOL_arg = 76,                       /* arg  */
  YYSYMBOL_ifstmt = 77,                    /* ifstmt  */
  YYSYMBOL_whilestmt = 78,                 /* whilestmt  */
  YYSYMBOL_forstmt = 79,                   /* forstmt  */
  YYSYMBOL_returnstmt = 80                 /* returnstmt  */
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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   644

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  92
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  172

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   302


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
       0,    61,    61,    63,    64,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      96,    97,    98,    99,   100,   101,   102,   103,   106,   134,
     135,   136,   137,   138,   141,   158,   177,   188,   191,   192,
     193,   194,   197,   198,   204,   207,   208,   211,   213,   215,
     216,   217,   220,   221,   224,   225,   228,   231,   232,   235,
     239,   243,   244,   247,   247,   247,   250,   269,   271,   271,
     271,   271,   271,   273,   274,   275,   278,   294,   295,   298,
     300,   302,   303
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
  "\"end of file\"", "error", "\"invalid token\"", "NUM", "ID", "STRING",
  "IF", "ELSE", "WHILE", "FOR", "FUNCTION", "RETURN", "BREAK", "CONTINUE",
  "AND", "NOT", "OR", "LOCAL", "TRUE", "FALSE", "NIL", "LEFT_BRACE",
  "RIGHT_BRACE", "LEFT_BRACKET", "RIGHT_BRACKET", "LEFT_PARENTHESIS",
  "RIGHT_PARENTHESIS", "SEMICOLON", "COMMA", "COLON", "DOUBLE_COLON",
  "DOT", "DOUBLE_DOT", "EQUALS", "PLUS", "MINUS", "MULT", "DIV", "MOD",
  "EQUALS_EQUALS", "NOT_EQUALS", "PLUS_PLUS", "MINUS_MINUS",
  "GREATER_THAN", "LESS_THAN", "GREATER_OR_EQUAL", "LESS_OR_EQUAL",
  "UMINUS", "$accept", "program", "statements", "statement", "expression",
  "term", "assignexpr", "primary", "lvalue", "member", "call",
  "callsuffix", "normcall", "methodcall", "elist", "objectdef", "indexed",
  "indexedelem", "block", "blockstart", "blockend", "blockstmt", "funcdef",
  "$@1", "$@2", "funcstart", "const", "idlist", "arg", "ifstmt",
  "whilestmt", "forstmt", "returnstmt", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
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
#endif

#define YYPACT_NINF (-74)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -74,    20,   170,   -74,   -74,   -74,   -74,   -23,    -3,     0,
      19,   201,     3,     6,   284,    23,   -74,   -74,   -74,   232,
     -74,   265,   -74,    25,     1,     1,   284,   -74,   301,   -74,
     -74,   -74,     7,   -74,   -10,   -74,   -74,    99,   -74,     9,
     -74,   -74,   -74,   -74,   -74,   284,   284,   284,   -74,   -74,
     316,   -74,   -74,   -74,   -74,   284,   349,    24,    32,     8,
     364,    15,   -74,    45,   -15,   -10,   -15,   -74,   284,   284,
     -74,   284,   284,   284,   284,   284,   284,   284,   284,   284,
     284,   284,   284,   284,    38,    52,   284,   -74,   -74,   -74,
     -74,   -74,   284,   284,    53,   -74,   170,   -74,    34,   -74,
     397,   412,    33,   -74,   445,   284,   -74,   -74,    39,   -74,
      36,    37,   432,   585,    14,    14,   -74,   -74,   -74,   598,
     598,   461,   461,   461,   461,   478,    42,   -74,    40,   571,
     511,    55,   -74,   -74,   -74,    60,   170,   170,   284,   284,
     -74,   -74,   284,    36,   -74,   -74,   284,   -74,   -74,   -74,
      56,    57,    76,   -74,   525,   558,    61,    62,   -74,    60,
     170,   284,   -74,   -74,   -74,    63,   -74,   -74,    65,   -74,
     170,   -74
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     0,     2,     1,    78,    44,    79,     0,     0,     0,
      77,     0,     0,     0,     0,     0,    81,    82,    80,    61,
      69,     0,    14,     0,     0,     0,     0,     3,     0,    29,
      15,    37,    39,    47,    40,    41,    12,     0,    13,     0,
      43,     6,     7,     8,     9,     0,     0,    61,    76,    91,
       0,    10,    11,    32,    45,     0,    59,     0,     0,    64,
       0,     0,    46,     0,    33,     0,    35,    31,     0,     0,
       5,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    61,     0,     0,     0,    34,    36,    53,
      55,    56,     0,    61,     0,    70,    71,    67,     0,    73,
       0,     0,     0,    92,     0,    61,    62,    63,     0,    30,
      42,     0,    27,    28,    16,    17,    18,    19,    20,    25,
      26,    21,    23,    22,    24,     0,     0,    48,     0,    38,
       0,     0,    50,    72,    68,    85,     0,     0,     0,     0,
      60,    65,    61,     0,    49,    57,    61,    51,    52,    86,
       0,    83,    87,    89,     0,     0,     0,     0,    74,    85,
       0,    61,    66,    54,    58,     0,    84,    88,     0,    75,
       0,    90
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -74,   -74,   -74,     2,    -2,   -74,   -74,   -74,   -17,   -74,
     -11,   -74,   -74,   -74,   -46,   -74,   -19,   -74,   -73,   -74,
      -5,    -1,   -18,   -74,   -74,   -74,   -74,   -62,   -74,   -74,
     -74,   -74,   -74
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,    96,    56,    29,    30,    31,    32,    33,
      34,    89,    90,    91,    57,    35,    58,    59,    36,    37,
      97,    98,    38,   135,   165,    39,    40,   150,   151,    41,
      42,    43,    44
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      28,   102,    45,    61,    27,     5,    82,    64,    66,    50,
      83,    92,    53,    65,    65,    93,    84,    85,    15,    60,
       3,    94,    46,    48,    67,    47,    63,    54,    82,    62,
      51,    23,    83,    52,    99,    28,   108,   126,    84,    85,
      86,   110,   127,   100,   101,   111,   106,   131,    87,    88,
      73,    74,    75,   104,   107,    10,   128,   132,    95,   140,
     138,   142,    55,   143,   149,   146,   112,   113,   145,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   148,   158,   160,   129,   159,    20,   163,   164,   141,
     130,   170,   169,   134,    28,   133,   156,   166,     0,     0,
     157,     0,     4,     5,     6,     7,     0,     8,     9,    10,
      11,    12,    13,     0,    14,   168,    15,    16,    17,    18,
      19,     0,    20,    95,    21,     0,    22,     0,     0,    23,
       0,     0,     0,     0,    28,    28,   154,   155,   152,   153,
      24,    25,     0,     0,     0,     0,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,   167,     0,     0,     0,     0,     0,    28,     0,
       0,     0,   171,     4,     5,     6,     7,     0,     8,     9,
      10,    11,    12,    13,     0,    14,     0,    15,    16,    17,
      18,    19,     0,    20,     0,    21,     0,    22,     0,     0,
      23,     0,     0,     0,     4,     5,     6,     0,     0,     0,
       0,    24,    25,     0,     0,     0,    14,    26,    15,    16,
      17,    18,    19,     0,     0,     0,    21,     0,    49,     0,
       0,    23,     0,     0,     0,     4,     5,     6,     0,     0,
       0,     0,    24,    25,     0,     0,     0,    14,    26,    15,
      16,    17,    18,    19,     0,    55,     0,    21,     0,     0,
       0,     0,    23,     0,     0,     0,     0,     0,     4,     5,
       6,     0,     0,    24,    25,    10,     0,     0,     0,    26,
      14,     0,    15,    16,    17,    18,    19,     4,     5,     6,
      21,     0,     0,     0,     0,    23,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    24,    25,     0,    21,
       0,     0,    26,     0,    23,    68,     0,    69,     0,     0,
       0,     0,     0,     0,     0,    24,    25,     0,    70,     0,
      68,    26,    69,     0,     0,    71,    72,    73,    74,    75,
      76,    77,     0,   103,    78,    79,    80,    81,     0,     0,
      71,    72,    73,    74,    75,    76,    77,     0,     0,    78,
      79,    80,    81,    68,     0,    69,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   105,    68,     0,
      69,     0,     0,    71,    72,    73,    74,    75,    76,    77,
     109,     0,    78,    79,    80,    81,     0,     0,    71,    72,
      73,    74,    75,    76,    77,     0,     0,    78,    79,    80,
      81,    68,     0,    69,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   136,     0,     0,    68,     0,    69,     0,
       0,    71,    72,    73,    74,    75,    76,    77,   137,     0,
      78,    79,    80,    81,     0,     0,    71,    72,    73,    74,
      75,    76,    77,     0,     0,    78,    79,    80,    81,    68,
       0,    69,     0,     0,     0,     0,    71,    72,    73,    74,
      75,    76,    77,     0,   139,    78,    79,    80,    81,    71,
      72,    73,    74,    75,    76,    77,     0,     0,    78,    79,
      80,    81,    68,     0,    69,    71,    72,    73,    74,    75,
     144,     0,     0,     0,    -1,    -1,    -1,    -1,     0,     0,
       0,     0,    71,    72,    73,    74,    75,    76,    77,     0,
       0,    78,    79,    80,    81,    68,     0,    69,     0,     0,
       0,     0,     0,   147,     0,     0,     0,     0,     0,    68,
       0,    69,     0,     0,     0,    71,    72,    73,    74,    75,
      76,    77,   161,     0,    78,    79,    80,    81,     0,    71,
      72,    73,    74,    75,    76,    77,     0,     0,    78,    79,
      80,    81,    68,     0,    69,     0,     0,     0,     0,     0,
       0,     0,   162,     0,     0,    68,     0,    69,     0,     0,
       0,     0,    71,    72,    73,    74,    75,    76,    77,    68,
       0,    78,    79,    80,    81,    71,    72,    73,    74,    75,
      76,    77,     0,     0,    78,    79,    80,    81,     0,    71,
      72,    73,    74,    75,    76,    77,     0,     0,    78,    79,
      80,    81,    71,    72,    73,    74,    75,    -1,    -1,     0,
       0,    78,    79,    80,    81
};

static const yytype_int16 yycheck[] =
{
       2,    47,    25,    21,     2,     4,    21,    24,    25,    11,
      25,    21,    14,    24,    25,    25,    31,    32,    17,    21,
       0,    31,    25,     4,    26,    25,    25,     4,    21,     4,
      27,    30,    25,    27,    25,    37,    28,    83,    31,    32,
      33,    26,     4,    45,    46,    63,    22,    93,    41,    42,
      36,    37,    38,    55,    22,    10,     4,     4,    24,   105,
      27,    25,    23,    26,     4,    25,    68,    69,    26,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    26,    26,     7,    86,    28,    23,    26,    26,   108,
      92,    26,   165,    98,    96,    96,   142,   159,    -1,    -1,
     146,    -1,     3,     4,     5,     6,    -1,     8,     9,    10,
      11,    12,    13,    -1,    15,   161,    17,    18,    19,    20,
      21,    -1,    23,    24,    25,    -1,    27,    -1,    -1,    30,
      -1,    -1,    -1,    -1,   136,   137,   138,   139,   136,   137,
      41,    42,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,
      -1,    -1,   160,    -1,    -1,    -1,    -1,    -1,   170,    -1,
      -1,    -1,   170,     3,     4,     5,     6,    -1,     8,     9,
      10,    11,    12,    13,    -1,    15,    -1,    17,    18,    19,
      20,    21,    -1,    23,    -1,    25,    -1,    27,    -1,    -1,
      30,    -1,    -1,    -1,     3,     4,     5,    -1,    -1,    -1,
      -1,    41,    42,    -1,    -1,    -1,    15,    47,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    25,    -1,    27,    -1,
      -1,    30,    -1,    -1,    -1,     3,     4,     5,    -1,    -1,
      -1,    -1,    41,    42,    -1,    -1,    -1,    15,    47,    17,
      18,    19,    20,    21,    -1,    23,    -1,    25,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,    -1,    41,    42,    10,    -1,    -1,    -1,    47,
      15,    -1,    17,    18,    19,    20,    21,     3,     4,     5,
      25,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    15,
      -1,    17,    18,    19,    20,    21,    41,    42,    -1,    25,
      -1,    -1,    47,    -1,    30,    14,    -1,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    42,    -1,    27,    -1,
      14,    47,    16,    -1,    -1,    34,    35,    36,    37,    38,
      39,    40,    -1,    27,    43,    44,    45,    46,    -1,    -1,
      34,    35,    36,    37,    38,    39,    40,    -1,    -1,    43,
      44,    45,    46,    14,    -1,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    14,    -1,
      16,    -1,    -1,    34,    35,    36,    37,    38,    39,    40,
      26,    -1,    43,    44,    45,    46,    -1,    -1,    34,    35,
      36,    37,    38,    39,    40,    -1,    -1,    43,    44,    45,
      46,    14,    -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    14,    -1,    16,    -1,
      -1,    34,    35,    36,    37,    38,    39,    40,    26,    -1,
      43,    44,    45,    46,    -1,    -1,    34,    35,    36,    37,
      38,    39,    40,    -1,    -1,    43,    44,    45,    46,    14,
      -1,    16,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    40,    -1,    29,    43,    44,    45,    46,    34,
      35,    36,    37,    38,    39,    40,    -1,    -1,    43,    44,
      45,    46,    14,    -1,    16,    34,    35,    36,    37,    38,
      22,    -1,    -1,    -1,    43,    44,    45,    46,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    40,    -1,
      -1,    43,    44,    45,    46,    14,    -1,    16,    -1,    -1,
      -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,    14,
      -1,    16,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    40,    27,    -1,    43,    44,    45,    46,    -1,    34,
      35,    36,    37,    38,    39,    40,    -1,    -1,    43,    44,
      45,    46,    14,    -1,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    14,    -1,    16,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    40,    14,
      -1,    43,    44,    45,    46,    34,    35,    36,    37,    38,
      39,    40,    -1,    -1,    43,    44,    45,    46,    -1,    34,
      35,    36,    37,    38,    39,    40,    -1,    -1,    43,    44,
      45,    46,    34,    35,    36,    37,    38,    39,    40,    -1,
      -1,    43,    44,    45,    46
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    49,    50,     0,     3,     4,     5,     6,     8,     9,
      10,    11,    12,    13,    15,    17,    18,    19,    20,    21,
      23,    25,    27,    30,    41,    42,    47,    51,    52,    53,
      54,    55,    56,    57,    58,    63,    66,    67,    70,    73,
      74,    77,    78,    79,    80,    25,    25,    25,     4,    27,
      52,    27,    27,    52,     4,    23,    52,    62,    64,    65,
      52,    70,     4,    25,    56,    58,    56,    52,    14,    16,
      27,    34,    35,    36,    37,    38,    39,    40,    43,    44,
      45,    46,    21,    25,    31,    32,    33,    41,    42,    59,
      60,    61,    21,    25,    31,    24,    51,    68,    69,    25,
      52,    52,    62,    27,    52,    28,    22,    22,    28,    26,
      26,    70,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    62,     4,     4,    52,
      52,    62,     4,    69,    68,    71,    26,    26,    27,    29,
      62,    64,    25,    26,    22,    26,    25,    22,    26,     4,
      75,    76,    51,    51,    52,    52,    62,    62,    26,    28,
       7,    27,    24,    26,    26,    72,    75,    51,    62,    66,
      26,    51
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    49,    50,    50,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      53,    53,    53,    53,    53,    53,    53,    53,    54,    55,
      55,    55,    55,    55,    56,    56,    56,    56,    57,    57,
      57,    57,    58,    58,    58,    59,    59,    60,    61,    62,
      62,    62,    63,    63,    64,    64,    65,    66,    66,    67,
      68,    69,    69,    71,    72,    70,    73,    73,    74,    74,
      74,    74,    74,    75,    75,    75,    76,    77,    77,    78,
      79,    80,    80
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     2,     1,     1,     1,     1,
       2,     2,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       3,     2,     2,     2,     2,     2,     2,     1,     3,     1,
       1,     1,     3,     1,     1,     2,     2,     1,     3,     4,
       3,     4,     4,     2,     6,     1,     1,     3,     5,     1,
       3,     0,     3,     3,     1,     3,     5,     2,     3,     1,
       1,     1,     2,     0,     0,     7,     2,     1,     1,     1,
       1,     1,     1,     1,     3,     0,     1,     5,     7,     5,
       9,     2,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

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

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


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
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
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
  case 38: /* assignexpr: lvalue EQUALS expression  */
#line 106 "parser.y"
                                            {
                                                SymTableEntry *e;

                                                // Check wether lvalue is a function
                                                e = (yyvsp[-2].exprValue);
                                                if(e->type == LOCAL_VAR || e->type == GLOBAL_VAR || e->type == ARGUMENT_VAR){

                                                    // If it's a variable, check wether we have to create a new one or its referencing an existing one
                                                    if(_func_count != 0 || !e->isActive){
                                                        // Variable was either out of function or not active

                                                        // If it's global or in the same scope, we can reference it
                                                        if(e->type != GLOBAL_VAR && e->value.varValue->scope != scope ){

                                                            // Else, we have to insert a new one
                                                            if(scope == 0){
                                                                insert(symTable, e->value.varValue->name, scope, yylineno, GLOBAL_VAR);
                                                            }else
                                                                insert(symTable, e->value.varValue->name, scope, yylineno, LOCAL_VAR);
                                                        }
                                                    }
                                                }else{
                                                    
                                                    // Functions can not be l-values
                                                    printf("input:%d: error: on function %s, functions cannot be l-values\n", yylineno, e->value.funcValue->name);
                                                }
                                            }
#line 1416 "parser.c"
    break;

  case 44: /* lvalue: ID  */
#line 141 "parser.y"
                                            {
                                                SymTableEntry *e;
                                                
                                                // Check if active variables exist in any scope from current and down
                                                if((e = lookup_variable(symTable, (yyvsp[0].strValue), scope)) == NULL){
                                                    
                                                    // If not, insert the variable
                                                    if(scope == 0)
                                                        (yyval.exprValue) = insert(symTable, (yyvsp[0].strValue), scope, yylineno, GLOBAL_VAR);
                                                    else
                                                        (yyval.exprValue) = insert(symTable, (yyvsp[0].strValue), scope, yylineno, LOCAL_VAR);
                                                }else{

                                                    // If exists, set value for further checks
                                                    (yyval.exprValue) = e;
                                                }
                                            }
#line 1438 "parser.c"
    break;

  case 45: /* lvalue: LOCAL ID  */
#line 158 "parser.y"
                                            {
                                                SymTableEntry *e;
                                                
                                                // Check current scope
                                                if((e = lookup_no_type(symTable, (yyvsp[0].strValue), scope)) == NULL){
                                                    if((e = lookup(symTable, (yyvsp[0].strValue), 0, LIB_FUNC)) == NULL){
                                                        if(scope == 0){
                                                            (yyval.exprValue) = insert(symTable, (yyvsp[0].strValue), scope, yylineno, GLOBAL_VAR);
                                                        }else{
                                                            (yyval.exprValue) = insert(symTable, (yyvsp[0].strValue), scope, yylineno, LOCAL_VAR);
                                                        }
                                                    }else{
                                                        printf("input:%d: error: local symbol %s is attempting to shadow a library function\n", yylineno, (yyvsp[0].strValue));
                                                    }
                                                }else{
                                                    // If exists, set reference
                                                    (yyval.exprValue) = e;
                                                }
                                            }
#line 1462 "parser.c"
    break;

  case 46: /* lvalue: DOUBLE_COLON ID  */
#line 177 "parser.y"
                                            {
                                                SymTableEntry *e;
                                                
                                                // Check globals
                                                if((e = lookup_no_type(symTable, (yyvsp[0].strValue), 0)) == NULL){
                                                    printf("input:%d: error: global reference %s in line %d not found\n", yylineno, (yyvsp[0].strValue), yylineno);
                                                }else{
                                                    // If exists, set reference
                                                    (yyval.exprValue) = e;
                                                }
                                            }
#line 1478 "parser.c"
    break;

  case 47: /* lvalue: member  */
#line 188 "parser.y"
                                            {}
#line 1484 "parser.c"
    break;

  case 48: /* member: lvalue DOT ID  */
#line 191 "parser.y"
                                {}
#line 1490 "parser.c"
    break;

  case 49: /* member: lvalue LEFT_BRACE expression RIGHT_BRACE  */
#line 192 "parser.y"
                                                            {}
#line 1496 "parser.c"
    break;

  case 53: /* call: lvalue callsuffix  */
#line 198 "parser.y"
                                    {
                                        SymTableEntry* e;

                                        e = (yyvsp[-1].exprValue);
                                        printf("Usage of %s as call in %d\n", e->value.funcValue->name, yylineno);
                                    }
#line 1507 "parser.c"
    break;

  case 69: /* blockstart: LEFT_BRACKET  */
#line 235 "parser.y"
                                {
                                    scope++; // Up scope
                                }
#line 1515 "parser.c"
    break;

  case 70: /* blockend: RIGHT_BRACKET  */
#line 239 "parser.y"
                                {
                                    scope_down(symTable);
                                }
#line 1523 "parser.c"
    break;

  case 73: /* $@1: %empty  */
#line 247 "parser.y"
                                           {scope++;}
#line 1529 "parser.c"
    break;

  case 74: /* $@2: %empty  */
#line 247 "parser.y"
                                                                               {scope--; _func_count++;}
#line 1535 "parser.c"
    break;

  case 75: /* funcdef: funcstart LEFT_PARENTHESIS $@1 idlist RIGHT_PARENTHESIS $@2 block  */
#line 247 "parser.y"
                                                                                                               {_func_count--;}
#line 1541 "parser.c"
    break;

  case 76: /* funcstart: FUNCTION ID  */
#line 250 "parser.y"
                            {
                                SymTableEntry *e;
                                int entryScope;

                                (yyval.strValue) = (yyvsp[0].strValue);
                                _func_name = (yyvsp[0].strValue);

                                // Search for libfunc
                                if((e = function_lookup(symTable, (yyvsp[0].strValue), scope)) == NULL){
                                    insert(symTable, (yyvsp[0].strValue), scope, yylineno, USER_FUNC);
                                }else{
                                    if(e->type == USER_FUNC)
                                        printf("input:%d: error: duplicate user function %s, first defined in line %d\n", yylineno, (yyvsp[0].strValue), e->value.funcValue->line);
                                    else if(e->type == LIB_FUNC)
                                        printf("input:%d: error: shadowing of library function %s is not permitted\n", yylineno, (yyvsp[0].strValue));
                                    else
                                        printf("input:%d: error: function %s has conflicting type with variable %s first defined in line %d\n", yylineno, (yyvsp[0].strValue), e->value.varValue->name, e->value.varValue->line);
                                }
                            }
#line 1565 "parser.c"
    break;

  case 85: /* idlist: %empty  */
#line 275 "parser.y"
                  {}
#line 1571 "parser.c"
    break;

  case 86: /* arg: ID  */
#line 278 "parser.y"
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
#line 1591 "parser.c"
    break;


#line 1595 "parser.c"

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
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 308 "parser.y"


int yyerror(char *yaccProvidedMessage){
    printf("alpha: %s\n", yaccProvidedMessage);
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
    int i, scope = 0;

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

    symTable = init_sym_table();
    yyparse();

    //printSymTable(symTable);
    printByScope(symTable);

    return 0;
}
