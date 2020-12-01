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
#line 1 "compiler.y"

#include <cstdlib>
#include <cstdio>
#include <string>
#include "tree.h"

using namespace std;

extern char *yytext;
extern int column;
extern FILE * yyin;
extern FILE * yyout;
gramTree *root;
extern int yylineno;

int yylex(void);
void yyerror(const char*);

#line 89 "y.tab.c"

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
    IDENTIFIER = 258,
    CONSTANT = 259,
    STRING_LITERAL = 260,
    SIZEOF = 261,
    CONSTANT_INT = 262,
    CONSTANT_DOUBLE = 263,
    PTR_OP = 264,
    INC_OP = 265,
    DEC_OP = 266,
    LEFT_OP = 267,
    RIGHT_OP = 268,
    LE_OP = 269,
    GE_OP = 270,
    EQ_OP = 271,
    NE_OP = 272,
    AND_OP = 273,
    OR_OP = 274,
    MUL_ASSIGN = 275,
    DIV_ASSIGN = 276,
    MOD_ASSIGN = 277,
    ADD_ASSIGN = 278,
    SUB_ASSIGN = 279,
    LEFT_ASSIGN = 280,
    RIGHT_ASSIGN = 281,
    AND_ASSIGN = 282,
    XOR_ASSIGN = 283,
    OR_ASSIGN = 284,
    TYPE_NAME = 285,
    CHAR = 286,
    INT = 287,
    DOUBLE = 288,
    VOID = 289,
    BOOL = 290,
    CASE = 291,
    IF = 292,
    ELSE = 293,
    SWITCH = 294,
    WHILE = 295,
    DO = 296,
    FOR = 297,
    GOTO = 298,
    CONTINUE = 299,
    BREAK = 300,
    RETURN = 301,
    TRUE = 302,
    FALSE = 303,
    LOWER_THAN_ELSE = 304
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 20 "compiler.y"

	struct gramTree* gt;

#line 192 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);





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
typedef yytype_int16 yy_state_t;

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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   717

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  74
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  154
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  269

#define YYUNDEFTOK  2
#define YYMAXUTOK   304


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
       2,     2,     2,    57,     2,     2,     2,    63,    56,     2,
      71,    72,    61,    60,    50,    59,    55,    62,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    51,    49,
      64,    52,    65,    68,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    53,     2,    54,    66,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,    67,    70,    58,     2,     2,     2,
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
      45,    46,    47,    48,    73
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    60,    60,    67,    71,    77,    82,    89,    94,   101,
     104,   108,   112,   116,   120,   127,   130,   137,   141,   145,
     149,   156,   159,   162,   165,   172,   175,   178,   181,   188,
     191,   194,   201,   204,   208,   216,   219,   222,   225,   229,
     237,   240,   244,   251,   254,   261,   264,   271,   274,   281,
     284,   292,   295,   303,   307,   314,   317,   321,   325,   329,
     333,   337,   341,   345,   349,   353,   361,   365,   373,   376,
     383,   386,   392,   395,   403,   406,   409,   412,   415,   423,
     427,   431,   436,   440,   444,   448,   452,   461,   464,   470,
     473,   476,   482,   485,   491,   494,   497,   500,   503,   506,
     509,   512,   515,   518,   521,   528,   531,   535,   542,   545,
     548,   551,   557,   563,   566,   572,   575,   582,   585,   588,
     591,   594,   597,   604,   607,   614,   617,   623,   626,   632,
     635,   641,   644,   651,   654,   657,   664,   667,   670,   673,
     676,   679,   686,   689,   692,   695,   698,   704,   707,   713,
     718,   726,   729,   735,   738
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "SIZEOF", "CONSTANT_INT", "CONSTANT_DOUBLE", "PTR_OP",
  "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP",
  "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN",
  "XOR_ASSIGN", "OR_ASSIGN", "TYPE_NAME", "CHAR", "INT", "DOUBLE", "VOID",
  "BOOL", "CASE", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "TRUE", "FALSE", "';'", "','", "':'",
  "'='", "'['", "']'", "'.'", "'&'", "'!'", "'~'", "'-'", "'+'", "'*'",
  "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "'{'", "'}'", "'('",
  "')'", "LOWER_THAN_ELSE", "$accept", "Program", "primary_expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "assignment_expression", "assignment_operator", "expression",
  "declaration", "init_declarator_list", "init_declarator",
  "type_specifier", "declarator", "parameter_list",
  "parameter_declaration", "identifier_list", "abstract_declarator",
  "initializer", "initializer_list", "designation", "designator_list",
  "designator", "statement", "labeled_statement", "compound_statement",
  "block_item_list", "block_item", "expression_statement",
  "selection_statement", "iteration_statement", "jump_statement",
  "translation_unit", "external_declaration", "function_definition",
  "declaration_list", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,    59,
      44,    58,    61,    91,    93,    46,    38,    33,   126,    45,
      43,    42,    47,    37,    60,    62,    94,   124,    63,   123,
     125,    40,    41,   304
};
# endif

#define YYPACT_NINF (-144)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     183,  -144,  -144,  -144,  -144,  -144,    15,  -144,     4,   183,
    -144,  -144,  -144,  -144,  -144,     5,   133,  -144,   434,  -144,
      20,  -144,     5,   575,   486,   244,    94,  -144,     4,  -144,
     112,  -144,  -144,    97,  -144,  -144,  -144,   646,   646,  -144,
    -144,  -144,  -144,  -144,  -144,   470,   646,  -144,    33,   243,
     646,   127,   126,   195,    23,   205,   -34,   -38,   -36,    16,
      26,  -144,  -144,  -144,    11,    14,     3,   646,    27,    53,
      66,   374,    68,   177,   124,   143,   315,  -144,  -144,  -144,
     207,  -144,  -144,  -144,  -144,   309,  -144,  -144,  -144,  -144,
    -144,  -144,  -144,    46,   -31,  -144,   -30,  -144,  -144,  -144,
    -144,   646,   199,  -144,   -23,   575,   122,  -144,   -15,  -144,
    -144,   646,    22,  -144,  -144,  -144,  -144,  -144,  -144,  -144,
    -144,  -144,  -144,  -144,   646,  -144,   646,   646,   646,   646,
     646,   646,   646,   646,   646,   646,   646,   646,   646,   646,
     646,   646,   646,   646,  -144,  -144,   374,  -144,    -5,   646,
     646,   646,   171,   393,   197,  -144,  -144,  -144,   247,  -144,
     646,  -144,  -144,   545,    81,   105,   116,   183,  -144,   216,
    -144,    -6,  -144,   451,  -144,  -144,  -144,  -144,  -144,    10,
    -144,   -11,  -144,  -144,  -144,  -144,  -144,   127,   127,   126,
     126,   195,   195,   195,   195,    23,    23,   205,   -34,   -38,
     -36,    16,  -144,   374,   -10,     2,    28,   152,   640,   640,
    -144,  -144,  -144,  -144,   194,   204,  -144,    51,    50,   560,
     128,  -144,  -144,  -144,  -144,  -144,   575,  -144,   646,  -144,
    -144,   374,   374,   374,   646,    48,   202,  -144,  -144,  -144,
    -144,  -144,   228,   240,  -144,    82,  -144,  -144,   215,  -144,
    -144,    83,   374,   106,   374,   107,  -144,  -144,  -144,   374,
     251,  -144,   374,  -144,   374,  -144,  -144,  -144,  -144
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    75,    76,    77,    74,    78,     0,   150,     0,     2,
     147,   149,     1,    79,    68,     0,     0,    70,    72,   148,
       0,    69,     0,     0,     0,     0,     0,   153,     0,   152,
       0,    80,    71,    72,     3,     6,     7,     0,     0,     4,
       5,    24,    23,    22,    21,     0,     0,     9,    17,    25,
       0,    29,    32,    35,    40,    43,    45,    47,    49,    51,
      53,   105,    73,    83,     0,     0,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   131,   125,    66,
       0,   129,   130,   117,   118,     0,   127,   119,   120,   121,
     122,    92,    86,    91,     0,    87,     0,   154,   151,    18,
      19,     0,     0,   108,     0,     0,     0,   113,     0,    13,
      14,     0,     0,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    55,     0,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    82,    81,     0,    25,     0,     0,
       0,     0,     0,     0,     0,   143,   144,   145,     0,   132,
       0,   126,   128,     0,     0,    89,    90,     0,    84,     0,
      85,     0,   116,     0,   106,   109,   112,   114,     8,     0,
      11,     0,    15,    54,    26,    27,    28,    31,    30,    33,
      34,    38,    39,    36,    37,    41,    42,    44,    46,    48,
      50,    52,   123,     0,     0,     0,     0,     0,     0,     0,
     142,   146,    67,    95,     0,     0,   101,     0,     0,     0,
       0,    88,    93,   115,   107,   110,     0,    10,     0,    12,
     124,     0,     0,     0,     0,     0,     0,    99,    96,   102,
      94,    97,     0,     0,   103,     0,   111,    16,   133,   135,
     136,     0,     0,     0,     0,     0,   100,    98,   104,     0,
       0,   140,     0,   138,     0,   134,   137,   141,   139
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -144,  -144,  -144,  -144,  -144,    98,  -144,   169,   174,   109,
     170,   172,   181,   168,   182,   167,   -51,   -22,  -144,   -40,
     -13,  -144,   305,     0,    -4,  -143,   161,  -144,   165,   -42,
    -144,   157,  -144,   225,   -61,  -144,   100,  -144,   248,  -142,
    -144,  -144,  -144,  -144,   323,  -144,  -144
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,    47,    48,   181,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    79,   124,    80,
       7,    16,    17,    28,    20,    94,    95,    96,   166,    62,
     104,   105,   106,   107,    82,    83,    84,    85,    86,    87,
      88,    89,    90,     9,    10,    11,    30
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       8,    61,    65,   103,    18,    27,   108,    13,    13,     8,
     152,   209,    81,   143,   143,    12,   148,    97,    33,   167,
     169,   217,   139,    61,    33,    34,    93,   173,   140,    35,
      36,   141,    37,    38,   142,   160,   158,   133,   134,   228,
     160,   168,   170,   109,   110,   143,   203,   174,   223,    13,
     171,    34,   160,    14,   146,    35,    36,   178,    37,    38,
     160,   229,   231,   175,   227,   144,   235,   236,   145,    39,
      40,   179,    81,    24,   232,    15,    15,   245,   160,    41,
      42,    43,    44,    61,    13,   202,   111,   135,   136,   165,
     182,    26,    31,    46,   180,    39,    40,    91,   149,   163,
     233,   167,   183,   219,   112,    41,    42,    43,    44,   204,
     205,   206,     1,     2,     3,     4,     5,   164,    29,    46,
     252,   220,   240,   239,   150,     1,     2,     3,     4,     5,
      98,   225,   167,   160,   163,    99,   100,   151,   212,   153,
     208,   215,   230,     1,     2,     3,     4,     5,   125,    23,
      24,    61,   164,   216,   258,   260,   160,   160,    24,     1,
       2,     3,     4,     5,    93,   147,    92,    93,    26,   219,
     248,   249,   250,   155,   176,   101,    26,   102,   262,   264,
     154,    25,    21,    22,   246,   129,   130,   220,   126,   127,
     128,   261,   156,   263,   251,   253,   255,   243,   265,   147,
     244,   267,   172,   268,    61,    34,   247,   131,   132,    35,
      36,   207,    37,    38,     1,     2,     3,     4,     5,   222,
      93,   137,   138,   234,   184,   185,   186,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   191,   192,   193,   194,   210,    66,   237,    39,
      40,    35,    36,   259,    37,    38,   159,   160,   238,    41,
      42,    43,    44,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,    46,   254,     1,     2,     3,     4,     5,
      67,    68,   256,    69,    70,    71,    72,    73,    74,    75,
      76,    39,    40,    77,   257,   123,   211,   160,   187,   188,
     266,    41,    42,    43,    44,   189,   190,   195,   196,   199,
     201,   197,    66,    25,    78,    46,    35,    36,    34,    37,
      38,   198,    35,    36,   200,    37,    38,    32,   221,   218,
     226,   177,    19,   162,     0,     0,     0,     0,     0,     0,
       1,     2,     3,     4,     5,    67,    68,     0,    69,    70,
      71,    72,    73,    74,    75,    76,    39,    40,    77,     0,
       0,     0,    39,    40,   157,     0,    41,    42,    43,    44,
       0,     0,    41,    42,    43,    44,     0,    66,    25,   161,
      46,    35,    36,     0,    37,    38,    46,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    34,     0,     0,     0,
      35,    36,     0,    37,    38,     0,     0,     0,     0,     0,
      67,    68,     0,    69,    70,    71,    72,    73,    74,    75,
      76,    39,    40,    77,     1,     2,     3,     4,     5,     0,
       0,    41,    42,    43,    44,     0,     0,     0,     0,     0,
      39,    40,    77,    25,     0,    46,     0,     0,     0,     0,
      41,    42,    43,    44,    34,     0,     0,     0,    35,    36,
       0,    37,    38,     0,    46,     1,     2,     3,     4,     5,
       0,     0,     0,    34,     0,     0,     0,    35,    36,     0,
      37,    38,     0,     0,     0,     0,    23,    24,     0,    34,
       0,     0,     0,    35,    36,     0,    37,    38,    39,    40,
       0,     0,     0,    25,   101,    26,   102,     0,    41,    42,
      43,    44,     0,     0,     0,     0,     0,    39,    40,     0,
      45,   224,    46,   101,     0,   102,     0,    41,    42,    43,
      44,     0,     0,    39,    40,     0,     0,     0,     0,    45,
      63,    46,     0,    41,    42,    43,    44,    64,    34,     0,
       0,     0,    35,    36,     0,    37,    38,    46,     0,     0,
       0,     0,     0,    34,     0,     0,     0,    35,    36,     0,
      37,    38,     0,     0,     0,     0,     0,     0,    34,     0,
       0,     0,    35,    36,     0,    37,    38,     0,     0,     0,
       0,     0,    39,    40,     0,     0,     0,     0,     0,   213,
       0,     0,    41,    42,    43,    44,   214,    39,    40,     0,
       0,     0,     0,     0,   241,     0,    46,    41,    42,    43,
      44,   242,    39,    40,     0,     0,     0,     0,     0,     0,
       0,    46,    41,    42,    43,    44,     0,     0,     0,     0,
       0,     0,     0,    34,    45,     0,    46,    35,    36,    34,
      37,    38,     0,    35,    36,     0,    37,    38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    39,    40,    77,
       0,     0,     0,    39,    40,     0,     0,    41,    42,    43,
      44,     0,     0,    41,    42,    43,    44,     0,     0,     0,
       0,    46,     0,     0,     0,     0,     0,    46
};

static const yytype_int16 yycheck[] =
{
       0,    23,    24,    45,     8,    18,    46,     3,     3,     9,
      71,   153,    25,    19,    19,     0,    67,    30,    22,    50,
      50,   164,    56,    45,    28,     3,    26,    50,    66,     7,
       8,    67,    10,    11,    18,    50,    76,    14,    15,    50,
      50,    72,    72,    10,    11,    19,    51,    70,    54,     3,
     101,     3,    50,    49,    51,     7,     8,    72,    10,    11,
      50,    72,    72,   105,    54,    54,   208,   209,    54,    47,
      48,   111,    85,    53,    72,    71,    71,   220,    50,    57,
      58,    59,    60,   105,     3,   146,    53,    64,    65,    93,
     112,    71,    72,    71,    72,    47,    48,     3,    71,    53,
      72,    50,   124,    53,    71,    57,    58,    59,    60,   149,
     150,   151,    31,    32,    33,    34,    35,    71,    18,    71,
      72,    71,    72,    72,    71,    31,    32,    33,    34,    35,
      30,   173,    50,    50,    53,    37,    38,    71,   160,    71,
     153,   163,   203,    31,    32,    33,    34,    35,    50,    52,
      53,   173,    71,    72,    72,    72,    50,    50,    53,    31,
      32,    33,    34,    35,   164,    67,    72,   167,    71,    53,
     231,   232,   233,    49,    52,    53,    71,    55,    72,    72,
       3,    69,    49,    50,   226,    59,    60,    71,    61,    62,
      63,   252,    49,   254,   234,   235,   236,   219,   259,   101,
      72,   262,     3,   264,   226,     3,   228,    12,    13,     7,
       8,    40,    10,    11,    31,    32,    33,    34,    35,     3,
     220,    16,    17,    71,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   133,   134,   135,   136,    49,     3,    54,    47,
      48,     7,     8,    38,    10,    11,    49,    50,    54,    57,
      58,    59,    60,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    71,    72,    31,    32,    33,    34,    35,
      36,    37,    54,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    54,    52,    49,    50,   129,   130,
      49,    57,    58,    59,    60,   131,   132,   137,   138,   141,
     143,   139,     3,    69,    70,    71,     7,     8,     3,    10,
      11,   140,     7,     8,   142,    10,    11,    22,   167,   164,
     173,   106,     9,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    37,    -1,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      -1,    -1,    47,    48,    49,    -1,    57,    58,    59,    60,
      -1,    -1,    57,    58,    59,    60,    -1,     3,    69,    70,
      71,     7,     8,    -1,    10,    11,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      36,    37,    -1,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    31,    32,    33,    34,    35,    -1,
      -1,    57,    58,    59,    60,    -1,    -1,    -1,    -1,    -1,
      47,    48,    49,    69,    -1,    71,    -1,    -1,    -1,    -1,
      57,    58,    59,    60,     3,    -1,    -1,    -1,     7,     8,
      -1,    10,    11,    -1,    71,    31,    32,    33,    34,    35,
      -1,    -1,    -1,     3,    -1,    -1,    -1,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    52,    53,    -1,     3,
      -1,    -1,    -1,     7,     8,    -1,    10,    11,    47,    48,
      -1,    -1,    -1,    69,    53,    71,    55,    -1,    57,    58,
      59,    60,    -1,    -1,    -1,    -1,    -1,    47,    48,    -1,
      69,    70,    71,    53,    -1,    55,    -1,    57,    58,    59,
      60,    -1,    -1,    47,    48,    -1,    -1,    -1,    -1,    69,
      54,    71,    -1,    57,    58,    59,    60,    61,     3,    -1,
      -1,    -1,     7,     8,    -1,    10,    11,    71,    -1,    -1,
      -1,    -1,    -1,     3,    -1,    -1,    -1,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    -1,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    54,
      -1,    -1,    57,    58,    59,    60,    61,    47,    48,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    71,    57,    58,    59,
      60,    61,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    57,    58,    59,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    69,    -1,    71,     7,     8,     3,
      10,    11,    -1,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,
      -1,    -1,    -1,    47,    48,    -1,    -1,    57,    58,    59,
      60,    -1,    -1,    57,    58,    59,    60,    -1,    -1,    -1,
      -1,    71,    -1,    -1,    -1,    -1,    -1,    71
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    31,    32,    33,    34,    35,    75,    94,    97,   117,
     118,   119,     0,     3,    49,    71,    95,    96,    98,   118,
      98,    49,    50,    52,    53,    69,    71,    94,    97,   110,
     120,    72,    96,    98,     3,     7,     8,    10,    11,    47,
      48,    57,    58,    59,    60,    69,    71,    76,    77,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,   103,    54,    61,    91,     3,    36,    37,    39,
      40,    41,    42,    43,    44,    45,    46,    49,    70,    91,
      93,    94,   108,   109,   110,   111,   112,   113,   114,   115,
     116,     3,    72,    97,    99,   100,   101,    94,   110,    79,
      79,    53,    55,   103,   104,   105,   106,   107,    93,    10,
      11,    53,    71,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    52,    92,    79,    61,    62,    63,    59,
      60,    12,    13,    14,    15,    64,    65,    16,    17,    56,
      66,    67,    18,    19,    54,    54,    51,    79,    90,    71,
      71,    71,   108,    71,     3,    49,    49,    49,    93,    49,
      50,    70,   112,    53,    71,    98,   102,    50,    72,    50,
      72,    90,     3,    50,    70,   103,    52,   107,    72,    93,
      72,    78,    91,    91,    79,    79,    79,    81,    81,    82,
      82,    83,    83,    83,    83,    84,    84,    85,    86,    87,
      88,    89,   108,    51,    93,    93,    93,    40,    94,   113,
      49,    49,    91,    54,    61,    91,    72,    99,   102,    53,
      71,   100,     3,    54,    70,   103,   105,    54,    50,    72,
     108,    72,    72,    72,    71,   113,   113,    54,    54,    72,
      72,    54,    61,    91,    72,    99,   103,    91,   108,   108,
     108,    93,    72,    93,    72,    93,    54,    54,    72,    38,
      72,   108,    72,   108,    72,   108,    49,   108,   108
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    74,    75,    76,    76,    76,    76,    76,    76,    77,
      77,    77,    77,    77,    77,    78,    78,    79,    79,    79,
      79,    80,    80,    80,    80,    81,    81,    81,    81,    82,
      82,    82,    83,    83,    83,    84,    84,    84,    84,    84,
      85,    85,    85,    86,    86,    87,    87,    88,    88,    89,
      89,    90,    90,    91,    91,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    93,    93,    94,    94,
      95,    95,    96,    96,    97,    97,    97,    97,    97,    98,
      98,    98,    98,    98,    98,    98,    98,    99,    99,   100,
     100,   100,   101,   101,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   103,   103,   103,   104,   104,
     104,   104,   105,   106,   106,   107,   107,   108,   108,   108,
     108,   108,   108,   109,   109,   110,   110,   111,   111,   112,
     112,   113,   113,   114,   114,   114,   115,   115,   115,   115,
     115,   115,   116,   116,   116,   116,   116,   117,   117,   118,
     118,   119,   119,   120,   120
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     3,     1,
       4,     3,     4,     2,     2,     1,     3,     1,     2,     2,
       2,     1,     1,     1,     1,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     3,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       3,     4,     4,     3,     4,     4,     3,     1,     3,     2,
       2,     1,     1,     3,     3,     2,     3,     3,     4,     3,
       4,     2,     3,     3,     4,     1,     3,     4,     1,     2,
       3,     4,     2,     1,     2,     3,     2,     1,     1,     1,
       1,     1,     1,     3,     4,     2,     3,     1,     2,     1,
       1,     1,     2,     5,     7,     5,     5,     7,     6,     7,
       6,     7,     3,     2,     2,     2,     3,     1,     2,     1,
       1,     4,     3,     1,     2
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
  case 2:
#line 60 "compiler.y"
                         {
		root = create_tree("Program",1,(yyvsp[0].gt));
	}
#line 1665 "y.tab.c"
    break;

  case 3:
#line 67 "compiler.y"
                   {
		(yyval.gt) = create_tree("primary_expression",1,(yyvsp[0].gt));
	}
#line 1673 "y.tab.c"
    break;

  case 4:
#line 71 "compiler.y"
             {
		(yyval.gt) = create_tree("primary_expression",1,(yyvsp[0].gt));
		// $$->type = "bool";
		// $$->int_value = $1->int_value;
	}
#line 1683 "y.tab.c"
    break;

  case 5:
#line 77 "compiler.y"
              {
		(yyval.gt) = create_tree("primary_expression",1,(yyvsp[0].gt));
		// $$->type = "bool";
		// $$->int_value = $1->int_value;
	}
#line 1693 "y.tab.c"
    break;

  case 6:
#line 82 "compiler.y"
                       {
		//printf("%d",$1->int_value);
		(yyval.gt) = create_tree("primary_expression",1,(yyvsp[0].gt));
		// $$->type = "int";
		// $$->int_value = $1->int_value;

	}
#line 1705 "y.tab.c"
    break;

  case 7:
#line 89 "compiler.y"
                          {
		(yyval.gt) = create_tree("primary_expression",1,(yyvsp[0].gt));
		// $$->type = "double";
		// $$->double_value = $1->double_value;
	}
#line 1715 "y.tab.c"
    break;

  case 8:
#line 94 "compiler.y"
                            {
		(yyval.gt) = create_tree("primary_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1723 "y.tab.c"
    break;

  case 9:
#line 101 "compiler.y"
                          {
		(yyval.gt) = (yyvsp[0].gt);
	}
#line 1731 "y.tab.c"
    break;

  case 10:
#line 104 "compiler.y"
                                                     {
		(yyval.gt) = create_tree("postfix_expression",4,(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
		//数组调用
	}
#line 1740 "y.tab.c"
    break;

  case 11:
#line 108 "compiler.y"
                                          {
		(yyval.gt) = create_tree("postfix_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
		//函数调用
	}
#line 1749 "y.tab.c"
    break;

  case 12:
#line 112 "compiler.y"
                                                                   {
		(yyval.gt) = create_tree("postfix_expression",4,(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
		//函数调用
	}
#line 1758 "y.tab.c"
    break;

  case 13:
#line 116 "compiler.y"
                                         {
		//++
		(yyval.gt) = create_tree("postfix_expression",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1767 "y.tab.c"
    break;

  case 14:
#line 120 "compiler.y"
                                         {
		//--
		(yyval.gt) = create_tree("postfix_expression",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1776 "y.tab.c"
    break;

  case 15:
#line 127 "compiler.y"
                             {
		(yyval.gt) = (yyvsp[0].gt);
	}
#line 1784 "y.tab.c"
    break;

  case 16:
#line 130 "compiler.y"
                                                                   {
		(yyval.gt) = create_tree("argument_expression_list",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1792 "y.tab.c"
    break;

  case 17:
#line 137 "compiler.y"
                          {
		//printf("postfix");
		(yyval.gt) = (yyvsp[0].gt);
	}
#line 1801 "y.tab.c"
    break;

  case 18:
#line 141 "compiler.y"
                                       {
		//++
		(yyval.gt) = create_tree("unary_expression",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1810 "y.tab.c"
    break;

  case 19:
#line 145 "compiler.y"
                                       {
		//--
		(yyval.gt) = create_tree("unary_expression",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1819 "y.tab.c"
    break;

  case 20:
#line 149 "compiler.y"
                                               {
		(yyval.gt) = create_tree("unary_expression",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1827 "y.tab.c"
    break;

  case 21:
#line 156 "compiler.y"
            {
		(yyval.gt) = create_tree("unary_operator",1,(yyvsp[0].gt));
	}
#line 1835 "y.tab.c"
    break;

  case 22:
#line 159 "compiler.y"
              {
		(yyval.gt) = create_tree("unary_operator",1,(yyvsp[0].gt));
	}
#line 1843 "y.tab.c"
    break;

  case 23:
#line 162 "compiler.y"
              {
		(yyval.gt) = create_tree("unary_operator",1,(yyvsp[0].gt));
	}
#line 1851 "y.tab.c"
    break;

  case 24:
#line 165 "compiler.y"
              {
		(yyval.gt) = create_tree("unary_operator",1,(yyvsp[0].gt));
	}
#line 1859 "y.tab.c"
    break;

  case 25:
#line 172 "compiler.y"
                         {
		(yyval.gt) = (yyvsp[0].gt);
	}
#line 1867 "y.tab.c"
    break;

  case 26:
#line 175 "compiler.y"
                                                         {
		(yyval.gt) = create_tree("multiplicative_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1875 "y.tab.c"
    break;

  case 27:
#line 178 "compiler.y"
                                                         {
		(yyval.gt) = create_tree("multiplicative_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1883 "y.tab.c"
    break;

  case 28:
#line 181 "compiler.y"
                                                         {
		(yyval.gt) = create_tree("multiplicative_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1891 "y.tab.c"
    break;

  case 29:
#line 188 "compiler.y"
                                   {
		(yyval.gt) = (yyvsp[0].gt);
	}
#line 1899 "y.tab.c"
    break;

  case 30:
#line 191 "compiler.y"
                                                            {
		(yyval.gt) = create_tree("additive_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1907 "y.tab.c"
    break;

  case 31:
#line 194 "compiler.y"
                                                            {
		(yyval.gt) = create_tree("additive_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1915 "y.tab.c"
    break;

  case 32:
#line 201 "compiler.y"
                            {
		(yyval.gt) = (yyvsp[0].gt);
	}
#line 1923 "y.tab.c"
    break;

  case 33:
#line 204 "compiler.y"
                                                       {
		//<<
		(yyval.gt) = create_tree("shift_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1932 "y.tab.c"
    break;

  case 34:
#line 208 "compiler.y"
                                                        {
		//<<
		(yyval.gt) = create_tree("shift_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1941 "y.tab.c"
    break;

  case 35:
#line 216 "compiler.y"
                         {
		(yyval.gt) = (yyvsp[0].gt);
	}
#line 1949 "y.tab.c"
    break;

  case 36:
#line 219 "compiler.y"
                                                     {
		(yyval.gt) = create_tree("relational_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1957 "y.tab.c"
    break;

  case 37:
#line 222 "compiler.y"
                                                     {
		(yyval.gt) = create_tree("relational_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1965 "y.tab.c"
    break;

  case 38:
#line 225 "compiler.y"
                                                       {
		// <=
		(yyval.gt) = create_tree("relational_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1974 "y.tab.c"
    break;

  case 39:
#line 229 "compiler.y"
                                                       {
		// >=
		(yyval.gt) = create_tree("relational_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1983 "y.tab.c"
    break;

  case 40:
#line 237 "compiler.y"
                              {
		(yyval.gt) = (yyvsp[0].gt);
	}
#line 1991 "y.tab.c"
    break;

  case 41:
#line 240 "compiler.y"
                                                          {
		// ==
		(yyval.gt) = create_tree("equality_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2000 "y.tab.c"
    break;

  case 42:
#line 244 "compiler.y"
                                                          {
		// !=
		(yyval.gt) = create_tree("equality_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2009 "y.tab.c"
    break;

  case 43:
#line 251 "compiler.y"
                            {
		(yyval.gt) = (yyvsp[0].gt);
	}
#line 2017 "y.tab.c"
    break;

  case 44:
#line 254 "compiler.y"
                                                 {
		(yyval.gt) = create_tree("and_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2025 "y.tab.c"
    break;

  case 45:
#line 261 "compiler.y"
                       {
		(yyval.gt) = (yyvsp[0].gt);
	}
#line 2033 "y.tab.c"
    break;

  case 46:
#line 264 "compiler.y"
                                                     {
		(yyval.gt) = create_tree("exclusive_or_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2041 "y.tab.c"
    break;

  case 47:
#line 271 "compiler.y"
                                {
		(yyval.gt) = (yyvsp[0].gt);
	}
#line 2049 "y.tab.c"
    break;

  case 48:
#line 274 "compiler.y"
                                                              {
		(yyval.gt) = create_tree("inclusive_or_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2057 "y.tab.c"
    break;

  case 49:
#line 281 "compiler.y"
                                {
		(yyval.gt) = (yyvsp[0].gt);
	}
#line 2065 "y.tab.c"
    break;

  case 50:
#line 284 "compiler.y"
                                                                {
		//&&
		(yyval.gt) = create_tree("logical_and_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2074 "y.tab.c"
    break;

  case 51:
#line 292 "compiler.y"
                               {
		(yyval.gt) = (yyvsp[0].gt);
	}
#line 2082 "y.tab.c"
    break;

  case 52:
#line 295 "compiler.y"
                                                             {
		//||
		(yyval.gt) = create_tree("logical_or_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2091 "y.tab.c"
    break;

  case 53:
#line 303 "compiler.y"
                              {
		//条件表达式
		(yyval.gt) = (yyvsp[0].gt);
	}
#line 2100 "y.tab.c"
    break;

  case 54:
#line 307 "compiler.y"
                                                                     {
		(yyval.gt) = create_tree("assignment_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2108 "y.tab.c"
    break;

  case 55:
#line 314 "compiler.y"
            {
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[0].gt));
	}
#line 2116 "y.tab.c"
    break;

  case 56:
#line 317 "compiler.y"
                     {
		//*=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[0].gt));
	}
#line 2125 "y.tab.c"
    break;

  case 57:
#line 321 "compiler.y"
                     {
		// /=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[0].gt));
	}
#line 2134 "y.tab.c"
    break;

  case 58:
#line 325 "compiler.y"
                     {
		// %=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[0].gt));
	}
#line 2143 "y.tab.c"
    break;

  case 59:
#line 329 "compiler.y"
                     {
		// +=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[0].gt));
	}
#line 2152 "y.tab.c"
    break;

  case 60:
#line 333 "compiler.y"
                     {
		// -=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[0].gt));
	}
#line 2161 "y.tab.c"
    break;

  case 61:
#line 337 "compiler.y"
                      {
		// <<=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[0].gt));
	}
#line 2170 "y.tab.c"
    break;

  case 62:
#line 341 "compiler.y"
                       {
		// >>=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[0].gt));
	}
#line 2179 "y.tab.c"
    break;

  case 63:
#line 345 "compiler.y"
                     {
		// &=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[0].gt));
	}
#line 2188 "y.tab.c"
    break;

  case 64:
#line 349 "compiler.y"
                     {
		// ^=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[0].gt));
	}
#line 2197 "y.tab.c"
    break;

  case 65:
#line 353 "compiler.y"
                    {
		// |=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[0].gt));
	}
#line 2206 "y.tab.c"
    break;

  case 66:
#line 361 "compiler.y"
                              {
		//赋值表达式
		(yyval.gt) = (yyvsp[0].gt);
	}
#line 2215 "y.tab.c"
    break;

  case 67:
#line 365 "compiler.y"
                                               {
		//逗号表达式
		(yyval.gt) = create_tree("expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2224 "y.tab.c"
    break;

  case 68:
#line 373 "compiler.y"
                           {
		(yyval.gt) = create_tree("declaration",2,(yyvsp[-1].gt),(yyvsp[0].gt)); //?
	}
#line 2232 "y.tab.c"
    break;

  case 69:
#line 376 "compiler.y"
                                                  {
		(yyval.gt) = create_tree("declaration",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2240 "y.tab.c"
    break;

  case 70:
#line 383 "compiler.y"
                        {
		(yyval.gt) = (yyvsp[0].gt);
	}
#line 2248 "y.tab.c"
    break;

  case 71:
#line 386 "compiler.y"
                                                   {
		(yyval.gt) = create_tree("init_declarator_list",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2256 "y.tab.c"
    break;

  case 72:
#line 392 "compiler.y"
                   {
		(yyval.gt) = (yyvsp[0].gt);
	}
#line 2264 "y.tab.c"
    break;

  case 73:
#line 395 "compiler.y"
                                     {
		(yyval.gt) = create_tree("init_declarator",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2272 "y.tab.c"
    break;

  case 74:
#line 403 "compiler.y"
             {
		(yyval.gt) = create_tree("type_specifier",1,(yyvsp[0].gt));
	}
#line 2280 "y.tab.c"
    break;

  case 75:
#line 406 "compiler.y"
               {
		(yyval.gt) = create_tree("type_specifier",1,(yyvsp[0].gt));
	}
#line 2288 "y.tab.c"
    break;

  case 76:
#line 409 "compiler.y"
              {
		(yyval.gt) = create_tree("type_specifier",1,(yyvsp[0].gt));
	}
#line 2296 "y.tab.c"
    break;

  case 77:
#line 412 "compiler.y"
                 {
		(yyval.gt) = create_tree("type_specifier",1,(yyvsp[0].gt));
	}
#line 2304 "y.tab.c"
    break;

  case 78:
#line 415 "compiler.y"
               {
		(yyval.gt) = create_tree("type_specifier",1,(yyvsp[0].gt));
	}
#line 2312 "y.tab.c"
    break;

  case 79:
#line 423 "compiler.y"
                   {
		//变量
		(yyval.gt) = create_tree("declarator",1,(yyvsp[0].gt));
	}
#line 2321 "y.tab.c"
    break;

  case 80:
#line 427 "compiler.y"
                             {
		//.....
		(yyval.gt) = create_tree("declarator",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2330 "y.tab.c"
    break;

  case 81:
#line 431 "compiler.y"
                                                   {
		//数组
		//printf("assignment_expression");
		(yyval.gt) = create_tree("declarator",4,(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2340 "y.tab.c"
    break;

  case 82:
#line 436 "compiler.y"
                                 {
		//....
		(yyval.gt) = create_tree("declarator",4,(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2349 "y.tab.c"
    break;

  case 83:
#line 440 "compiler.y"
                             {
		//数组
		(yyval.gt) = create_tree("declarator",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2358 "y.tab.c"
    break;

  case 84:
#line 444 "compiler.y"
                                            {
		//函数
		(yyval.gt) = create_tree("declarator",4,(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2367 "y.tab.c"
    break;

  case 85:
#line 448 "compiler.y"
                                             {
		//函数
		(yyval.gt) = create_tree("declarator",4,(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2376 "y.tab.c"
    break;

  case 86:
#line 452 "compiler.y"
                             {
		//函数
		(yyval.gt) = create_tree("declarator",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2385 "y.tab.c"
    break;

  case 87:
#line 461 "compiler.y"
                              {
		(yyval.gt) = create_tree("parameter_list",1,(yyvsp[0].gt));
	}
#line 2393 "y.tab.c"
    break;

  case 88:
#line 464 "compiler.y"
                                                   {
		(yyval.gt) = create_tree("parameter_list",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2401 "y.tab.c"
    break;

  case 89:
#line 470 "compiler.y"
                                  {
		(yyval.gt) = create_tree("parameter_declaration",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2409 "y.tab.c"
    break;

  case 90:
#line 473 "compiler.y"
                                             {
		(yyval.gt) = create_tree("parameter_declaration",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2417 "y.tab.c"
    break;

  case 91:
#line 476 "compiler.y"
                         {
		(yyval.gt) = create_tree("parameter_declaration",1,(yyvsp[0].gt));
	}
#line 2425 "y.tab.c"
    break;

  case 92:
#line 482 "compiler.y"
                   {
		(yyval.gt) = create_tree("identifier_list",1,(yyvsp[0].gt));
	}
#line 2433 "y.tab.c"
    break;

  case 93:
#line 485 "compiler.y"
                                         {
		(yyval.gt) = create_tree("identifier_list",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2441 "y.tab.c"
    break;

  case 94:
#line 491 "compiler.y"
                                    {
		(yyval.gt) = create_tree("abstract_declarator",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2449 "y.tab.c"
    break;

  case 95:
#line 494 "compiler.y"
                  {
		(yyval.gt) = create_tree("abstract_declarator",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2457 "y.tab.c"
    break;

  case 96:
#line 497 "compiler.y"
                                        {
		(yyval.gt) = create_tree("abstract_declarator",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2465 "y.tab.c"
    break;

  case 97:
#line 500 "compiler.y"
                                      {
		(yyval.gt) = create_tree("abstract_declarator",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2473 "y.tab.c"
    break;

  case 98:
#line 503 "compiler.y"
                                                            {
		(yyval.gt) = create_tree("abstract_declarator",4,(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2481 "y.tab.c"
    break;

  case 99:
#line 506 "compiler.y"
                      {
		(yyval.gt) = create_tree("abstract_declarator",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2489 "y.tab.c"
    break;

  case 100:
#line 509 "compiler.y"
                                          {
		(yyval.gt) = create_tree("abstract_declarator",4,(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2497 "y.tab.c"
    break;

  case 101:
#line 512 "compiler.y"
                  {
		(yyval.gt) = create_tree("abstract_declarator",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2505 "y.tab.c"
    break;

  case 102:
#line 515 "compiler.y"
                                 {
		(yyval.gt) = create_tree("abstract_declarator",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2513 "y.tab.c"
    break;

  case 103:
#line 518 "compiler.y"
                                      {
		(yyval.gt) = create_tree("abstract_declarator",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2521 "y.tab.c"
    break;

  case 104:
#line 521 "compiler.y"
                                                     {
		(yyval.gt) = create_tree("abstract_declarator",4,(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2529 "y.tab.c"
    break;

  case 105:
#line 528 "compiler.y"
                              {
		(yyval.gt) = create_tree("initializer",1,(yyvsp[0].gt));
	}
#line 2537 "y.tab.c"
    break;

  case 106:
#line 531 "compiler.y"
                                   {
		//列表初始化 {1,1,1}
		(yyval.gt) = create_tree("initializer",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2546 "y.tab.c"
    break;

  case 107:
#line 535 "compiler.y"
                                       {
		//列表初始化 {1,1,1,}
		(yyval.gt) = create_tree("initializer",4,(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2555 "y.tab.c"
    break;

  case 108:
#line 542 "compiler.y"
                    {
		(yyval.gt) = create_tree("initializer_list",1,(yyvsp[0].gt));
	}
#line 2563 "y.tab.c"
    break;

  case 109:
#line 545 "compiler.y"
                                  {
		(yyval.gt) = create_tree("initializer_list",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2571 "y.tab.c"
    break;

  case 110:
#line 548 "compiler.y"
                                           {
		(yyval.gt) = create_tree("initializer_list",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2579 "y.tab.c"
    break;

  case 111:
#line 551 "compiler.y"
                                                       {
		(yyval.gt) = create_tree("initializer_list",3,(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt));
	}
#line 2587 "y.tab.c"
    break;

  case 112:
#line 557 "compiler.y"
                            {
		(yyval.gt) = create_tree("designation",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2595 "y.tab.c"
    break;

  case 113:
#line 563 "compiler.y"
                   {
		(yyval.gt) = create_tree("designator_list",1,(yyvsp[0].gt));
	}
#line 2603 "y.tab.c"
    break;

  case 114:
#line 566 "compiler.y"
                                     {
		(yyval.gt) = create_tree("designator_list",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2611 "y.tab.c"
    break;

  case 115:
#line 572 "compiler.y"
                                      {
		(yyval.gt) = create_tree("designator",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2619 "y.tab.c"
    break;

  case 116:
#line 575 "compiler.y"
                         {
		(yyval.gt) = create_tree("designator",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2627 "y.tab.c"
    break;

  case 117:
#line 582 "compiler.y"
                          {
		(yyval.gt) = create_tree("statement",1,(yyvsp[0].gt));
	}
#line 2635 "y.tab.c"
    break;

  case 118:
#line 585 "compiler.y"
                             {
		(yyval.gt) = create_tree("statement",1,(yyvsp[0].gt));
	}
#line 2643 "y.tab.c"
    break;

  case 119:
#line 588 "compiler.y"
                              {
		(yyval.gt) = create_tree("statement",1,(yyvsp[0].gt));
	}
#line 2651 "y.tab.c"
    break;

  case 120:
#line 591 "compiler.y"
                              {
		(yyval.gt) = create_tree("statement",1,(yyvsp[0].gt));
	}
#line 2659 "y.tab.c"
    break;

  case 121:
#line 594 "compiler.y"
                              {
		(yyval.gt) = create_tree("statement",1,(yyvsp[0].gt));
	}
#line 2667 "y.tab.c"
    break;

  case 122:
#line 597 "compiler.y"
                         {
		(yyval.gt) = create_tree("statement",1,(yyvsp[0].gt));
	}
#line 2675 "y.tab.c"
    break;

  case 123:
#line 604 "compiler.y"
                                 {
		(yyval.gt) = create_tree("labeled_statement",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2683 "y.tab.c"
    break;

  case 124:
#line 607 "compiler.y"
                                                   {
		(yyval.gt) = create_tree("labeled_statement",4,(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2691 "y.tab.c"
    break;

  case 125:
#line 614 "compiler.y"
                {
		(yyval.gt) = create_tree("compound_statement",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2699 "y.tab.c"
    break;

  case 126:
#line 617 "compiler.y"
                                  {
		(yyval.gt) = create_tree("compound_statement",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2707 "y.tab.c"
    break;

  case 127:
#line 623 "compiler.y"
                   {
		(yyval.gt) = create_tree("block_item_list",1,(yyvsp[0].gt));
	}
#line 2715 "y.tab.c"
    break;

  case 128:
#line 626 "compiler.y"
                                     {
		(yyval.gt) = create_tree("block_item_list",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2723 "y.tab.c"
    break;

  case 129:
#line 632 "compiler.y"
                    {
		(yyval.gt) = (yyvsp[0].gt);
	}
#line 2731 "y.tab.c"
    break;

  case 130:
#line 635 "compiler.y"
                    {
		(yyval.gt) = (yyvsp[0].gt);
	}
#line 2739 "y.tab.c"
    break;

  case 131:
#line 641 "compiler.y"
            {
		(yyval.gt) = create_tree("expression_statement",1,(yyvsp[0].gt));
	}
#line 2747 "y.tab.c"
    break;

  case 132:
#line 644 "compiler.y"
                         {
		(yyval.gt) = create_tree("expression_statement",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2755 "y.tab.c"
    break;

  case 133:
#line 651 "compiler.y"
                                                              {
		(yyval.gt) = create_tree("selection_statement",5,(yyvsp[-4].gt),(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2763 "y.tab.c"
    break;

  case 134:
#line 654 "compiler.y"
                                                     {
		(yyval.gt) = create_tree("selection_statement",7,(yyvsp[-6].gt),(yyvsp[-5].gt),(yyvsp[-4].gt),(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2771 "y.tab.c"
    break;

  case 135:
#line 657 "compiler.y"
                                          {
		(yyval.gt) = create_tree("selection_statement",5,(yyvsp[-4].gt),(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2779 "y.tab.c"
    break;

  case 136:
#line 664 "compiler.y"
                                           {
		(yyval.gt) = create_tree("iteration_statement",5,(yyvsp[-4].gt),(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2787 "y.tab.c"
    break;

  case 137:
#line 667 "compiler.y"
                                                    {
		(yyval.gt) = create_tree("iteration_statement",7,(yyvsp[-6].gt),(yyvsp[-5].gt),(yyvsp[-4].gt),(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2795 "y.tab.c"
    break;

  case 138:
#line 670 "compiler.y"
                                                                          {
		(yyval.gt) = create_tree("iteration_statement",6,(yyvsp[-5].gt),(yyvsp[-4].gt),(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2803 "y.tab.c"
    break;

  case 139:
#line 673 "compiler.y"
                                                                                     {
		(yyval.gt) = create_tree("iteration_statement",7,(yyvsp[-6].gt),(yyvsp[-5].gt),(yyvsp[-4].gt),(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2811 "y.tab.c"
    break;

  case 140:
#line 676 "compiler.y"
                                                                 {
		(yyval.gt) = create_tree("iteration_statement",6,(yyvsp[-5].gt),(yyvsp[-4].gt),(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2819 "y.tab.c"
    break;

  case 141:
#line 679 "compiler.y"
                                                                            {
		(yyval.gt) = create_tree("iteration_statement",7,(yyvsp[-6].gt),(yyvsp[-5].gt),(yyvsp[-4].gt),(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2827 "y.tab.c"
    break;

  case 142:
#line 686 "compiler.y"
                            {
		(yyval.gt) = create_tree("jump_statement",2,(yyvsp[-2].gt),(yyvsp[-1].gt));
	}
#line 2835 "y.tab.c"
    break;

  case 143:
#line 689 "compiler.y"
                       {
		(yyval.gt) = create_tree("jump_statement",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2843 "y.tab.c"
    break;

  case 144:
#line 692 "compiler.y"
                    {
		(yyval.gt) = create_tree("jump_statement",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2851 "y.tab.c"
    break;

  case 145:
#line 695 "compiler.y"
                     {
		(yyval.gt) = create_tree("jump_statement",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2859 "y.tab.c"
    break;

  case 146:
#line 698 "compiler.y"
                                {
		(yyval.gt) = create_tree("jump_statement",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2867 "y.tab.c"
    break;

  case 147:
#line 704 "compiler.y"
                             {
		(yyval.gt) = create_tree("translation_unit",1,(yyvsp[0].gt));
	}
#line 2875 "y.tab.c"
    break;

  case 148:
#line 707 "compiler.y"
                                                {
		(yyval.gt) = create_tree("translation_unit",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2883 "y.tab.c"
    break;

  case 149:
#line 713 "compiler.y"
                            {
		(yyval.gt) = create_tree("external_declaration",1,(yyvsp[0].gt));
		//函数定义
		//printf("function_definition");
	}
#line 2893 "y.tab.c"
    break;

  case 150:
#line 718 "compiler.y"
                      {
		(yyval.gt) = create_tree("external_declaration",1,(yyvsp[0].gt));
		//变量声明
		//printf("declaration");
	}
#line 2903 "y.tab.c"
    break;

  case 151:
#line 726 "compiler.y"
                                                                      {
		(yyval.gt) = create_tree("function_definition",4,(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2911 "y.tab.c"
    break;

  case 152:
#line 729 "compiler.y"
                                                       {
		(yyval.gt) = create_tree("function_definition",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2919 "y.tab.c"
    break;

  case 153:
#line 735 "compiler.y"
                    {
		(yyval.gt) = create_tree("declaration_list",1,(yyvsp[0].gt));
	}
#line 2927 "y.tab.c"
    break;

  case 154:
#line 738 "compiler.y"
                                       {
		(yyval.gt) = create_tree("declaration_list",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2935 "y.tab.c"
    break;


#line 2939 "y.tab.c"

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
#line 743 "compiler.y"



void yyerror(char const *s)
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}


int main(int argc,char* argv[]) {

	yyin = fopen(argv[1],"r");

	//freopen("output/output.txt","w", stdout);
	yyparse();
	printf("\n");
	eval(root,0);	//输出语法分析树
	freeGramTree(root);
	fclose(yyin);
	return 0;
}
