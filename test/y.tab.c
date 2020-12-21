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
#line 1 "compiler2.y"

#include <cstdlib>
#include <cstdio>
#include <string>
#include "tree.h"
#include "block.h"
#include "Praser.h"
#include "../source/TableNode.h"
// #include "../source/StaticFlags.h"
using namespace std;

extern char *yytext;
extern int column;
extern FILE * yyin;
extern FILE * yyout;
gramTree *root;
extern int yylineno;

auto* globalPtr = new TableNode();
bool waitFlag = false;

int yylex(void);
void yyerror(const char*);

#line 95 "y.tab.c"

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
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
    CONSTANT_INT = 259,
    CONSTANT_DOUBLE = 260,
    INC_OP = 261,
    DEC_OP = 262,
    LEFT_OP = 263,
    RIGHT_OP = 264,
    LE_OP = 265,
    GE_OP = 266,
    EQ_OP = 267,
    NE_OP = 268,
    AND_OP = 269,
    OR_OP = 270,
    MUL_ASSIGN = 271,
    DIV_ASSIGN = 272,
    MOD_ASSIGN = 273,
    ADD_ASSIGN = 274,
    SUB_ASSIGN = 275,
    LEFT_ASSIGN = 276,
    RIGHT_ASSIGN = 277,
    AND_ASSIGN = 278,
    XOR_ASSIGN = 279,
    OR_ASSIGN = 280,
    CHAR = 281,
    INT = 282,
    DOUBLE = 283,
    VOID = 284,
    BOOL = 285,
    CASE = 286,
    IF = 287,
    ELSE = 288,
    SWITCH = 289,
    WHILE = 290,
    DO = 291,
    FOR = 292,
    GOTO = 293,
    CONTINUE = 294,
    BREAK = 295,
    RETURN = 296,
    TRUE = 297,
    FALSE = 298,
    LOWER_THAN_ELSE = 299
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define CONSTANT_INT 259
#define CONSTANT_DOUBLE 260
#define INC_OP 261
#define DEC_OP 262
#define LEFT_OP 263
#define RIGHT_OP 264
#define LE_OP 265
#define GE_OP 266
#define EQ_OP 267
#define NE_OP 268
#define AND_OP 269
#define OR_OP 270
#define MUL_ASSIGN 271
#define DIV_ASSIGN 272
#define MOD_ASSIGN 273
#define ADD_ASSIGN 274
#define SUB_ASSIGN 275
#define LEFT_ASSIGN 276
#define RIGHT_ASSIGN 277
#define AND_ASSIGN 278
#define XOR_ASSIGN 279
#define OR_ASSIGN 280
#define CHAR 281
#define INT 282
#define DOUBLE 283
#define VOID 284
#define BOOL 285
#define CASE 286
#define IF 287
#define ELSE 288
#define SWITCH 289
#define WHILE 290
#define DO 291
#define FOR 292
#define GOTO 293
#define CONTINUE 294
#define BREAK 295
#define RETURN 296
#define TRUE 297
#define FALSE 298
#define LOWER_THAN_ELSE 299

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 26 "compiler2.y"

	struct gramTree* gt;

#line 239 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



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
#define YYLAST   657

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  68
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  157
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  273

#define YYUNDEFTOK  2
#define YYMAXUTOK   299


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
       2,     2,     2,    52,     2,     2,     2,    58,    51,     2,
      65,    66,    56,    55,    45,    54,    50,    57,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    46,    44,
      59,    47,    60,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    48,     2,    49,    61,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    63,    62,    64,    53,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    67
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    66,    66,    73,    77,    83,    88,    95,   100,   107,
     110,   114,   118,   122,   126,   133,   136,   143,   147,   151,
     155,   162,   165,   168,   171,   178,   181,   184,   187,   194,
     197,   200,   207,   210,   214,   222,   225,   228,   231,   235,
     243,   246,   250,   257,   260,   267,   270,   277,   280,   287,
     290,   298,   301,   309,   313,   320,   323,   327,   331,   335,
     339,   343,   347,   351,   355,   359,   367,   371,   379,   382,
     389,   392,   398,   401,   409,   412,   415,   418,   421,   429,
     437,   441,   448,   454,   460,   466,   472,   483,   486,   492,
     495,   498,   504,   507,   513,   516,   519,   522,   525,   528,
     531,   534,   537,   540,   543,   550,   553,   557,   564,   567,
     570,   573,   579,   585,   588,   594,   597,   604,   607,   610,
     613,   616,   619,   626,   629,   636,   639,   645,   648,   654,
     657,   663,   666,   673,   676,   679,   686,   689,   692,   695,
     698,   701,   708,   711,   714,   717,   720,   726,   729,   735,
     740,   748,   751,   757,   760,   765,   772,   777
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT_INT",
  "CONSTANT_DOUBLE", "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP",
  "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "CHAR", "INT", "DOUBLE", "VOID",
  "BOOL", "CASE", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "TRUE", "FALSE", "';'", "','", "':'",
  "'='", "'['", "']'", "'.'", "'&'", "'!'", "'~'", "'-'", "'+'", "'*'",
  "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'{'", "'}'", "'('", "')'",
  "LOWER_THAN_ELSE", "$accept", "Program", "primary_expression",
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
  "declaration_list", "child_block", "wait_block", "father_block", YY_NULLPTR
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
     295,   296,   297,   298,    59,    44,    58,    61,    91,    93,
      46,    38,    33,   126,    45,    43,    42,    47,    37,    60,
      62,    94,   124,   123,   125,    40,    41,   299
};
# endif

#define YYPACT_NINF (-189)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     215,  -189,  -189,  -189,  -189,  -189,    23,  -189,    17,   215,
    -189,  -189,  -189,  -189,  -189,    19,   101,  -189,   208,  -189,
      87,  -189,    19,   548,   469,   262,     9,  -189,    17,  -189,
      95,  -189,  -189,    94,  -189,  -189,  -189,   592,   592,  -189,
    -189,  -189,  -189,  -189,  -189,  -189,   592,  -189,    45,   207,
     592,   135,   132,   200,    47,   188,   -34,   -14,    -3,    71,
      75,  -189,  -189,  -189,    13,    80,   103,   592,   113,   115,
     124,   346,   133,   236,   159,   166,   564,  -189,  -189,  -189,
     232,  -189,  -189,  -189,  -189,   304,  -189,  -189,  -189,  -189,
    -189,  -189,  -189,   -32,   215,  -189,  -189,  -189,  -189,   441,
     -16,  -189,  -189,   592,    34,  -189,  -189,  -189,  -189,  -189,
    -189,  -189,  -189,  -189,  -189,  -189,   592,  -189,   592,   592,
     592,   592,   592,   592,   592,   592,   592,   592,   592,   592,
     592,   592,   592,   592,   592,   592,  -189,  -189,   346,  -189,
      -4,   592,   592,   592,   218,   388,   206,  -189,  -189,  -189,
     234,  -189,   592,  -189,  -189,   267,  -189,    43,   -13,  -189,
     592,   269,  -189,   -15,   548,    90,  -189,  -189,    99,  -189,
     -12,  -189,  -189,  -189,  -189,  -189,   135,   135,   132,   132,
     200,   200,   200,   200,    47,    47,   188,   -34,   -14,    -3,
      71,  -189,   346,   -10,    15,    53,   219,   578,   578,  -189,
    -189,  -189,  -189,   494,   192,   -17,    48,   215,  -189,    -5,
    -189,   416,  -189,  -189,  -189,  -189,  -189,   592,  -189,  -189,
     346,   346,   346,   592,    62,   209,  -189,   237,   238,  -189,
      66,   140,   523,    -2,  -189,  -189,  -189,  -189,   548,  -189,
    -189,   252,  -189,  -189,    67,   346,    73,   346,    85,  -189,
    -189,  -189,  -189,  -189,   246,   263,  -189,    91,  -189,  -189,
     346,   274,  -189,   346,  -189,   346,  -189,  -189,  -189,  -189,
    -189,  -189,  -189
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    75,    76,    77,    74,    78,     0,   150,     0,     2,
     147,   149,     1,    79,    68,     0,     0,    70,    72,   148,
       0,    69,     0,     0,     0,     0,   156,   153,     0,   152,
       0,    80,    71,    72,     3,     6,     7,     0,     0,     4,
       5,    24,    23,    22,    21,   155,     0,     9,    17,    25,
       0,    29,    32,    35,    40,    43,    45,    47,    49,    51,
      53,   105,    73,    83,     0,     0,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   131,   125,    66,
       0,   129,   130,   117,   118,     0,   127,   119,   120,   121,
     122,    92,    86,     0,     0,   154,   151,    18,    19,     0,
       0,    13,    14,     0,     0,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    55,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    82,    81,     0,    25,
       0,     0,     0,     0,     0,     0,     0,   143,   144,   145,
       0,   132,     0,   126,   128,     0,    85,    91,     0,    87,
       0,     0,   108,     0,     0,     0,   113,     8,     0,    11,
       0,    15,    54,    26,    27,    28,    31,    30,    33,    34,
      38,    39,    36,    37,    41,    42,    44,    46,    48,    50,
      52,   123,     0,     0,     0,     0,     0,     0,     0,   142,
     146,    67,    93,     0,     0,    89,    90,     0,    84,     0,
     116,     0,   157,   109,   112,   114,    10,     0,    12,   124,
       0,     0,     0,     0,     0,     0,    95,     0,     0,   101,
       0,     0,     0,     0,    88,   115,   157,   110,     0,   106,
      16,   133,   135,   136,     0,     0,     0,     0,     0,    99,
      96,   102,    94,    97,     0,     0,   103,     0,   107,   111,
       0,     0,   140,     0,   138,     0,   100,    98,   104,   134,
     137,   141,   139
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -189,  -189,  -189,  -189,  -189,    42,  -189,   138,   157,   121,
     153,   182,   187,   189,   186,   193,   -63,   -21,  -189,   -40,
     -11,  -189,   299,     0,    -7,  -188,   116,  -189,   120,   -91,
    -189,   118,  -189,   172,   -66,  -189,    25,  -189,   270,  -127,
    -189,  -189,  -189,  -189,   345,  -189,  -189,  -189,  -189,   125
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,    47,    48,   170,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    79,   116,    80,
       7,    16,    17,    28,    20,   158,   159,    93,   206,    62,
     163,   164,   165,   166,    82,    83,    84,    85,    86,    87,
      88,    89,    90,     9,    10,    11,    30,    99,    94,   239
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       8,    18,    61,    65,   140,   144,   100,    27,   162,     8,
     135,   135,    91,   155,    81,    33,   230,   131,   198,    95,
      13,    33,    13,    12,     1,     2,     3,     4,     5,   152,
     211,    24,   207,   217,   156,   152,   150,    34,    35,    36,
      37,    38,   192,    29,   235,   257,    13,   132,    26,   212,
     167,   101,   102,   208,   218,    96,   220,   125,   126,   133,
     152,    14,   136,   168,   256,    34,    35,    36,    37,    38,
     224,   225,   191,   213,    81,    92,    39,    40,    61,    97,
      98,   221,    15,   171,    15,   134,    41,    42,    43,    44,
     135,   203,   117,   103,   157,   172,   232,   209,   152,    46,
     169,   193,   194,   195,    39,    40,   127,   128,   204,   139,
     104,   207,   152,   233,    41,    42,    43,    44,   152,   222,
     237,     1,     2,     3,     4,     5,   219,    46,   245,   137,
     152,   201,   251,   261,   197,    24,   207,   214,   160,   263,
     161,    23,    24,    61,   152,    21,    22,   259,   216,   138,
     205,   265,    26,    31,   241,   242,   243,   268,    25,    26,
     173,   174,   175,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   141,   262,
     142,   264,   228,   244,   246,   248,   121,   122,   232,   143,
      61,   118,   119,   120,   269,    13,   240,   271,   145,   272,
     129,   130,   139,   147,   157,   233,   252,   157,   123,   124,
     148,   255,    34,    35,    36,    37,    38,    61,     1,     2,
       3,     4,     5,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   157,     1,     2,     3,     4,     5,   146,
     203,     1,     2,     3,     4,     5,   180,   181,   182,   183,
     199,    39,    40,   196,   115,    23,    24,   204,   229,   176,
     177,    41,    42,    43,    44,    66,    35,    36,    37,    38,
     202,    25,   210,    26,    46,   247,   151,   152,   200,   152,
     178,   179,   184,   185,   223,   260,   249,   250,     1,     2,
       3,     4,     5,    67,    68,   266,    69,    70,    71,    72,
      73,    74,    75,    76,    39,    40,    77,    66,    35,    36,
      37,    38,   267,   186,    41,    42,    43,    44,   270,   187,
     189,    32,   188,   234,   231,    25,    78,    46,   190,   238,
       1,     2,     3,     4,     5,    67,    68,   215,    69,    70,
      71,    72,    73,    74,    75,    76,    39,    40,    77,    66,
      35,    36,    37,    38,    19,   154,    41,    42,    43,    44,
       0,   258,     0,     0,     0,     0,     0,    25,   153,    46,
       0,     0,     0,     0,     0,     0,     0,    67,    68,     0,
      69,    70,    71,    72,    73,    74,    75,    76,    39,    40,
      77,    34,    35,    36,    37,    38,     0,     0,    41,    42,
      43,    44,     0,     0,     0,     0,     0,     0,     0,    25,
       0,    46,     0,     0,     1,     2,     3,     4,     5,    34,
      35,    36,    37,    38,     0,     0,     0,     0,     0,     0,
      39,    40,    77,     0,     0,     0,     0,     0,     0,     0,
      41,    42,    43,    44,    34,    35,    36,    37,    38,     0,
       0,     0,     0,    46,     0,     0,     0,     0,    39,    40,
       0,     0,     0,     0,   160,     0,   161,     0,    41,    42,
      43,    44,    34,    35,    36,    37,    38,     0,     0,    45,
     236,    46,     0,    39,    40,     0,     0,     0,     0,   160,
       0,   161,     0,    41,    42,    43,    44,    34,    35,    36,
      37,    38,     0,     0,    45,     0,    46,     0,     0,     0,
       0,    39,    40,     0,     0,     0,     0,     0,    63,     0,
       0,    41,    42,    43,    44,    64,    34,    35,    36,    37,
      38,     0,     0,     0,    46,     0,    39,    40,     0,     0,
       0,     0,     0,   226,     0,     0,    41,    42,    43,    44,
     227,    34,    35,    36,    37,    38,     0,     0,     0,    46,
       0,     0,     0,     0,     0,    39,    40,    34,    35,    36,
      37,    38,   253,     0,     0,    41,    42,    43,    44,   254,
       0,    34,    35,    36,    37,    38,     0,     0,    46,     0,
      39,    40,     0,     0,     0,    34,    35,    36,    37,    38,
      41,    42,    43,    44,     0,     0,    39,    40,   149,     0,
       0,    45,     0,    46,     0,     0,    41,    42,    43,    44,
      39,    40,    77,     0,     0,     0,     0,     0,     0,    46,
      41,    42,    43,    44,    39,    40,     0,     0,     0,     0,
       0,     0,     0,    46,    41,    42,    43,    44,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    46
};

static const yytype_int16 yycheck[] =
{
       0,     8,    23,    24,    67,    71,    46,    18,    99,     9,
      15,    15,     3,    45,    25,    22,   204,    51,   145,    30,
       3,    28,     3,     0,    26,    27,    28,    29,    30,    45,
      45,    48,    45,    45,    66,    45,    76,     3,     4,     5,
       6,     7,    46,    18,    49,   233,     3,    61,    65,    64,
      66,     6,     7,    66,    66,    30,    66,    10,    11,    62,
      45,    44,    49,   103,    66,     3,     4,     5,     6,     7,
     197,   198,   138,   164,    85,    66,    42,    43,    99,    37,
      38,    66,    65,   104,    65,    14,    52,    53,    54,    55,
      15,    48,    50,    48,    94,   116,    48,   160,    45,    65,
      66,   141,   142,   143,    42,    43,    59,    60,    65,    67,
      65,    45,    45,    65,    52,    53,    54,    55,    45,    66,
     211,    26,    27,    28,    29,    30,   192,    65,    66,    49,
      45,   152,    66,    66,   145,    48,    45,    47,    48,    66,
      50,    47,    48,   164,    45,    44,    45,   238,    49,    46,
     157,    66,    65,    66,   220,   221,   222,    66,    63,    65,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,    65,   245,
      65,   247,   203,   223,   224,   225,    54,    55,    48,    65,
     211,    56,    57,    58,   260,     3,   217,   263,    65,   265,
      12,    13,   160,    44,   204,    65,    66,   207,     8,     9,
      44,   232,     3,     4,     5,     6,     7,   238,    26,    27,
      28,    29,    30,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,   233,    26,    27,    28,    29,    30,     3,
      48,    26,    27,    28,    29,    30,   125,   126,   127,   128,
      44,    42,    43,    35,    47,    47,    48,    65,    66,   121,
     122,    52,    53,    54,    55,     3,     4,     5,     6,     7,
       3,    63,     3,    65,    65,    66,    44,    45,    44,    45,
     123,   124,   129,   130,    65,    33,    49,    49,    26,    27,
      28,    29,    30,    31,    32,    49,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,     3,     4,     5,
       6,     7,    49,   131,    52,    53,    54,    55,    44,   132,
     134,    22,   133,   207,   204,    63,    64,    65,   135,   211,
      26,    27,    28,    29,    30,    31,    32,   165,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,     3,
       4,     5,     6,     7,     9,    85,    52,    53,    54,    55,
      -1,   236,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,     3,     4,     5,     6,     7,    -1,    -1,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    65,    -1,    -1,    26,    27,    28,    29,    30,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    54,    55,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    -1,    52,    53,
      54,    55,     3,     4,     5,     6,     7,    -1,    -1,    63,
      64,    65,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    -1,    52,    53,    54,    55,     3,     4,     5,
       6,     7,    -1,    -1,    63,    -1,    65,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    49,    -1,
      -1,    52,    53,    54,    55,    56,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    65,    -1,    42,    43,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    52,    53,    54,    55,
      56,     3,     4,     5,     6,     7,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    -1,    -1,    42,    43,     3,     4,     5,
       6,     7,    49,    -1,    -1,    52,    53,    54,    55,    56,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    65,    -1,
      42,    43,    -1,    -1,    -1,     3,     4,     5,     6,     7,
      52,    53,    54,    55,    -1,    -1,    42,    43,    44,    -1,
      -1,    63,    -1,    65,    -1,    -1,    52,    53,    54,    55,
      42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      52,    53,    54,    55,    42,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    26,    27,    28,    29,    30,    69,    88,    91,   111,
     112,   113,     0,     3,    44,    65,    89,    90,    92,   112,
      92,    44,    45,    47,    48,    63,    65,    88,    91,   104,
     114,    66,    90,    92,     3,     4,     5,     6,     7,    42,
      43,    52,    53,    54,    55,    63,    65,    70,    71,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    97,    49,    56,    85,     3,    31,    32,    34,
      35,    36,    37,    38,    39,    40,    41,    44,    64,    85,
      87,    88,   102,   103,   104,   105,   106,   107,   108,   109,
     110,     3,    66,    95,   116,    88,   104,    73,    73,   115,
      87,     6,     7,    48,    65,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    47,    86,    73,    56,    57,
      58,    54,    55,     8,     9,    10,    11,    59,    60,    12,
      13,    51,    61,    62,    14,    15,    49,    49,    46,    73,
      84,    65,    65,    65,   102,    65,     3,    44,    44,    44,
      87,    44,    45,    64,   106,    45,    66,    91,    93,    94,
      48,    50,    97,    98,    99,   100,   101,    66,    87,    66,
      72,    85,    85,    73,    73,    73,    75,    75,    76,    76,
      77,    77,    77,    77,    78,    78,    79,    80,    81,    82,
      83,   102,    46,    87,    87,    87,    35,    88,   107,    44,
      44,    85,     3,    48,    65,    92,    96,    45,    66,    84,
       3,    45,    64,    97,    47,   101,    49,    45,    66,   102,
      66,    66,    66,    65,   107,   107,    49,    56,    85,    66,
      93,    96,    48,    65,    94,    49,    64,    97,    99,   117,
      85,   102,   102,   102,    87,    66,    87,    66,    87,    49,
      49,    66,    66,    49,    56,    85,    66,    93,   117,    97,
      33,    66,   102,    66,   102,    66,    49,    49,    66,   102,
      44,   102,   102
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    68,    69,    70,    70,    70,    70,    70,    70,    71,
      71,    71,    71,    71,    71,    72,    72,    73,    73,    73,
      73,    74,    74,    74,    74,    75,    75,    75,    75,    76,
      76,    76,    77,    77,    77,    78,    78,    78,    78,    78,
      79,    79,    79,    80,    80,    81,    81,    82,    82,    83,
      83,    84,    84,    85,    85,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    87,    87,    88,    88,
      89,    89,    90,    90,    91,    91,    91,    91,    91,    92,
      92,    92,    92,    92,    92,    92,    92,    93,    93,    94,
      94,    94,    95,    95,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    97,    97,    97,    98,    98,
      98,    98,    99,   100,   100,   101,   101,   102,   102,   102,
     102,   102,   102,   103,   103,   104,   104,   105,   105,   106,
     106,   107,   107,   108,   108,   108,   109,   109,   109,   109,
     109,   109,   110,   110,   110,   110,   110,   111,   111,   112,
     112,   113,   113,   114,   114,   115,   116,   117
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
       3,     4,     4,     3,     5,     4,     3,     1,     3,     2,
       2,     1,     1,     3,     3,     2,     3,     3,     4,     3,
       4,     2,     3,     3,     4,     1,     5,     6,     1,     2,
       3,     4,     2,     1,     2,     3,     2,     1,     1,     1,
       1,     1,     1,     3,     4,     2,     3,     1,     2,     1,
       1,     1,     2,     5,     7,     5,     5,     7,     6,     7,
       6,     7,     3,     2,     2,     2,     3,     1,     2,     1,
       1,     4,     3,     1,     2,     0,     0,     0
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
#line 66 "compiler2.y"
                         {
		root = create_tree("Program",1,(yyvsp[0].gt));
	}
#line 1700 "y.tab.c"
    break;

  case 3:
#line 73 "compiler2.y"
                   {
		(yyval.gt) = create_tree("primary_expression",1,(yyvsp[0].gt));
	}
#line 1708 "y.tab.c"
    break;

  case 4:
#line 77 "compiler2.y"
             {
		(yyval.gt) = create_tree("primary_expression",1,(yyvsp[0].gt));
		// $$->type = "bool";
		// $$->int_value = $1->int_value;
	}
#line 1718 "y.tab.c"
    break;

  case 5:
#line 83 "compiler2.y"
              {
		(yyval.gt) = create_tree("primary_expression",1,(yyvsp[0].gt));
		// $$->type = "bool";
		// $$->int_value = $1->int_value;
	}
#line 1728 "y.tab.c"
    break;

  case 6:
#line 88 "compiler2.y"
                       {
		//printf("%d",$1->int_value);
		(yyval.gt) = create_tree("primary_expression",1,(yyvsp[0].gt));
		// $$->type = "int";
		// $$->int_value = $1->int_value;

	}
#line 1740 "y.tab.c"
    break;

  case 7:
#line 95 "compiler2.y"
                          {
		(yyval.gt) = create_tree("primary_expression",1,(yyvsp[0].gt));
		// $$->type = "double";
		// $$->double_value = $1->double_value;
	}
#line 1750 "y.tab.c"
    break;

  case 8:
#line 100 "compiler2.y"
                            {
		(yyval.gt) = create_tree("primary_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1758 "y.tab.c"
    break;

  case 9:
#line 107 "compiler2.y"
                          {
		(yyval.gt) = create_tree("postfix_expression",1,(yyvsp[0].gt));
	}
#line 1766 "y.tab.c"
    break;

  case 10:
#line 110 "compiler2.y"
                                                     {
		(yyval.gt) = create_tree("postfix_expression",4,(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
		//数组调用
	}
#line 1775 "y.tab.c"
    break;

  case 11:
#line 114 "compiler2.y"
                                          {
		(yyval.gt) = create_tree("postfix_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
		//函数调用
	}
#line 1784 "y.tab.c"
    break;

  case 12:
#line 118 "compiler2.y"
                                                                   {
		(yyval.gt) = create_tree("postfix_expression",4,(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
		//函数调用
	}
#line 1793 "y.tab.c"
    break;

  case 13:
#line 122 "compiler2.y"
                                         {
		//++
		(yyval.gt) = create_tree("postfix_expression",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1802 "y.tab.c"
    break;

  case 14:
#line 126 "compiler2.y"
                                         {
		//--
		(yyval.gt) = create_tree("postfix_expression",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1811 "y.tab.c"
    break;

  case 15:
#line 133 "compiler2.y"
                             {
		(yyval.gt) = create_tree("argument_expression_list",1,(yyvsp[0].gt));
	}
#line 1819 "y.tab.c"
    break;

  case 16:
#line 136 "compiler2.y"
                                                                   {
		(yyval.gt) = create_tree("argument_expression_list",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1827 "y.tab.c"
    break;

  case 17:
#line 143 "compiler2.y"
                          {
		//printf("postfix");
		(yyval.gt) = create_tree("unary_expression",1,(yyvsp[0].gt));
	}
#line 1836 "y.tab.c"
    break;

  case 18:
#line 147 "compiler2.y"
                                       {
		//++
		(yyval.gt) = create_tree("unary_expression",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1845 "y.tab.c"
    break;

  case 19:
#line 151 "compiler2.y"
                                       {
		//--
		(yyval.gt) = create_tree("unary_expression",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1854 "y.tab.c"
    break;

  case 20:
#line 155 "compiler2.y"
                                               {
		(yyval.gt) = create_tree("unary_expression",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1862 "y.tab.c"
    break;

  case 21:
#line 162 "compiler2.y"
            {
		(yyval.gt) = create_tree("unary_operator",1,(yyvsp[0].gt));
	}
#line 1870 "y.tab.c"
    break;

  case 22:
#line 165 "compiler2.y"
              {
		(yyval.gt) = create_tree("unary_operator",1,(yyvsp[0].gt));
	}
#line 1878 "y.tab.c"
    break;

  case 23:
#line 168 "compiler2.y"
              {
		(yyval.gt) = create_tree("unary_operator",1,(yyvsp[0].gt));
	}
#line 1886 "y.tab.c"
    break;

  case 24:
#line 171 "compiler2.y"
              {
		(yyval.gt) = create_tree("unary_operator",1,(yyvsp[0].gt));
	}
#line 1894 "y.tab.c"
    break;

  case 25:
#line 178 "compiler2.y"
                         {
		(yyval.gt) = create_tree("multiplicative_expression",1,(yyvsp[0].gt));
	}
#line 1902 "y.tab.c"
    break;

  case 26:
#line 181 "compiler2.y"
                                                         {
		(yyval.gt) = create_tree("multiplicative_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1910 "y.tab.c"
    break;

  case 27:
#line 184 "compiler2.y"
                                                         {
		(yyval.gt) = create_tree("multiplicative_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1918 "y.tab.c"
    break;

  case 28:
#line 187 "compiler2.y"
                                                         {
		(yyval.gt) = create_tree("multiplicative_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1926 "y.tab.c"
    break;

  case 29:
#line 194 "compiler2.y"
                                   {
		(yyval.gt) = create_tree("additive_expression",1,(yyvsp[0].gt));
	}
#line 1934 "y.tab.c"
    break;

  case 30:
#line 197 "compiler2.y"
                                                            {
		(yyval.gt) = create_tree("additive_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1942 "y.tab.c"
    break;

  case 31:
#line 200 "compiler2.y"
                                                            {
		(yyval.gt) = create_tree("additive_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1950 "y.tab.c"
    break;

  case 32:
#line 207 "compiler2.y"
                            {
		(yyval.gt) = create_tree("shift_expression",1,(yyvsp[0].gt));
	}
#line 1958 "y.tab.c"
    break;

  case 33:
#line 210 "compiler2.y"
                                                       {
		//<<
		(yyval.gt) = create_tree("shift_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1967 "y.tab.c"
    break;

  case 34:
#line 214 "compiler2.y"
                                                        {
		//<<
		(yyval.gt) = create_tree("shift_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1976 "y.tab.c"
    break;

  case 35:
#line 222 "compiler2.y"
                         {
		(yyval.gt) = create_tree("relational_expression",1,(yyvsp[0].gt));
	}
#line 1984 "y.tab.c"
    break;

  case 36:
#line 225 "compiler2.y"
                                                     {
		(yyval.gt) = create_tree("relational_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1992 "y.tab.c"
    break;

  case 37:
#line 228 "compiler2.y"
                                                     {
		(yyval.gt) = create_tree("relational_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2000 "y.tab.c"
    break;

  case 38:
#line 231 "compiler2.y"
                                                       {
		// <=
		(yyval.gt) = create_tree("relational_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2009 "y.tab.c"
    break;

  case 39:
#line 235 "compiler2.y"
                                                       {
		// >=
		(yyval.gt) = create_tree("relational_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2018 "y.tab.c"
    break;

  case 40:
#line 243 "compiler2.y"
                              {
		(yyval.gt) = create_tree("equality_expression",1,(yyvsp[0].gt));
	}
#line 2026 "y.tab.c"
    break;

  case 41:
#line 246 "compiler2.y"
                                                          {
		// ==
		(yyval.gt) = create_tree("equality_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2035 "y.tab.c"
    break;

  case 42:
#line 250 "compiler2.y"
                                                          {
		// !=
		(yyval.gt) = create_tree("equality_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2044 "y.tab.c"
    break;

  case 43:
#line 257 "compiler2.y"
                            {
		(yyval.gt) = create_tree("and_expression",1,(yyvsp[0].gt));
	}
#line 2052 "y.tab.c"
    break;

  case 44:
#line 260 "compiler2.y"
                                                 {
		(yyval.gt) = create_tree("and_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2060 "y.tab.c"
    break;

  case 45:
#line 267 "compiler2.y"
                       {
		(yyval.gt) = create_tree("exclusive_or_expression",1,(yyvsp[0].gt));
	}
#line 2068 "y.tab.c"
    break;

  case 46:
#line 270 "compiler2.y"
                                                     {
		(yyval.gt) = create_tree("exclusive_or_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2076 "y.tab.c"
    break;

  case 47:
#line 277 "compiler2.y"
                                {
		(yyval.gt) = create_tree("inclusive_or_expression",1,(yyvsp[0].gt));
	}
#line 2084 "y.tab.c"
    break;

  case 48:
#line 280 "compiler2.y"
                                                              {
		(yyval.gt) = create_tree("inclusive_or_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2092 "y.tab.c"
    break;

  case 49:
#line 287 "compiler2.y"
                                {
		(yyval.gt) = create_tree("logical_and_expression",1,(yyvsp[0].gt));
	}
#line 2100 "y.tab.c"
    break;

  case 50:
#line 290 "compiler2.y"
                                                                {
		//&&
		(yyval.gt) = create_tree("logical_and_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2109 "y.tab.c"
    break;

  case 51:
#line 298 "compiler2.y"
                               {
		(yyval.gt) = create_tree("logical_or_expression",1,(yyvsp[0].gt));
	}
#line 2117 "y.tab.c"
    break;

  case 52:
#line 301 "compiler2.y"
                                                             {
		//||
		(yyval.gt) = create_tree("logical_or_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2126 "y.tab.c"
    break;

  case 53:
#line 309 "compiler2.y"
                              {
		//条件表达式
		(yyval.gt) = create_tree("assignment_expression",1,(yyvsp[0].gt));
	}
#line 2135 "y.tab.c"
    break;

  case 54:
#line 313 "compiler2.y"
                                                                     {
		(yyval.gt) = create_tree("assignment_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2143 "y.tab.c"
    break;

  case 55:
#line 320 "compiler2.y"
            {
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[0].gt));
	}
#line 2151 "y.tab.c"
    break;

  case 56:
#line 323 "compiler2.y"
                     {
		//*=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[0].gt));
	}
#line 2160 "y.tab.c"
    break;

  case 57:
#line 327 "compiler2.y"
                     {
		// /=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[0].gt));
	}
#line 2169 "y.tab.c"
    break;

  case 58:
#line 331 "compiler2.y"
                     {
		// %=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[0].gt));
	}
#line 2178 "y.tab.c"
    break;

  case 59:
#line 335 "compiler2.y"
                     {
		// +=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[0].gt));
	}
#line 2187 "y.tab.c"
    break;

  case 60:
#line 339 "compiler2.y"
                     {
		// -=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[0].gt));
	}
#line 2196 "y.tab.c"
    break;

  case 61:
#line 343 "compiler2.y"
                      {
		// <<=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[0].gt));
	}
#line 2205 "y.tab.c"
    break;

  case 62:
#line 347 "compiler2.y"
                       {
		// >>=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[0].gt));
	}
#line 2214 "y.tab.c"
    break;

  case 63:
#line 351 "compiler2.y"
                     {
		// &=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[0].gt));
	}
#line 2223 "y.tab.c"
    break;

  case 64:
#line 355 "compiler2.y"
                     {
		// ^=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[0].gt));
	}
#line 2232 "y.tab.c"
    break;

  case 65:
#line 359 "compiler2.y"
                    {
		// |=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[0].gt));
	}
#line 2241 "y.tab.c"
    break;

  case 66:
#line 367 "compiler2.y"
                              {
		//赋值表达式
		(yyval.gt) = create_tree("expression",1,(yyvsp[0].gt));
	}
#line 2250 "y.tab.c"
    break;

  case 67:
#line 371 "compiler2.y"
                                               {
		//逗号表达式
		(yyval.gt) = create_tree("expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2259 "y.tab.c"
    break;

  case 68:
#line 379 "compiler2.y"
                           {
		(yyval.gt) = create_tree("declaration",2,(yyvsp[-1].gt),(yyvsp[0].gt)); //?
	}
#line 2267 "y.tab.c"
    break;

  case 69:
#line 382 "compiler2.y"
                                                  {
		(yyval.gt) = create_tree("declaration",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2275 "y.tab.c"
    break;

  case 70:
#line 389 "compiler2.y"
                        {
		(yyval.gt) = create_tree("init_declarator_list",1,(yyvsp[0].gt));
	}
#line 2283 "y.tab.c"
    break;

  case 71:
#line 392 "compiler2.y"
                                                   {
		(yyval.gt) = create_tree("init_declarator_list",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2291 "y.tab.c"
    break;

  case 72:
#line 398 "compiler2.y"
                   {
		(yyval.gt) = create_tree("init_declarator",1,(yyvsp[0].gt));
	}
#line 2299 "y.tab.c"
    break;

  case 73:
#line 401 "compiler2.y"
                                     {
		(yyval.gt) = create_tree("init_declarator",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2307 "y.tab.c"
    break;

  case 74:
#line 409 "compiler2.y"
             {
		(yyval.gt) = create_tree("type_specifier",1,(yyvsp[0].gt));
	}
#line 2315 "y.tab.c"
    break;

  case 75:
#line 412 "compiler2.y"
               {
		(yyval.gt) = create_tree("type_specifier",1,(yyvsp[0].gt));
	}
#line 2323 "y.tab.c"
    break;

  case 76:
#line 415 "compiler2.y"
              {
		(yyval.gt) = create_tree("type_specifier",1,(yyvsp[0].gt));
	}
#line 2331 "y.tab.c"
    break;

  case 77:
#line 418 "compiler2.y"
                 {
		(yyval.gt) = create_tree("type_specifier",1,(yyvsp[0].gt));
	}
#line 2339 "y.tab.c"
    break;

  case 78:
#line 421 "compiler2.y"
               {
		(yyval.gt) = create_tree("type_specifier",1,(yyvsp[0].gt));
	}
#line 2347 "y.tab.c"
    break;

  case 79:
#line 429 "compiler2.y"
                   {
		//变量
		(yyval.gt) = create_tree("declarator",1,(yyvsp[0].gt));
		int* valuePtr = globalPtr->addChar((yyvsp[0].gt)->content);
        if(valuePtr == nullptr){
            cout<<"Redefined"<<endl;
        }
	}
#line 2360 "y.tab.c"
    break;

  case 80:
#line 437 "compiler2.y"
                             {
		//.....
		(yyval.gt) = create_tree("declarator",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2369 "y.tab.c"
    break;

  case 81:
#line 441 "compiler2.y"
                                                   {
		//数组
		//printf("assignment_expression");
		(yyval.gt) = create_tree("declarator",4,(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
		globalPtr->deleteChar((yyvsp[-3].gt)->content);
		cout << " delete " << (yyvsp[-3].gt)->content << " in charTable" << endl;
	}
#line 2381 "y.tab.c"
    break;

  case 82:
#line 448 "compiler2.y"
                                 {
		//....
		(yyval.gt) = create_tree("declarator",4,(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
		globalPtr->deleteChar((yyvsp[-3].gt)->content);
		cout << " delete " << (yyvsp[-3].gt)->content << " in charTable" << endl;
	}
#line 2392 "y.tab.c"
    break;

  case 83:
#line 454 "compiler2.y"
                             {
		//数组
		(yyval.gt) = create_tree("declarator",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
		globalPtr->deleteChar((yyvsp[-2].gt)->content);
		cout << " delete " << (yyvsp[-2].gt)->content << " in charTable" << endl;
	}
#line 2403 "y.tab.c"
    break;

  case 84:
#line 460 "compiler2.y"
                                                       {
		//函数
		(yyval.gt) = create_tree("declarator",4,(yyvsp[-4].gt),(yyvsp[-3].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
		globalPtr->deleteChar((yyvsp[-4].gt)->content);
		cout << " delete " << (yyvsp[-4].gt)->content << " in charTable" << endl;
	}
#line 2414 "y.tab.c"
    break;

  case 85:
#line 466 "compiler2.y"
                                             {
		//函数
		(yyval.gt) = create_tree("declarator",4,(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
		globalPtr->deleteChar((yyvsp[-3].gt)->content);
		cout << " delete " << (yyvsp[-3].gt)->content << " in charTable" << endl;
	}
#line 2425 "y.tab.c"
    break;

  case 86:
#line 472 "compiler2.y"
                             {
		//函数
		(yyval.gt) = create_tree("declarator",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
		globalPtr->deleteChar((yyvsp[-2].gt)->content);
		cout << " delete " << (yyvsp[-2].gt)->content << " in charTable" << endl;
	}
#line 2436 "y.tab.c"
    break;

  case 87:
#line 483 "compiler2.y"
                              {
		(yyval.gt) = create_tree("parameter_list",1,(yyvsp[0].gt));
	}
#line 2444 "y.tab.c"
    break;

  case 88:
#line 486 "compiler2.y"
                                                   {
		(yyval.gt) = create_tree("parameter_list",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2452 "y.tab.c"
    break;

  case 89:
#line 492 "compiler2.y"
                                  {
		(yyval.gt) = create_tree("parameter_declaration",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2460 "y.tab.c"
    break;

  case 90:
#line 495 "compiler2.y"
                                             {
		(yyval.gt) = create_tree("parameter_declaration",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2468 "y.tab.c"
    break;

  case 91:
#line 498 "compiler2.y"
                         {
		(yyval.gt) = create_tree("parameter_declaration",1,(yyvsp[0].gt));
	}
#line 2476 "y.tab.c"
    break;

  case 92:
#line 504 "compiler2.y"
                   {
		(yyval.gt) = create_tree("identifier_list",1,(yyvsp[0].gt));
	}
#line 2484 "y.tab.c"
    break;

  case 93:
#line 507 "compiler2.y"
                                         {
		(yyval.gt) = create_tree("identifier_list",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2492 "y.tab.c"
    break;

  case 94:
#line 513 "compiler2.y"
                                    {
		(yyval.gt) = create_tree("abstract_declarator",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2500 "y.tab.c"
    break;

  case 95:
#line 516 "compiler2.y"
                  {
		(yyval.gt) = create_tree("abstract_declarator",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2508 "y.tab.c"
    break;

  case 96:
#line 519 "compiler2.y"
                                        {
		(yyval.gt) = create_tree("abstract_declarator",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2516 "y.tab.c"
    break;

  case 97:
#line 522 "compiler2.y"
                                      {
		(yyval.gt) = create_tree("abstract_declarator",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2524 "y.tab.c"
    break;

  case 98:
#line 525 "compiler2.y"
                                                            {
		(yyval.gt) = create_tree("abstract_declarator",4,(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2532 "y.tab.c"
    break;

  case 99:
#line 528 "compiler2.y"
                      {
		(yyval.gt) = create_tree("abstract_declarator",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2540 "y.tab.c"
    break;

  case 100:
#line 531 "compiler2.y"
                                          {
		(yyval.gt) = create_tree("abstract_declarator",4,(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2548 "y.tab.c"
    break;

  case 101:
#line 534 "compiler2.y"
                  {
		(yyval.gt) = create_tree("abstract_declarator",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2556 "y.tab.c"
    break;

  case 102:
#line 537 "compiler2.y"
                                 {
		(yyval.gt) = create_tree("abstract_declarator",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2564 "y.tab.c"
    break;

  case 103:
#line 540 "compiler2.y"
                                      {
		(yyval.gt) = create_tree("abstract_declarator",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2572 "y.tab.c"
    break;

  case 104:
#line 543 "compiler2.y"
                                                     {
		(yyval.gt) = create_tree("abstract_declarator",4,(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2580 "y.tab.c"
    break;

  case 105:
#line 550 "compiler2.y"
                              {
		(yyval.gt) = create_tree("initializer",1,(yyvsp[0].gt));
	}
#line 2588 "y.tab.c"
    break;

  case 106:
#line 553 "compiler2.y"
                                                            {
		//列表初始化 {1,1,1}
		(yyval.gt) = create_tree("initializer",3,(yyvsp[-4].gt),(yyvsp[-2].gt),(yyvsp[-1].gt));
	}
#line 2597 "y.tab.c"
    break;

  case 107:
#line 557 "compiler2.y"
                                                                {
		//列表初始化 {1,1,1,}
		(yyval.gt) = create_tree("initializer",4,(yyvsp[-5].gt),(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt));
	}
#line 2606 "y.tab.c"
    break;

  case 108:
#line 564 "compiler2.y"
                    {
		(yyval.gt) = create_tree("initializer_list",1,(yyvsp[0].gt));
	}
#line 2614 "y.tab.c"
    break;

  case 109:
#line 567 "compiler2.y"
                                  {
		(yyval.gt) = create_tree("initializer_list",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2622 "y.tab.c"
    break;

  case 110:
#line 570 "compiler2.y"
                                           {
		(yyval.gt) = create_tree("initializer_list",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2630 "y.tab.c"
    break;

  case 111:
#line 573 "compiler2.y"
                                                       {
		(yyval.gt) = create_tree("initializer_list",3,(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt));
	}
#line 2638 "y.tab.c"
    break;

  case 112:
#line 579 "compiler2.y"
                            {
		(yyval.gt) = create_tree("designation",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2646 "y.tab.c"
    break;

  case 113:
#line 585 "compiler2.y"
                   {
		(yyval.gt) = create_tree("designator_list",1,(yyvsp[0].gt));
	}
#line 2654 "y.tab.c"
    break;

  case 114:
#line 588 "compiler2.y"
                                     {
		(yyval.gt) = create_tree("designator_list",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2662 "y.tab.c"
    break;

  case 115:
#line 594 "compiler2.y"
                                      {
		(yyval.gt) = create_tree("designator",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2670 "y.tab.c"
    break;

  case 116:
#line 597 "compiler2.y"
                         {
		(yyval.gt) = create_tree("designator",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2678 "y.tab.c"
    break;

  case 117:
#line 604 "compiler2.y"
                          {
		(yyval.gt) = create_tree("statement",1,(yyvsp[0].gt));
	}
#line 2686 "y.tab.c"
    break;

  case 118:
#line 607 "compiler2.y"
                             {
		(yyval.gt) = create_tree("statement",1,(yyvsp[0].gt));
	}
#line 2694 "y.tab.c"
    break;

  case 119:
#line 610 "compiler2.y"
                              {
		(yyval.gt) = create_tree("statement",1,(yyvsp[0].gt));
	}
#line 2702 "y.tab.c"
    break;

  case 120:
#line 613 "compiler2.y"
                              {
		(yyval.gt) = create_tree("statement",1,(yyvsp[0].gt));
	}
#line 2710 "y.tab.c"
    break;

  case 121:
#line 616 "compiler2.y"
                              {
		(yyval.gt) = create_tree("statement",1,(yyvsp[0].gt));
	}
#line 2718 "y.tab.c"
    break;

  case 122:
#line 619 "compiler2.y"
                         {
		(yyval.gt) = create_tree("statement",1,(yyvsp[0].gt));
	}
#line 2726 "y.tab.c"
    break;

  case 123:
#line 626 "compiler2.y"
                                 {
		(yyval.gt) = create_tree("labeled_statement",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2734 "y.tab.c"
    break;

  case 124:
#line 629 "compiler2.y"
                                                   {
		(yyval.gt) = create_tree("labeled_statement",4,(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2742 "y.tab.c"
    break;

  case 125:
#line 636 "compiler2.y"
                {
		(yyval.gt) = create_tree("compound_statement",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2750 "y.tab.c"
    break;

  case 126:
#line 639 "compiler2.y"
                                  {
		(yyval.gt) = create_tree("compound_statement",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2758 "y.tab.c"
    break;

  case 127:
#line 645 "compiler2.y"
                   {
		(yyval.gt) = create_tree("block_item_list",1,(yyvsp[0].gt));
	}
#line 2766 "y.tab.c"
    break;

  case 128:
#line 648 "compiler2.y"
                                     {
		(yyval.gt) = create_tree("block_item_list",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2774 "y.tab.c"
    break;

  case 129:
#line 654 "compiler2.y"
                    {
		(yyval.gt) = create_tree("block_item",1,(yyvsp[0].gt));
	}
#line 2782 "y.tab.c"
    break;

  case 130:
#line 657 "compiler2.y"
                    {
		(yyval.gt) = create_tree("block_item",1,(yyvsp[0].gt));
	}
#line 2790 "y.tab.c"
    break;

  case 131:
#line 663 "compiler2.y"
            {
		(yyval.gt) = create_tree("expression_statement",1,(yyvsp[0].gt));
	}
#line 2798 "y.tab.c"
    break;

  case 132:
#line 666 "compiler2.y"
                         {
		(yyval.gt) = create_tree("expression_statement",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2806 "y.tab.c"
    break;

  case 133:
#line 673 "compiler2.y"
                                                              {
		(yyval.gt) = create_tree("selection_statement",5,(yyvsp[-4].gt),(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2814 "y.tab.c"
    break;

  case 134:
#line 676 "compiler2.y"
                                                     {
		(yyval.gt) = create_tree("selection_statement",7,(yyvsp[-6].gt),(yyvsp[-5].gt),(yyvsp[-4].gt),(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2822 "y.tab.c"
    break;

  case 135:
#line 679 "compiler2.y"
                                          {
		(yyval.gt) = create_tree("selection_statement",5,(yyvsp[-4].gt),(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2830 "y.tab.c"
    break;

  case 136:
#line 686 "compiler2.y"
                                           {
		(yyval.gt) = create_tree("iteration_statement",5,(yyvsp[-4].gt),(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2838 "y.tab.c"
    break;

  case 137:
#line 689 "compiler2.y"
                                                    {
		(yyval.gt) = create_tree("iteration_statement",7,(yyvsp[-6].gt),(yyvsp[-5].gt),(yyvsp[-4].gt),(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2846 "y.tab.c"
    break;

  case 138:
#line 692 "compiler2.y"
                                                                          {
		(yyval.gt) = create_tree("iteration_statement",6,(yyvsp[-5].gt),(yyvsp[-4].gt),(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2854 "y.tab.c"
    break;

  case 139:
#line 695 "compiler2.y"
                                                                                     {
		(yyval.gt) = create_tree("iteration_statement",7,(yyvsp[-6].gt),(yyvsp[-5].gt),(yyvsp[-4].gt),(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2862 "y.tab.c"
    break;

  case 140:
#line 698 "compiler2.y"
                                                                 {
		(yyval.gt) = create_tree("iteration_statement",6,(yyvsp[-5].gt),(yyvsp[-4].gt),(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2870 "y.tab.c"
    break;

  case 141:
#line 701 "compiler2.y"
                                                                            {
		(yyval.gt) = create_tree("iteration_statement",7,(yyvsp[-6].gt),(yyvsp[-5].gt),(yyvsp[-4].gt),(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2878 "y.tab.c"
    break;

  case 142:
#line 708 "compiler2.y"
                            {
		(yyval.gt) = create_tree("jump_statement",2,(yyvsp[-2].gt),(yyvsp[-1].gt));
	}
#line 2886 "y.tab.c"
    break;

  case 143:
#line 711 "compiler2.y"
                       {
		(yyval.gt) = create_tree("jump_statement",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2894 "y.tab.c"
    break;

  case 144:
#line 714 "compiler2.y"
                    {
		(yyval.gt) = create_tree("jump_statement",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2902 "y.tab.c"
    break;

  case 145:
#line 717 "compiler2.y"
                     {
		(yyval.gt) = create_tree("jump_statement",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2910 "y.tab.c"
    break;

  case 146:
#line 720 "compiler2.y"
                                {
		(yyval.gt) = create_tree("jump_statement",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2918 "y.tab.c"
    break;

  case 147:
#line 726 "compiler2.y"
                             {
		(yyval.gt) = create_tree("translation_unit",1,(yyvsp[0].gt));
	}
#line 2926 "y.tab.c"
    break;

  case 148:
#line 729 "compiler2.y"
                                                {
		(yyval.gt) = create_tree("translation_unit",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2934 "y.tab.c"
    break;

  case 149:
#line 735 "compiler2.y"
                            {
		(yyval.gt) = create_tree("external_declaration",1,(yyvsp[0].gt));
		//函数定义
		//printf("function_definition");
	}
#line 2944 "y.tab.c"
    break;

  case 150:
#line 740 "compiler2.y"
                      {
		(yyval.gt) = create_tree("external_declaration",1,(yyvsp[0].gt));
		//变量声明
		//printf("declaration");
	}
#line 2954 "y.tab.c"
    break;

  case 151:
#line 748 "compiler2.y"
                                                                      {
		(yyval.gt) = create_tree("function_definition",4,(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2962 "y.tab.c"
    break;

  case 152:
#line 751 "compiler2.y"
                                                       {
		(yyval.gt) = create_tree("function_definition",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2970 "y.tab.c"
    break;

  case 153:
#line 757 "compiler2.y"
                    {
		(yyval.gt) = create_tree("declaration_list",1,(yyvsp[0].gt));
	}
#line 2978 "y.tab.c"
    break;

  case 154:
#line 760 "compiler2.y"
                                       {
		(yyval.gt) = create_tree("declaration_list",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2986 "y.tab.c"
    break;

  case 155:
#line 765 "compiler2.y"
             {
    if(!waitFlag)
        globalPtr = globalPtr->addChild();
    else
        waitFlag = !waitFlag;
}
#line 2997 "y.tab.c"
    break;

  case 156:
#line 772 "compiler2.y"
            {
	globalPtr = globalPtr->addChild();
	waitFlag = !waitFlag;
}
#line 3006 "y.tab.c"
    break;

  case 157:
#line 777 "compiler2.y"
              {
    globalPtr = globalPtr->deleteSelf();
}
#line 3014 "y.tab.c"
    break;


#line 3018 "y.tab.c"

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
#line 780 "compiler2.y"



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
	Praser praser(root);
	freeGramTree(root);
	fclose(yyin);
	return 0;
}
