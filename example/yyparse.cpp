
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
#line 1 "parser.y"

// Graham Greving
// ggreving@ucsc.edu
// CMPS104a: asg3: parser.y
#include "lyutils.h"
#include "astree.h"


/* Line 189 of yacc.c  */
#line 82 "yyparse.cpp"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 1
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TOK_VOID = 258,
     TOK_BOOL = 259,
     TOK_CHAR = 260,
     TOK_INT = 261,
     TOK_STRING = 262,
     TOK_IF = 263,
     TOK_ELSE = 264,
     TOK_WHILE = 265,
     TOK_RETURN = 266,
     TOK_STRUCT = 267,
     TOK_FALSE = 268,
     TOK_TRUE = 269,
     TOK_NULL = 270,
     TOK_NEW = 271,
     TOK_ARRAY = 272,
     TOK_EQ = 273,
     TOK_NE = 274,
     TOK_LT = 275,
     TOK_LE = 276,
     TOK_GT = 277,
     TOK_GE = 278,
     TOK_IDENT = 279,
     TOK_INTCON = 280,
     TOK_CHARCON = 281,
     TOK_STRINGCON = 282,
     TOK_BLOCK = 283,
     TOK_CALL = 284,
     TOK_IFELSE = 285,
     TOK_INITDECL = 286,
     TOK_POS = 287,
     TOK_NEG = 288,
     TOK_NEWARRAY = 289,
     TOK_TYPEID = 290,
     TOK_FIELD = 291,
     TOK_ORD = 292,
     TOK_CHR = 293,
     TOK_ROOT = 294,
     TOK_DECLID = 295,
     TOK_INDEX = 296,
     TOK_NEWSTRING = 297,
     TOK_RETURNVOID = 298,
     TOK_VARDECL = 299,
     TOK_FUNCTION = 300,
     TOK_PARAMLIST = 301,
     TOK_PROTOTYPE = 302
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 171 "yyparse.cpp"

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   645

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNRULES -- Number of states.  */
#define YYNSTATES  155

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
       2,     2,     2,    54,     2,     2,     2,    53,     2,     2,
      57,    62,    51,    49,    61,    50,    56,    52,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    59,
       2,    48,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    55,     2,    63,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    60,     2,    58,     2,     2,     2,     2,
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
       0,     0,     3,     5,     8,    11,    14,    18,    22,    23,
      26,    29,    34,    39,    43,    48,    50,    52,    54,    56,
      58,    60,    63,    67,    72,    77,    82,    87,    90,    94,
      97,   100,   103,   106,   108,   110,   112,   114,   116,   119,
     121,   126,   132,   140,   146,   149,   153,   155,   157,   159,
     161,   165,   167,   169,   173,   177,   181,   185,   189,   193,
     197,   201,   205,   209,   213,   217,   220,   223,   226,   229,
     232,   237,   243,   249,   253,   257,   260,   264,   266,   271,
     275,   277,   279,   281,   283,   285
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      65,     0,    -1,    66,    -1,    66,    68,    -1,    66,    72,
      -1,    66,    76,    -1,    66,     1,    58,    -1,    66,     1,
      59,    -1,    -1,    60,    69,    -1,    67,    69,    -1,    12,
      24,    67,    58,    -1,    12,    24,    60,    58,    -1,    70,
      24,    59,    -1,    70,    17,    24,    59,    -1,     3,    -1,
       4,    -1,     5,    -1,     6,    -1,     7,    -1,    24,    -1,
      57,    73,    -1,    71,    61,    73,    -1,    73,    71,    62,
      75,    -1,    73,    71,    62,    59,    -1,    73,    57,    62,
      75,    -1,    73,    57,    62,    59,    -1,    70,    24,    -1,
      70,    17,    24,    -1,    74,    76,    -1,    60,    76,    -1,
      74,    58,    -1,    60,    58,    -1,    75,    -1,    77,    -1,
      78,    -1,    79,    -1,    80,    -1,    81,    59,    -1,    59,
      -1,    73,    48,    81,    59,    -1,    10,    57,    81,    62,
      76,    -1,     8,    57,    81,    62,    76,     9,    76,    -1,
       8,    57,    81,    62,    76,    -1,    11,    59,    -1,    11,
      81,    59,    -1,    82,    -1,    83,    -1,    84,    -1,    86,
      -1,    57,    81,    62,    -1,    87,    -1,    88,    -1,    81,
      49,    81,    -1,    81,    50,    81,    -1,    81,    51,    81,
      -1,    81,    52,    81,    -1,    81,    20,    81,    -1,    81,
      22,    81,    -1,    81,    21,    81,    -1,    81,    23,    81,
      -1,    81,    48,    81,    -1,    81,    18,    81,    -1,    81,
      19,    81,    -1,    81,    53,    81,    -1,    49,    81,    -1,
      50,    81,    -1,    54,    81,    -1,    38,    81,    -1,    37,
      81,    -1,    16,    24,    57,    62,    -1,    16,     7,    57,
      81,    62,    -1,    16,    70,    55,    81,    63,    -1,    24,
      57,    81,    -1,    85,    61,    81,    -1,    85,    62,    -1,
      24,    57,    62,    -1,    24,    -1,    81,    55,    81,    63,
      -1,    81,    56,    24,    -1,    25,    -1,    26,    -1,    27,
      -1,    13,    -1,    14,    -1,    15,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    44,    44,    47,    48,    49,    50,    51,    52,    55,
      56,    59,    64,    71,    76,    84,    85,    86,    87,    88,
      89,    92,    95,    98,   103,   108,   113,   121,   125,   131,
     132,   135,   140,   146,   147,   148,   149,   150,   151,   155,
     158,   164,   170,   175,   181,   185,   191,   192,   193,   194,
     195,   199,   200,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   217,   218,   219,   220,   221,
     224,   229,   233,   239,   242,   248,   253,   260,   261,   266,
     272,   273,   274,   275,   276,   277
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_VOID", "TOK_BOOL", "TOK_CHAR",
  "TOK_INT", "TOK_STRING", "TOK_IF", "TOK_ELSE", "TOK_WHILE", "TOK_RETURN",
  "TOK_STRUCT", "TOK_FALSE", "TOK_TRUE", "TOK_NULL", "TOK_NEW",
  "TOK_ARRAY", "TOK_EQ", "TOK_NE", "TOK_LT", "TOK_LE", "TOK_GT", "TOK_GE",
  "TOK_IDENT", "TOK_INTCON", "TOK_CHARCON", "TOK_STRINGCON", "TOK_BLOCK",
  "TOK_CALL", "TOK_IFELSE", "TOK_INITDECL", "TOK_POS", "TOK_NEG",
  "TOK_NEWARRAY", "TOK_TYPEID", "TOK_FIELD", "TOK_ORD", "TOK_CHR",
  "TOK_ROOT", "TOK_DECLID", "TOK_INDEX", "TOK_NEWSTRING", "TOK_RETURNVOID",
  "TOK_VARDECL", "TOK_FUNCTION", "TOK_PARAMLIST", "TOK_PROTOTYPE", "'='",
  "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "'['", "'.'", "'('", "'}'",
  "';'", "'{'", "','", "')'", "']'", "$accept", "start", "program",
  "structhead", "structdef", "fielddecl", "basetype", "funchead",
  "function", "identdecl", "blockhead", "block", "statement", "vardecl",
  "while", "ifelse", "return", "expr", "binop", "unop", "allocator",
  "callexprs", "call", "variable", "constant", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,    61,    43,
      45,    42,    47,    37,    33,    91,    46,    40,   125,    59,
     123,    44,    41,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    65,    66,    66,    66,    66,    66,    66,    67,
      67,    68,    68,    69,    69,    70,    70,    70,    70,    70,
      70,    71,    71,    72,    72,    72,    72,    73,    73,    74,
      74,    75,    75,    76,    76,    76,    76,    76,    76,    76,
      77,    78,    79,    79,    80,    80,    81,    81,    81,    81,
      81,    81,    81,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    83,    83,    83,    83,    83,
      84,    84,    84,    85,    85,    86,    86,    87,    87,    87,
      88,    88,    88,    88,    88,    88
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     3,     3,     0,     2,
       2,     4,     4,     3,     4,     1,     1,     1,     1,     1,
       1,     2,     3,     4,     4,     4,     4,     2,     3,     2,
       2,     2,     2,     1,     1,     1,     1,     1,     2,     1,
       4,     5,     7,     5,     2,     3,     1,     1,     1,     1,
       3,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     2,
       4,     5,     5,     3,     3,     2,     3,     1,     4,     3,
       1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       8,     0,     0,     1,     0,    15,    16,    17,    18,    19,
       0,     0,     0,     0,    83,    84,    85,     0,    77,    80,
      81,    82,     0,     0,     0,     0,     0,     0,    39,     0,
       3,     0,     4,     0,     0,    33,     5,    34,    35,    36,
      37,     0,    46,    47,    48,     0,    49,    51,    52,     6,
       7,     0,     0,    77,    44,     0,     0,    19,    20,     0,
       0,    69,    68,    65,    66,    67,     0,    32,     0,    30,
       0,    27,     0,     0,     0,    31,    29,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    38,     0,    75,     0,     0,    45,     0,     0,     0,
       0,     0,    76,    73,    50,    28,     0,    20,     0,    21,
       0,     0,    62,    63,    57,    59,    58,    60,    61,    53,
      54,    55,    56,    64,     0,    79,    74,     0,     0,    12,
       9,     0,    11,    10,     0,    70,     0,    40,    26,    25,
      22,    24,    23,    78,    43,    41,     0,     0,    71,    72,
       0,     0,    13,    42,    14
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    98,    30,   130,    31,    74,    32,    68,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -105
static const yytype_int16 yypact[] =
{
    -105,    15,   100,  -105,   -56,  -105,  -105,  -105,  -105,  -105,
     -40,   -13,   334,    22,  -105,  -105,  -105,    21,    -8,  -105,
    -105,  -105,   513,   513,   513,   513,   513,   513,  -105,   158,
    -105,    41,  -105,     9,   216,  -105,  -105,  -105,  -105,  -105,
    -105,   523,  -105,  -105,  -105,   -32,  -105,  -105,  -105,  -105,
    -105,   513,   513,     2,  -105,   535,     4,    10,    33,    38,
     289,   -23,   -23,    67,    67,   -23,   394,  -105,    48,  -105,
      78,  -105,   513,     7,     0,  -105,  -105,   513,   513,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   513,   513,
      93,  -105,   513,  -105,   409,   454,  -105,    31,    36,   513,
      71,   513,  -105,   589,  -105,  -105,   577,  -105,    32,  -105,
      47,    80,    79,    79,    79,    79,    79,    79,   589,    67,
      67,   -23,   -23,   -23,   346,  -105,   589,   274,   274,  -105,
    -105,    46,  -105,  -105,   469,  -105,   355,  -105,  -105,  -105,
    -105,  -105,  -105,  -105,   127,  -105,   117,    83,  -105,  -105,
     274,    84,  -105,  -105,  -105
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -105,  -105,  -105,  -105,  -105,    49,   -11,  -105,  -105,    -1,
    -105,  -104,   -29,  -105,  -105,  -105,  -105,    -4,  -105,  -105,
    -105,  -105,  -105,  -105,  -105
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -21
static const yytype_int16 yytable[] =
{
      69,    33,    49,    50,   139,    76,    59,   142,    55,   -20,
       5,     6,     7,     8,     9,     3,   -20,    51,    61,    62,
      63,    64,    65,    66,     5,     6,     7,     8,    57,    92,
      93,   107,    89,    90,     5,     6,     7,     8,     9,     5,
       6,     7,     8,     9,    52,    58,    56,    94,    95,    60,
       5,     6,     7,     8,     9,   107,   103,    72,    70,    60,
     107,   110,   111,   146,    97,    71,    73,    99,   106,   108,
     147,   107,   109,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   131,   131,   126,   129,
     100,   138,    29,   101,   132,   134,    72,   136,   144,   145,
      -2,     4,   105,     5,     6,     7,     8,     9,    10,   140,
      11,    12,    13,    14,    15,    16,    17,   125,    86,    87,
      88,   153,    89,    90,    18,    19,    20,    21,    84,    85,
      86,    87,    88,   135,    89,    90,   150,    22,    23,   141,
      29,   151,   152,   154,     0,     0,     0,   133,     0,    24,
      25,     0,     0,     0,    26,     0,     0,    27,     0,    28,
      29,     5,     6,     7,     8,     9,    10,     0,    11,    12,
       0,    14,    15,    16,    17,     0,     0,     0,     0,     0,
       0,     0,    18,    19,    20,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    22,    23,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    24,    25,     0,
       0,     0,    26,     0,     0,    27,    67,    28,    29,     5,
       6,     7,     8,     9,    10,     0,    11,    12,     0,    14,
      15,    16,    17,     0,     0,     0,     0,     0,     0,     0,
      18,    19,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    22,    23,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    24,    25,     0,     0,     0,
      26,     0,     0,    27,    75,    28,    29,     5,     6,     7,
       8,     9,    10,     0,    11,    12,     0,    14,    15,    16,
      17,     0,     0,     0,     0,     0,     0,     0,    18,    19,
      20,    21,    14,    15,    16,    17,     0,     0,     0,     0,
       0,    22,    23,    53,    19,    20,    21,     0,     0,     0,
       0,     0,     0,    24,    25,     0,    22,    23,    26,     0,
       0,    27,     0,    28,    29,     0,     0,     0,    24,    25,
       0,     0,     0,    26,     0,     0,    27,    14,    15,    16,
      17,   102,     0,     0,     0,     0,     0,     0,    53,    19,
      20,    21,     0,     0,    77,    78,    79,    80,    81,    82,
       0,    22,    23,    77,    78,    79,    80,    81,    82,     0,
       0,     0,     0,    24,    25,     0,     0,     0,    26,     0,
       0,    27,     0,    54,    83,    84,    85,    86,    87,    88,
       0,    89,    90,    83,    84,    85,    86,    87,    88,   143,
      89,    90,    77,    78,    79,    80,    81,    82,   149,     0,
       0,     0,     0,     0,     0,     0,     0,    77,    78,    79,
      80,    81,    82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    83,    84,    85,    86,    87,    88,     0,    89,
      90,     0,     0,     0,     0,     0,   104,    83,    84,    85,
      86,    87,    88,     0,    89,    90,     0,     0,     0,     0,
       0,   127,    77,    78,    79,    80,    81,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    77,    78,    79,
      80,    81,    82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    83,    84,    85,    86,    87,    88,     0,    89,
      90,     0,     0,     0,     0,     0,   128,    83,    84,    85,
      86,    87,    88,     0,    89,    90,    14,    15,    16,    17,
       0,   148,     0,     0,     0,     0,     0,    53,    19,    20,
      21,    77,    78,    79,    80,    81,    82,     0,     0,     0,
      22,    23,     0,    77,    78,    79,    80,    81,    82,     0,
       0,     0,    24,    25,     0,     0,     0,    26,     0,     0,
      27,    83,    84,    85,    86,    87,    88,     0,    89,    90,
       0,     0,    91,    83,    84,    85,    86,    87,    88,     0,
      89,    90,     0,     0,    96,    77,    78,    79,    80,    81,
      82,     0,     0,     0,     0,     0,     0,    77,    78,    79,
      80,    81,    82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,    84,    85,    86,    87,
      88,     0,    89,    90,     0,     0,   137,    83,    84,    85,
      86,    87,    88,     0,    89,    90
};

static const yytype_int16 yycheck[] =
{
      29,     2,    58,    59,   108,    34,    17,   111,    12,    17,
       3,     4,     5,     6,     7,     0,    24,    57,    22,    23,
      24,    25,    26,    27,     3,     4,     5,     6,     7,    61,
      62,    24,    55,    56,     3,     4,     5,     6,     7,     3,
       4,     5,     6,     7,    57,    24,    24,    51,    52,    57,
       3,     4,     5,     6,     7,    24,    60,    48,    17,    57,
      24,    61,    62,    17,    60,    24,    57,    57,    72,    62,
      24,    24,    73,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    97,    98,    92,    58,
      57,    59,    60,    55,    58,    99,    48,   101,   127,   128,
       0,     1,    24,     3,     4,     5,     6,     7,     8,   110,
      10,    11,    12,    13,    14,    15,    16,    24,    51,    52,
      53,   150,    55,    56,    24,    25,    26,    27,    49,    50,
      51,    52,    53,    62,    55,    56,     9,    37,    38,    59,
      60,    24,    59,    59,    -1,    -1,    -1,    98,    -1,    49,
      50,    -1,    -1,    -1,    54,    -1,    -1,    57,    -1,    59,
      60,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    13,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,
      -1,    -1,    54,    -1,    -1,    57,    58,    59,    60,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    13,
      14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    -1,    -1,
      54,    -1,    -1,    57,    58,    59,    60,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    13,    14,    15,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    13,    14,    15,    16,    -1,    -1,    -1,    -1,
      -1,    37,    38,    24,    25,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    -1,    37,    38,    54,    -1,
      -1,    57,    -1,    59,    60,    -1,    -1,    -1,    49,    50,
      -1,    -1,    -1,    54,    -1,    -1,    57,    13,    14,    15,
      16,    62,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    -1,    -1,    18,    19,    20,    21,    22,    23,
      -1,    37,    38,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    49,    50,    -1,    -1,    -1,    54,    -1,
      -1,    57,    -1,    59,    48,    49,    50,    51,    52,    53,
      -1,    55,    56,    48,    49,    50,    51,    52,    53,    63,
      55,    56,    18,    19,    20,    21,    22,    23,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,    -1,    55,
      56,    -1,    -1,    -1,    -1,    -1,    62,    48,    49,    50,
      51,    52,    53,    -1,    55,    56,    -1,    -1,    -1,    -1,
      -1,    62,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,    -1,    55,
      56,    -1,    -1,    -1,    -1,    -1,    62,    48,    49,    50,
      51,    52,    53,    -1,    55,    56,    13,    14,    15,    16,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      37,    38,    -1,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    49,    50,    -1,    -1,    -1,    54,    -1,    -1,
      57,    48,    49,    50,    51,    52,    53,    -1,    55,    56,
      -1,    -1,    59,    48,    49,    50,    51,    52,    53,    -1,
      55,    56,    -1,    -1,    59,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,
      53,    -1,    55,    56,    -1,    -1,    59,    48,    49,    50,
      51,    52,    53,    -1,    55,    56
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    65,    66,     0,     1,     3,     4,     5,     6,     7,
       8,    10,    11,    12,    13,    14,    15,    16,    24,    25,
      26,    27,    37,    38,    49,    50,    54,    57,    59,    60,
      68,    70,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    58,
      59,    57,    57,    24,    59,    81,    24,     7,    24,    70,
      57,    81,    81,    81,    81,    81,    81,    58,    73,    76,
      17,    24,    48,    57,    71,    58,    76,    18,    19,    20,
      21,    22,    23,    48,    49,    50,    51,    52,    53,    55,
      56,    59,    61,    62,    81,    81,    59,    60,    67,    57,
      57,    55,    62,    81,    62,    24,    81,    24,    62,    73,
      61,    62,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    24,    81,    62,    62,    58,
      69,    70,    58,    69,    81,    62,    81,    59,    59,    75,
      73,    59,    75,    63,    76,    76,    17,    24,    62,    63,
       9,    24,    59,    76,    59
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
        case 2:

/* Line 1455 of yacc.c  */
#line 44 "parser.y"
    { yyparse_astree = (yyvsp[(1) - (1)]); ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 47 "parser.y"
    { (yyval) = adopt1 ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 48 "parser.y"
    { (yyval) = adopt1 ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 49 "parser.y"
    { (yyval) = adopt1 ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 50 "parser.y"
    { (yyval) = (yyvsp[(1) - (3)]); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 51 "parser.y"
    { (yyval) = (yyvsp[(1) - (3)]); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 52 "parser.y"
    { (yyval) = new_parseroot(); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 55 "parser.y"
    { free_ast ((yyvsp[(1) - (2)])); (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 56 "parser.y"
    { (yyval) = adopt1((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 59 "parser.y"
    {
	       free_ast((yyvsp[(4) - (4)]));
               (yyvsp[(2) - (4)]) = change_sym((yyvsp[(2) - (4)]), TOK_TYPEID);
               (yyval) = adopt2((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]));
            ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 64 "parser.y"
    { 
               free_ast2((yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
               (yyvsp[(2) - (4)]) = change_sym((yyvsp[(2) - (4)]), TOK_TYPEID);
               (yyval) = adopt1((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]));
            ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 71 "parser.y"
    { 
               free_ast((yyvsp[(3) - (3)]));
               (yyvsp[(2) - (3)]) = change_sym((yyvsp[(2) - (3)]), TOK_FIELD);
               (yyval) = adopt1((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]));
            ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 76 "parser.y"
    {

               free_ast((yyvsp[(4) - (4)]));
               (yyvsp[(3) - (4)]) = change_sym((yyvsp[(3) - (4)]), TOK_FIELD);
               (yyval) = adopt2((yyvsp[(2) - (4)]), (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
            ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 84 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 85 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 86 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 87 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 88 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 89 "parser.y"
    { (yyval) = change_sym((yyvsp[(1) - (1)]), TOK_TYPEID); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 92 "parser.y"
    {
                  (yyval) = adopt1sym((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), TOK_PARAMLIST);
            ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 95 "parser.y"
    { (yyval) = adopt1((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 98 "parser.y"
    {
               free_ast((yyvsp[(3) - (4)]));
               (yyval) = adopt3(new_astree(TOK_FUNCTION, (yyvsp[(1) - (4)])->filenr,
                     (yyvsp[(1) - (4)])->linenr, (yyvsp[(1) - (4)])->offset, ""), (yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
            ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 103 "parser.y"
    {
               free_ast2((yyvsp[(4) - (4)]), (yyvsp[(3) - (4)]));
               (yyval) = adopt2(new_astree(TOK_PROTOTYPE, (yyvsp[(1) - (4)])->filenr,
                     (yyvsp[(1) - (4)])->linenr, (yyvsp[(1) - (4)])->offset, ""), (yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]));   
            ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 108 "parser.y"
    { 
               free_ast((yyvsp[(3) - (4)]));
               (yyval) = adopt3(new_astree(TOK_FUNCTION, (yyvsp[(1) - (4)])->filenr,
                     (yyvsp[(1) - (4)])->linenr, (yyvsp[(1) - (4)])->offset, ""), (yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));   
            ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 113 "parser.y"
    {
               free_ast2((yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
               (yyval) = adopt2(new_astree(TOK_PROTOTYPE, (yyvsp[(1) - (4)])->filenr,
                     (yyvsp[(1) - (4)])->linenr, (yyvsp[(1) - (4)])->offset, ""), (yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]));   
                  
            ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 121 "parser.y"
    {
               (yyvsp[(2) - (2)]) = change_sym((yyvsp[(2) - (2)]), TOK_DECLID);
               (yyval) = adopt1((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
            ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 125 "parser.y"
    {
               (yyvsp[(3) - (3)]) = change_sym((yyvsp[(3) - (3)]), TOK_DECLID);
               (yyval) = adopt2((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
            ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 131 "parser.y"
    { (yyval) = adopt1((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 132 "parser.y"
    { (yyval) = adopt1((yyvsp[(1) - (2)]),(yyvsp[(2) - (2)])); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 135 "parser.y"
    {
               free_ast((yyvsp[(2) - (2)]));
               (yyval) = change_sym((yyvsp[(1) - (2)]), TOK_BLOCK);
               //$$ = kidnap_children($1, $2);
            ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 140 "parser.y"
    { 
               free_ast((yyvsp[(2) - (2)]));
               (yyval) = change_sym((yyvsp[(1) - (2)]), TOK_BLOCK);
            ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 146 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 147 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 148 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 149 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 150 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 151 "parser.y"
    {
               free_ast((yyvsp[(2) - (2)]));
               (yyval) = (yyvsp[(1) - (2)]);
            ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 155 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 158 "parser.y"
    {
               free_ast((yyvsp[(4) - (4)]));
               (yyval) = adopt2sym((yyvsp[(2) - (4)]),(yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]),TOK_VARDECL);
            ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 164 "parser.y"
    {
               free_ast2((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));
               (yyval) = adopt2((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]));
            ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 170 "parser.y"
    {
               free_ast3((yyvsp[(2) - (7)]), (yyvsp[(4) - (7)]), (yyvsp[(6) - (7)]));
               (yyvsp[(1) - (7)]) = change_sym((yyvsp[(1) - (7)]), TOK_IFELSE);
               (yyval) = adopt3((yyvsp[(1) - (7)]), (yyvsp[(3) - (7)]), (yyvsp[(5) - (7)]), (yyvsp[(7) - (7)]));
            ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 175 "parser.y"
    {
               free_ast2((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));
               (yyval) = adopt2((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]));
            ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 181 "parser.y"
    {
               free_ast((yyvsp[(2) - (2)]));
               (yyval) = change_sym((yyvsp[(1) - (2)]), TOK_RETURNVOID);
            ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 185 "parser.y"
    {
               free_ast((yyvsp[(3) - (3)]));
               (yyval) = adopt1((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]));
            ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 191 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 192 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 193 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 194 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 195 "parser.y"
    {
               free_ast2((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
               (yyval) = (yyvsp[(2) - (3)]);
            ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 199 "parser.y"
    {(yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 200 "parser.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 203 "parser.y"
    { (yyval) = adopt2((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 204 "parser.y"
    { (yyval) = adopt2((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 205 "parser.y"
    { (yyval) = adopt2((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 206 "parser.y"
    { (yyval) = adopt2((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 207 "parser.y"
    { (yyval) = adopt2((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 208 "parser.y"
    { (yyval) = adopt2((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 209 "parser.y"
    { (yyval) = adopt2((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 210 "parser.y"
    { (yyval) = adopt2((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 211 "parser.y"
    { (yyval) = adopt2((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 212 "parser.y"
    { (yyval) = adopt2((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 213 "parser.y"
    { (yyval) = adopt2((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 214 "parser.y"
    { (yyval) = adopt2((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 217 "parser.y"
    { (yyval) = adopt1sym((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), TOK_POS); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 218 "parser.y"
    { (yyval) = adopt1sym((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), TOK_NEG); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 219 "parser.y"
    { (yyval) = adopt1((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 220 "parser.y"
    { (yyval) = adopt1((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 221 "parser.y"
    { (yyval) = adopt1((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 224 "parser.y"
    { 
               free_ast2((yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
               (yyvsp[(2) - (4)]) = change_sym((yyvsp[(2) - (4)]), TOK_TYPEID);
               (yyval) = adopt1((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]));
            ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 229 "parser.y"
    {
               free_ast2((yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]));
               (yyval) = adopt1sym((yyvsp[(1) - (5)]), (yyvsp[(4) - (5)]), TOK_NEWSTRING);
            ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 233 "parser.y"
    {
               free_ast((yyvsp[(3) - (5)])); free_ast((yyvsp[(5) - (5)]));
               (yyval) = adopt2sym((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]), TOK_NEWARRAY);
            ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 239 "parser.y"
    {
               (yyval) = adopt2sym((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), TOK_CALL);
            ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 242 "parser.y"
    {
               free_ast((yyvsp[(2) - (3)]));
               (yyval) = adopt1((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); 
            ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 248 "parser.y"
    {
               free_ast((yyvsp[(2) - (2)]));
               //$2 = change_sym($2, TOK_CALL);
               (yyval) = (yyvsp[(1) - (2)]);
            ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 253 "parser.y"
    {
               free_ast((yyvsp[(3) - (3)]));
               (yyvsp[(2) - (3)]) = change_sym((yyvsp[(2) - (3)]), TOK_CALL);
               (yyval) = adopt1((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]));
            ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 260 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 261 "parser.y"
    { 
               free_ast((yyvsp[(4) - (4)]));
               (yyvsp[(2) - (4)]) = change_sym((yyvsp[(2) - (4)]), TOK_INDEX);
               (yyval) = adopt2((yyvsp[(2) - (4)]), (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
            ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 266 "parser.y"
    {
               (yyvsp[(3) - (3)]) = change_sym((yyvsp[(3) - (3)]), TOK_FIELD); 
               (yyval) = adopt2((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
            ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 272 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 273 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 274 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 275 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 276 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 277 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2301 "yyparse.cpp"
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
#line 280 "parser.y"


const char *get_yytname (int symbol) {
   return yytname [YYTRANSLATE (symbol)];
}


bool is_defined_token (int symbol) {
   return YYTRANSLATE (symbol) > YYUNDEFTOK;
}

