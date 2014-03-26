
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
#line 1 "c.y"
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

// Dhlosh arxeiou sl.c pou ylopoiei diafores
// leitourgies
#include "sl.c"

// Dhlosh arxeiou eisodou gia to yyparse
extern FILE *yyin;
// Dhlosh arxeiou exodou apo to yyparse
extern FILE *yyout;
// Metablhth gia thn emfanish tou arithmou grammhs
extern int yylineno;
// Dhlosh yylex gia thn anagnosh ton token
int yylex(void);
//extern int yylex(void);
int yyerror(char *s);



/* Line 189 of yacc.c  */
#line 97 "y.tab.c"

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
     IDENTIFIER = 258,
     CONSTANT = 259,
     STRING_LITERAL = 260,
     SIZEOF = 261,
     PTR_OP = 262,
     INC_OP = 263,
     DEC_OP = 264,
     LEFT_OP = 265,
     RIGHT_OP = 266,
     LE_OP = 267,
     GE_OP = 268,
     EQ_OP = 269,
     NE_OP = 270,
     AND_OP = 271,
     OR_OP = 272,
     MUL_ASSIGN = 273,
     DIV_ASSIGN = 274,
     MOD_ASSIGN = 275,
     ADD_ASSIGN = 276,
     SUB_ASSIGN = 277,
     LEFT_ASSIGN = 278,
     RIGHT_ASSIGN = 279,
     AND_ASSIGN = 280,
     XOR_ASSIGN = 281,
     OR_ASSIGN = 282,
     TYPE_NAME = 283,
     TYPEDEF = 284,
     EXTERN = 285,
     STATIC = 286,
     AUTO = 287,
     REGISTER = 288,
     CHAR = 289,
     SHORT = 290,
     INT = 291,
     LONG = 292,
     SIGNED = 293,
     UNSIGNED = 294,
     FLOAT = 295,
     DOUBLE = 296,
     CONST = 297,
     VOLATILE = 298,
     VOID = 299,
     STRUCT = 300,
     UNION = 301,
     ENUM = 302,
     ELLIPSIS = 303,
     CASE = 304,
     DEFAULT = 305,
     IF = 306,
     ELSE = 307,
     SWITCH = 308,
     WHILE = 309,
     DO = 310,
     FOR = 311,
     GOTO = 312,
     CONTINUE = 313,
     BREAK = 314,
     RETURN = 315
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define CONSTANT 259
#define STRING_LITERAL 260
#define SIZEOF 261
#define PTR_OP 262
#define INC_OP 263
#define DEC_OP 264
#define LEFT_OP 265
#define RIGHT_OP 266
#define LE_OP 267
#define GE_OP 268
#define EQ_OP 269
#define NE_OP 270
#define AND_OP 271
#define OR_OP 272
#define MUL_ASSIGN 273
#define DIV_ASSIGN 274
#define MOD_ASSIGN 275
#define ADD_ASSIGN 276
#define SUB_ASSIGN 277
#define LEFT_ASSIGN 278
#define RIGHT_ASSIGN 279
#define AND_ASSIGN 280
#define XOR_ASSIGN 281
#define OR_ASSIGN 282
#define TYPE_NAME 283
#define TYPEDEF 284
#define EXTERN 285
#define STATIC 286
#define AUTO 287
#define REGISTER 288
#define CHAR 289
#define SHORT 290
#define INT 291
#define LONG 292
#define SIGNED 293
#define UNSIGNED 294
#define FLOAT 295
#define DOUBLE 296
#define CONST 297
#define VOLATILE 298
#define VOID 299
#define STRUCT 300
#define UNION 301
#define ENUM 302
#define ELLIPSIS 303
#define CASE 304
#define DEFAULT 305
#define IF 306
#define ELSE 307
#define SWITCH 308
#define WHILE 309
#define DO 310
#define FOR 311
#define GOTO 312
#define CONTINUE 313
#define BREAK 314
#define RETURN 315




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 24 "c.y"

	char s[30];



/* Line 214 of yacc.c  */
#line 259 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 271 "y.tab.c"

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
#define YYFINAL  61
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1301

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  85
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  212
/* YYNRULES -- Number of states.  */
#define YYNSTATES  350

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    72,     2,     2,     2,    74,    67,     2,
      61,    62,    68,    69,    66,    70,    65,    73,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    80,    82,
      75,    81,    76,    79,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    63,     2,    64,    77,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    83,    78,    84,    71,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    13,    15,    20,    24,
      29,    33,    37,    40,    43,    45,    49,    51,    54,    57,
      60,    63,    68,    70,    72,    74,    76,    78,    80,    82,
      87,    89,    93,    97,   101,   103,   107,   111,   113,   117,
     121,   123,   127,   131,   135,   139,   141,   145,   149,   151,
     155,   157,   161,   163,   167,   169,   173,   175,   179,   181,
     187,   189,   193,   195,   197,   199,   201,   203,   205,   207,
     209,   211,   213,   215,   217,   221,   223,   226,   230,   232,
     235,   237,   240,   242,   245,   247,   251,   253,   257,   259,
     261,   263,   265,   267,   269,   271,   273,   275,   277,   279,
     281,   283,   285,   287,   289,   291,   297,   302,   305,   307,
     309,   311,   314,   318,   321,   323,   326,   328,   330,   334,
     336,   339,   343,   348,   354,   357,   359,   363,   365,   369,
     371,   373,   376,   378,   380,   384,   389,   393,   398,   403,
     407,   409,   412,   415,   419,   421,   424,   426,   430,   432,
     436,   439,   442,   444,   446,   450,   452,   455,   457,   459,
     462,   466,   469,   473,   477,   482,   485,   489,   493,   498,
     500,   504,   509,   511,   515,   517,   519,   521,   523,   525,
     527,   531,   536,   540,   543,   547,   551,   556,   558,   561,
     563,   566,   568,   571,   577,   585,   591,   597,   605,   612,
     620,   624,   627,   630,   633,   637,   639,   642,   644,   646,
     651,   655,   659
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     146,     0,    -1,     3,    -1,     4,    -1,     5,    -1,    61,
     105,    62,    -1,    86,    -1,    87,    63,   105,    64,    -1,
      87,    61,    62,    -1,    87,    61,    88,    62,    -1,    87,
      65,     3,    -1,    87,     7,     3,    -1,    87,     8,    -1,
      87,     9,    -1,   103,    -1,    88,    66,   103,    -1,    87,
      -1,     8,    89,    -1,     9,    89,    -1,    90,    91,    -1,
       6,    89,    -1,     6,    61,   132,    62,    -1,    67,    -1,
      68,    -1,    69,    -1,    70,    -1,    71,    -1,    72,    -1,
      89,    -1,    61,   132,    62,    91,    -1,    91,    -1,    92,
      68,    91,    -1,    92,    73,    91,    -1,    92,    74,    91,
      -1,    92,    -1,    93,    69,    92,    -1,    93,    70,    92,
      -1,    93,    -1,    94,    10,    93,    -1,    94,    11,    93,
      -1,    94,    -1,    95,    75,    94,    -1,    95,    76,    94,
      -1,    95,    12,    94,    -1,    95,    13,    94,    -1,    95,
      -1,    96,    14,    95,    -1,    96,    15,    95,    -1,    96,
      -1,    97,    67,    96,    -1,    97,    -1,    98,    77,    97,
      -1,    98,    -1,    99,    78,    98,    -1,    99,    -1,   100,
      16,    99,    -1,   100,    -1,   101,    17,   100,    -1,   101,
      -1,   101,    79,   105,    80,   102,    -1,   102,    -1,    89,
     104,   103,    -1,    81,    -1,    18,    -1,    19,    -1,    20,
      -1,    21,    -1,    22,    -1,    23,    -1,    24,    -1,    25,
      -1,    26,    -1,    27,    -1,   103,    -1,   105,    66,   103,
      -1,   102,    -1,   108,    82,    -1,   108,   109,    82,    -1,
     111,    -1,   111,   108,    -1,   112,    -1,   112,   108,    -1,
     123,    -1,   123,   108,    -1,   110,    -1,   109,    66,   110,
      -1,   124,    -1,   124,    81,   135,    -1,    29,    -1,    30,
      -1,    31,    -1,    32,    -1,    33,    -1,    44,    -1,    34,
      -1,    35,    -1,    36,    -1,    37,    -1,    40,    -1,    41,
      -1,    38,    -1,    39,    -1,   113,    -1,   120,    -1,    28,
      -1,   114,     3,    83,   115,    84,    -1,   114,    83,   115,
      84,    -1,   114,     3,    -1,    45,    -1,    46,    -1,   116,
      -1,   115,   116,    -1,   117,   118,    82,    -1,   112,   117,
      -1,   112,    -1,   123,   117,    -1,   123,    -1,   119,    -1,
     118,    66,   119,    -1,   124,    -1,    80,   106,    -1,   124,
      80,   106,    -1,    47,    83,   121,    84,    -1,    47,     3,
      83,   121,    84,    -1,    47,     3,    -1,   122,    -1,   121,
      66,   122,    -1,     3,    -1,     3,    81,   106,    -1,    42,
      -1,    43,    -1,   126,   125,    -1,   125,    -1,     3,    -1,
      61,   124,    62,    -1,   125,    63,   106,    64,    -1,   125,
      63,    64,    -1,   125,    61,   128,    62,    -1,   125,    61,
     131,    62,    -1,   125,    61,    62,    -1,    68,    -1,    68,
     127,    -1,    68,   126,    -1,    68,   127,   126,    -1,   123,
      -1,   127,   123,    -1,   129,    -1,   129,    66,    48,    -1,
     130,    -1,   129,    66,   130,    -1,   108,   124,    -1,   108,
     133,    -1,   108,    -1,     3,    -1,   131,    66,     3,    -1,
     117,    -1,   117,   133,    -1,   126,    -1,   134,    -1,   126,
     134,    -1,    61,   133,    62,    -1,    63,    64,    -1,    63,
     106,    64,    -1,   134,    63,    64,    -1,   134,    63,   106,
      64,    -1,    61,    62,    -1,    61,   128,    62,    -1,   134,
      61,    62,    -1,   134,    61,   128,    62,    -1,   103,    -1,
      83,   136,    84,    -1,    83,   136,    66,    84,    -1,   135,
      -1,   136,    66,   135,    -1,   138,    -1,   139,    -1,   142,
      -1,   143,    -1,   144,    -1,   145,    -1,     3,    80,   137,
      -1,    49,   106,    80,   137,    -1,    50,    80,   137,    -1,
      83,    84,    -1,    83,   141,    84,    -1,    83,   140,    84,
      -1,    83,   140,   141,    84,    -1,   107,    -1,   140,   107,
      -1,   137,    -1,   141,   137,    -1,    82,    -1,   105,    82,
      -1,    51,    61,   105,    62,   137,    -1,    51,    61,   105,
      62,   137,    52,   137,    -1,    53,    61,   105,    62,   137,
      -1,    54,    61,   105,    62,   137,    -1,    55,   137,    54,
      61,   105,    62,    82,    -1,    56,    61,   142,   142,    62,
     137,    -1,    56,    61,   142,   142,   105,    62,   137,    -1,
      57,     3,    82,    -1,    58,    82,    -1,    59,    82,    -1,
      60,    82,    -1,    60,   105,    82,    -1,   147,    -1,   146,
     147,    -1,   148,    -1,   107,    -1,   108,   124,   140,   139,
      -1,   108,   124,   139,    -1,   124,   140,   139,    -1,   124,
     139,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    49,    49,    53,    58,    63,    73,    78,    83,    89,
     104,   109,   114,   119,   127,   131,   139,   143,   148,   153,
     158,   163,   171,   176,   181,   186,   191,   196,   204,   208,
     216,   222,   228,   234,   243,   247,   253,   262,   266,   272,
     281,   285,   294,   302,   310,   321,   325,   331,   340,   344,
     352,   356,   364,   368,   376,   380,   388,   392,   400,   404,
     412,   417,   426,   430,   434,   438,   442,   446,   450,   454,
     458,   462,   466,   473,   477,   485,   492,   497,   505,   509,
     514,   518,   523,   527,   535,   539,   547,   551,   559,   563,
     567,   571,   575,   582,   586,   590,   594,   598,   602,   606,
     610,   614,   618,   622,   626,   633,   638,   643,   651,   655,
     662,   666,   674,   682,   687,   691,   696,   703,   707,   715,
     719,   724,   732,   737,   742,   750,   754,   762,   766,   774,
     778,   786,   805,   826,   830,   835,   840,   845,   850,   855,
     863,   867,   872,   877,   885,   889,   898,   902,   910,   914,
     918,   923,   928,   935,   939,   947,   951,   959,   963,   967,
     975,   980,   984,   989,   994,   999,  1003,  1008,  1013,  1021,
    1025,  1030,  1038,  1042,  1050,  1054,  1058,  1062,  1066,  1070,
    1077,  1082,  1087,  1095,  1099,  1104,  1109,  1117,  1122,  1130,
    1134,  1142,  1146,  1154,  1159,  1164,  1172,  1177,  1182,  1187,
    1195,  1200,  1204,  1208,  1212,  1227,  1231,  1239,  1243,  1252,
    1260,  1268,  1276
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP",
  "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "TYPE_NAME", "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER", "CHAR",
  "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "CONST",
  "VOLATILE", "VOID", "STRUCT", "UNION", "ENUM", "ELLIPSIS", "CASE",
  "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "'('", "')'", "'['", "']'", "'.'", "','",
  "'&'", "'*'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'",
  "'^'", "'|'", "'?'", "':'", "'='", "';'", "'{'", "'}'", "$accept",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement", "labeled_statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,    40,    41,    91,    93,    46,    44,    38,    42,    43,
      45,   126,    33,    47,    37,    60,    62,    94,   124,    63,
      58,    61,    59,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    85,    86,    86,    86,    86,    87,    87,    87,    87,
      87,    87,    87,    87,    88,    88,    89,    89,    89,    89,
      89,    89,    90,    90,    90,    90,    90,    90,    91,    91,
      92,    92,    92,    92,    93,    93,    93,    94,    94,    94,
      95,    95,    95,    95,    95,    96,    96,    96,    97,    97,
      98,    98,    99,    99,   100,   100,   101,   101,   102,   102,
     103,   103,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   105,   105,   106,   107,   107,   108,   108,
     108,   108,   108,   108,   109,   109,   110,   110,   111,   111,
     111,   111,   111,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   113,   113,   113,   114,   114,
     115,   115,   116,   117,   117,   117,   117,   118,   118,   119,
     119,   119,   120,   120,   120,   121,   121,   122,   122,   123,
     123,   124,   124,   125,   125,   125,   125,   125,   125,   125,
     126,   126,   126,   126,   127,   127,   128,   128,   129,   129,
     130,   130,   130,   131,   131,   132,   132,   133,   133,   133,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   135,
     135,   135,   136,   136,   137,   137,   137,   137,   137,   137,
     138,   138,   138,   139,   139,   139,   139,   140,   140,   141,
     141,   142,   142,   143,   143,   143,   144,   144,   144,   144,
     145,   145,   145,   145,   145,   146,   146,   147,   147,   148,
     148,   148,   148
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       3,     3,     2,     2,     1,     3,     1,     2,     2,     2,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     5,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     2,     3,     1,     2,
       1,     2,     1,     2,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     4,     2,     1,     1,
       1,     2,     3,     2,     1,     2,     1,     1,     3,     1,
       2,     3,     4,     5,     2,     1,     3,     1,     3,     1,
       1,     2,     1,     1,     3,     4,     3,     4,     4,     3,
       1,     2,     2,     3,     1,     2,     1,     3,     1,     3,
       2,     2,     1,     1,     3,     1,     2,     1,     1,     2,
       3,     2,     3,     3,     4,     2,     3,     3,     4,     1,
       3,     4,     1,     3,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     2,     3,     3,     4,     1,     2,     1,
       2,     1,     2,     5,     7,     5,     5,     7,     6,     7,
       3,     2,     2,     2,     3,     1,     2,     1,     1,     4,
       3,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   133,   104,    88,    89,    90,    91,    92,    94,    95,
      96,    97,   100,   101,    98,    99,   129,   130,    93,   108,
     109,     0,     0,   140,   208,     0,    78,    80,   102,     0,
     103,    82,     0,   132,     0,     0,   205,   207,   124,     0,
       0,   144,   142,   141,    76,     0,    84,    86,    79,    81,
     107,     0,    83,     0,   187,     0,   212,     0,     0,     0,
     131,     1,   206,     0,   127,     0,   125,   134,   145,   143,
       0,    77,     0,   210,     0,     0,   114,     0,   110,     0,
     116,     2,     3,     4,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    22,
      23,    24,    25,    26,    27,   191,   183,     6,    16,    28,
       0,    30,    34,    37,    40,    45,    48,    50,    52,    54,
      56,    58,    60,    73,     0,   189,   174,   175,     0,     0,
     176,   177,   178,   179,    86,   188,   211,   153,   139,   152,
       0,   146,   148,     0,     2,   136,    28,    75,     0,     0,
       0,     0,   122,    85,     0,   169,    87,   209,     0,   113,
     106,   111,     0,     0,   117,   119,   115,     0,     0,    20,
       0,    17,    18,     0,     0,     0,     0,     0,     0,     0,
       0,   201,   202,   203,     0,     0,   155,     0,     0,    12,
      13,     0,     0,     0,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    62,     0,    19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   192,   185,     0,
     184,   190,     0,     0,   150,   157,   151,   158,   137,     0,
     138,     0,   135,   123,   128,   126,   172,     0,   105,   120,
       0,   112,     0,   180,     0,     0,   182,     0,     0,     0,
       0,     0,   200,   204,     5,     0,   157,   156,     0,    11,
       8,     0,    14,     0,    10,    61,    31,    32,    33,    35,
      36,    38,    39,    43,    44,    41,    42,    46,    47,    49,
      51,    53,    55,    57,     0,    74,   186,   165,     0,     0,
     161,     0,   159,     0,     0,   147,   149,   154,     0,   170,
     118,   121,    21,   181,     0,     0,     0,     0,     0,    29,
       9,     0,     7,     0,   166,   160,   162,   167,     0,   163,
       0,   171,   173,   193,   195,   196,     0,     0,     0,    15,
      59,   168,   164,     0,     0,   198,     0,   194,   197,   199
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   107,   108,   271,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   205,
     124,   148,    54,    55,    45,    46,    26,    27,    28,    29,
      77,    78,    79,   163,   164,    30,    65,    66,    31,    32,
      33,    34,    43,   298,   141,   142,   143,   187,   299,   237,
     156,   247,   125,   126,   127,    57,   129,   130,   131,   132,
     133,    35,    36,    37
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -223
static const yytype_int16 yypact[] =
{
     969,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,     5,    42,     4,  -223,    31,  1254,  1254,  -223,    11,
    -223,  1254,  1101,    88,    26,   879,  -223,  -223,   -60,    51,
      14,  -223,  -223,     4,  -223,    38,  -223,  1081,  -223,  -223,
     -10,  1055,  -223,   278,  -223,    31,  -223,  1101,   408,   666,
      88,  -223,  -223,    51,    69,   -23,  -223,  -223,  -223,  -223,
      42,  -223,   542,  -223,  1101,  1055,  1055,  1004,  -223,    72,
    1055,   -12,  -223,  -223,   785,   806,   806,   830,    17,   123,
     129,   132,   524,   141,   109,   127,   134,   559,   645,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,   192,   274,
     830,  -223,   121,    36,   224,   116,   229,   151,   150,   158,
     236,    -2,  -223,  -223,    43,  -223,  -223,  -223,   348,   418,
    -223,  -223,  -223,  -223,   164,  -223,  -223,  -223,  -223,    18,
     198,   188,  -223,    16,  -223,  -223,  -223,  -223,   197,   -15,
     830,    51,  -223,  -223,   542,  -223,  -223,  -223,  1024,  -223,
    -223,  -223,   830,    76,  -223,   184,  -223,   524,   645,  -223,
     830,  -223,  -223,   190,   524,   830,   830,   830,   217,   596,
     191,  -223,  -223,  -223,   114,    49,    85,   212,   273,  -223,
    -223,   690,   830,   275,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,   830,  -223,   830,   830,   830,
     830,   830,   830,   830,   830,   830,   830,   830,   830,   830,
     830,   830,   830,   830,   830,   830,   830,  -223,  -223,   454,
    -223,  -223,   924,   715,  -223,    22,  -223,   165,  -223,  1233,
    -223,   282,  -223,  -223,  -223,  -223,  -223,    35,  -223,  -223,
      72,  -223,   830,  -223,   215,   524,  -223,    81,   120,   145,
     227,   596,  -223,  -223,  -223,  1157,   170,  -223,   830,  -223,
    -223,   146,  -223,     1,  -223,  -223,  -223,  -223,  -223,   121,
     121,    36,    36,   224,   224,   224,   224,   116,   116,   229,
     151,   150,   158,   236,   -50,  -223,  -223,  -223,   228,   240,
    -223,   225,   165,  1198,   736,  -223,  -223,  -223,   488,  -223,
    -223,  -223,  -223,  -223,   524,   524,   524,   830,   760,  -223,
    -223,   830,  -223,   830,  -223,  -223,  -223,  -223,   242,  -223,
     241,  -223,  -223,   239,  -223,  -223,   148,   524,   155,  -223,
    -223,  -223,  -223,   524,   244,  -223,   524,  -223,  -223,  -223
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -223,  -223,  -223,  -223,   -48,  -223,   -91,    37,    46,     8,
      48,   110,   119,   122,   118,   135,  -223,   -55,   -70,  -223,
     -38,   -54,     6,     0,  -223,   272,  -223,   -27,  -223,  -223,
     268,   -67,   -24,  -223,   108,  -223,   300,   213,    47,   -13,
     -29,    -3,  -223,   -57,  -223,   126,  -223,   199,  -122,  -222,
    -151,  -223,   -74,  -223,   156,   -25,   238,  -172,  -223,  -223,
    -223,  -223,   333,  -223
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      25,   140,   155,   246,   147,    60,    24,   261,    38,    40,
     161,   146,    47,   302,    50,   224,   226,   236,   178,   206,
      42,     1,    74,    63,    76,     1,    48,    49,   128,     1,
     323,    52,   147,   173,     1,    25,   169,   171,   172,   146,
      69,    24,   134,   151,   302,     1,    16,    17,    76,    76,
      76,   151,   159,    76,    64,   231,   166,   134,   139,   184,
     185,   152,   146,   135,   267,   322,   165,   226,   167,   243,
      41,    76,    23,    75,   186,     1,    67,   225,   240,   232,
     135,   233,   241,   232,   155,   233,    23,    22,    39,   318,
      68,   161,    22,   253,    51,   147,   244,   174,    80,    23,
     256,   308,   146,    22,    70,   210,   211,   147,   249,   226,
      23,   264,   180,    44,   146,   226,   276,   277,   278,   309,
      71,   272,    80,    80,    80,   227,   234,    80,   214,   215,
     185,    76,   185,    22,   135,   275,   235,   257,   258,   259,
      23,    76,   250,   314,   186,    80,   265,   226,   233,    58,
     150,    59,   162,    23,   273,   231,   295,   332,   251,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   319,   147,   301,
     226,   313,   315,   266,   175,   146,   226,   294,    56,   207,
     176,   216,   217,   177,   208,   209,   263,   147,   311,   188,
     189,   190,   179,    73,   146,    80,    60,   316,   320,   181,
     344,   226,   321,   136,   226,    80,   182,   346,   220,    40,
     146,   226,   283,   284,   285,   286,   303,   221,   304,   235,
     157,   265,   139,   233,   212,   213,   222,   165,   155,   139,
     333,   334,   335,   218,   219,    72,   328,   279,   280,   147,
     330,   339,   223,   191,   239,   192,   146,   193,   281,   282,
     238,   242,   266,   345,   252,   139,   287,   288,   340,   347,
     255,   260,   349,   262,   268,   146,   269,   312,   274,   336,
     338,    81,    82,    83,    84,   307,    85,    86,   317,   326,
     324,   343,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   325,   139,   341,   342,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,   348,    87,    88,    89,
     289,    90,    91,    92,    93,    94,    95,    96,    97,    98,
     290,   292,   153,   158,   291,    99,   100,   101,   102,   103,
     104,    81,    82,    83,    84,   204,    85,    86,   310,   293,
     105,    53,   106,   149,   245,   306,   229,   254,    62,     0,
       0,     0,     0,     0,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,    87,    88,    89,
       0,    90,    91,    92,    93,    94,    95,    96,    97,    98,
       0,   137,     0,     0,     0,    99,   100,   101,   102,   103,
     104,    81,    82,    83,    84,     0,    85,    86,     0,     0,
     105,    53,   228,     0,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,    81,    82,    83,
      84,     0,    85,    86,     0,     0,     0,    87,    88,    89,
     138,    90,    91,    92,    93,    94,    95,    96,    97,    98,
       0,     0,     0,     0,     0,    99,   100,   101,   102,   103,
     104,   144,    82,    83,    84,     0,    85,    86,     0,     0,
     105,    53,   230,    87,    88,    89,     0,    90,    91,    92,
      93,    94,    95,    96,    97,    98,     0,     0,     0,     0,
       0,    99,   100,   101,   102,   103,   104,    81,    82,    83,
      84,     0,    85,    86,     0,     0,   105,    53,   296,     0,
       0,     0,     0,     0,     0,   144,    82,    83,    84,    98,
      85,    86,     0,     0,     0,    99,   100,   101,   102,   103,
     104,     0,   144,    82,    83,    84,     0,    85,    86,     0,
       0,   154,   331,    87,    88,    89,     0,    90,    91,    92,
      93,    94,    95,    96,    97,    98,     0,     0,     0,     0,
       0,    99,   100,   101,   102,   103,   104,     0,     0,   144,
      82,    83,    84,    98,    85,    86,   105,    53,     0,    99,
     100,   101,   102,   103,   104,     0,     0,     0,     0,     0,
      98,     0,     0,     0,     0,   154,    99,   100,   101,   102,
     103,   104,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   183,     0,     0,     0,     0,     0,     0,   144,    82,
      83,    84,     0,    85,    86,     0,     0,    98,     0,     0,
       0,     0,     0,    99,   100,   101,   102,   103,   104,   144,
      82,    83,    84,     2,    85,    86,     0,     0,   105,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,   144,    82,    83,    84,     0,    85,    86,
       0,     0,     0,     0,     0,     0,    98,     0,     0,     0,
       0,     0,    99,   100,   101,   102,   103,   104,   144,    82,
      83,    84,     0,    85,    86,     0,     0,    98,     0,     0,
     145,     0,     0,    99,   100,   101,   102,   103,   104,   144,
      82,    83,    84,     0,    85,    86,     0,     0,     0,     0,
       0,    98,   270,     0,     0,     0,     0,    99,   100,   101,
     102,   103,   104,   144,    82,    83,    84,     0,    85,    86,
       0,     0,     0,     0,     0,     0,    98,     0,     0,   300,
       0,     0,    99,   100,   101,   102,   103,   104,   144,    82,
      83,    84,     0,    85,    86,     0,     0,    98,     0,     0,
     329,     0,     0,    99,   100,   101,   102,   103,   104,   144,
      82,    83,    84,     0,    85,    86,     0,     0,     0,     0,
       0,    98,   337,     0,     0,     0,     0,    99,   100,   101,
     102,   103,   104,   144,    82,    83,    84,     0,    85,    86,
       0,     0,     0,     0,     0,     0,   168,     0,     0,     0,
       0,     0,    99,   100,   101,   102,   103,   104,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   170,     0,     0,
       0,     0,     0,    99,   100,   101,   102,   103,   104,    61,
       0,     0,     1,     0,     0,     0,     0,     0,     0,     0,
       0,    98,     0,     0,     0,     0,     0,    99,   100,   101,
     102,   103,   104,     0,     0,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      22,     0,     0,     0,     0,     0,     0,    23,     0,     0,
       0,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   232,   297,   233,     0,     0,
       0,     0,    23,     0,     0,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      22,     0,     2,     0,     0,     0,     0,    23,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     2,     0,     0,     0,     0,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     0,     0,     0,     0,   160,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,     0,   248,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    72,     0,    53,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    53,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   265,   297,
     233,     0,     0,     0,     0,    23,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     327,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,   305,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    58,    72,   154,    59,    34,     0,   179,     3,    22,
      77,    59,    25,   235,     3,    17,    66,   139,    92,   110,
      23,     3,    47,    83,    51,     3,    26,    27,    53,     3,
      80,    31,    87,    87,     3,    35,    84,    85,    86,    87,
      43,    35,    55,    66,   266,     3,    42,    43,    75,    76,
      77,    66,    76,    80,     3,   129,    80,    70,    58,    97,
      98,    84,   110,    57,   186,    64,    79,    66,    80,    84,
      23,    98,    68,    83,    98,     3,    62,    79,    62,    61,
      74,    63,    66,    61,   154,    63,    68,    61,    83,   261,
      43,   158,    61,   167,    83,   150,   150,    80,    51,    68,
     174,    66,   150,    61,    66,    69,    70,   162,   162,    66,
      68,    62,     3,    82,   162,    66,   207,   208,   209,    84,
      82,   191,    75,    76,    77,    82,   139,    80,    12,    13,
     168,   158,   170,    61,   128,   205,   139,   175,   176,   177,
      68,   168,    66,    62,   168,    98,    61,    66,    63,    61,
      81,    63,    80,    68,   192,   229,   226,   308,    82,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   268,   233,   233,
      66,   255,    62,   186,    61,   233,    66,   225,    32,    68,
      61,    75,    76,    61,    73,    74,    82,   252,   252,     7,
       8,     9,    61,    47,   252,   158,   235,    62,    62,    82,
      62,    66,    66,    57,    66,   168,    82,    62,    67,   232,
     268,    66,   214,   215,   216,   217,    61,    77,    63,   232,
      74,    61,   232,    63,    10,    11,    78,   250,   308,   239,
     314,   315,   316,    14,    15,    81,   303,   210,   211,   304,
     304,   321,    16,    61,    66,    63,   304,    65,   212,   213,
      62,    64,   265,   337,    80,   265,   218,   219,   323,   343,
      80,    54,   346,    82,    62,   323,     3,    62,     3,   317,
     318,     3,     4,     5,     6,     3,     8,     9,    61,    64,
      62,    52,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    62,   303,    62,    64,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    82,    49,    50,    51,
     220,    53,    54,    55,    56,    57,    58,    59,    60,    61,
     221,   223,    70,    75,   222,    67,    68,    69,    70,    71,
      72,     3,     4,     5,     6,    81,     8,     9,   250,   224,
      82,    83,    84,    63,   151,   239,   128,   168,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    51,
      -1,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      -1,     3,    -1,    -1,    -1,    67,    68,    69,    70,    71,
      72,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      82,    83,    84,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,    49,    50,    51,
      62,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      -1,    -1,    -1,    -1,    -1,    67,    68,    69,    70,    71,
      72,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      82,    83,    84,    49,    50,    51,    -1,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    -1,    -1,    -1,    -1,
      -1,    67,    68,    69,    70,    71,    72,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    82,    83,    84,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    61,
       8,     9,    -1,    -1,    -1,    67,    68,    69,    70,    71,
      72,    -1,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    83,    84,    49,    50,    51,    -1,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    -1,    -1,    -1,    -1,
      -1,    67,    68,    69,    70,    71,    72,    -1,    -1,     3,
       4,     5,     6,    61,     8,     9,    82,    83,    -1,    67,
      68,    69,    70,    71,    72,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    -1,    -1,    -1,    83,    67,    68,    69,    70,
      71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    61,    -1,    -1,
      -1,    -1,    -1,    67,    68,    69,    70,    71,    72,     3,
       4,     5,     6,    28,     8,     9,    -1,    -1,    82,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    67,    68,    69,    70,    71,    72,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    61,    -1,    -1,
      64,    -1,    -1,    67,    68,    69,    70,    71,    72,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,    61,    62,    -1,    -1,    -1,    -1,    67,    68,    69,
      70,    71,    72,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    64,
      -1,    -1,    67,    68,    69,    70,    71,    72,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    61,    -1,    -1,
      64,    -1,    -1,    67,    68,    69,    70,    71,    72,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,    61,    62,    -1,    -1,    -1,    -1,    67,    68,    69,
      70,    71,    72,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    67,    68,    69,    70,    71,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,
      -1,    -1,    -1,    67,    68,    69,    70,    71,    72,     0,
      -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,
      70,    71,    72,    -1,    -1,    -1,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,
      -1,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    63,    -1,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    28,    -1,    -1,    -1,    -1,    68,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    28,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    84,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    -1,    -1,    -1,    -1,    84,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
      63,    -1,    -1,    -1,    -1,    68,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    61,    68,   107,   108,   111,   112,   113,   114,
     120,   123,   124,   125,   126,   146,   147,   148,     3,    83,
     124,   123,   126,   127,    82,   109,   110,   124,   108,   108,
       3,    83,   108,    83,   107,   108,   139,   140,    61,    63,
     125,     0,   147,    83,     3,   121,   122,    62,   123,   126,
      66,    82,    81,   139,   140,    83,   112,   115,   116,   117,
     123,     3,     4,     5,     6,     8,     9,    49,    50,    51,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    67,
      68,    69,    70,    71,    72,    82,    84,    86,    87,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   105,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   124,   107,   139,     3,    62,   108,
     128,   129,   130,   131,     3,    64,    89,   102,   106,   121,
      81,    66,    84,   110,    83,   103,   135,   139,   115,   117,
      84,   116,    80,   118,   119,   124,   117,    80,    61,    89,
      61,    89,    89,   106,    80,    61,    61,    61,   137,    61,
       3,    82,    82,    82,   105,   105,   117,   132,     7,     8,
       9,    61,    63,    65,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    81,   104,    91,    68,    73,    74,
      69,    70,    10,    11,    12,    13,    75,    76,    14,    15,
      67,    77,    78,    16,    17,    79,    66,    82,    84,   141,
      84,   137,    61,    63,   124,   126,   133,   134,    62,    66,
      62,    66,    64,    84,   106,   122,   135,   136,    84,   106,
      66,    82,    80,   137,   132,    80,   137,   105,   105,   105,
      54,   142,    82,    82,    62,    61,   126,   133,    62,     3,
      62,    88,   103,   105,     3,   103,    91,    91,    91,    92,
      92,    93,    93,    94,    94,    94,    94,    95,    95,    96,
      97,    98,    99,   100,   105,   103,    84,    62,   128,   133,
      64,   106,   134,    61,    63,    48,   130,     3,    66,    84,
     119,   106,    62,   137,    62,    62,    62,    61,   142,    91,
      62,    66,    64,    80,    62,    62,    64,    62,   128,    64,
     106,    84,   135,   137,   137,   137,   105,    62,   105,   103,
     102,    62,    64,    52,    62,   137,    62,   137,    82,   137
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
#line 50 "c.y"
    {
	Copy((yyval.s), yylval.s);
}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 54 "c.y"
    {
	
	Copy((yyval.s), yylval.s);
}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 59 "c.y"
    {
	
	Copy((yyval.s), yylval.s);
}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 64 "c.y"
    {
	sprintf(temp, "(%s)", (yyvsp[(2) - (3)].s));
	Copy((yyval.s), temp);
	strcpy((yyval.s), temp);
}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 74 "c.y"
    {
	
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 79 "c.y"
    {
	sprintf(temp, "%s [%s]", (yyvsp[(1) - (4)].s), (yyvsp[(3) - (4)].s));
	Copy((yyval.s), temp);
}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 84 "c.y"
    {
	sprintf(temp, "%s()", (yyvsp[(1) - (3)].s));
	Copy((yyval.s), temp);
	strcpy((yyval.s), temp);
}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 90 "c.y"
    {
	sprintf(temp, "%s(%s)", (yyvsp[(1) - (4)].s), (yyvsp[(3) - (4)].s));
	// Elegxoume an h synarthsh einai anadromiki
	isRecursive += checkRecursive(functionName, (yyvsp[(1) - (4)].s));
	Copy((yyval.s), temp);
	// Antigrafh tou kommatiou ths anadromhs, sth metablhth
	// gia na diagrafei h sunarthsh kai na antikatasta8ei
	// apo thn s metablhth ths SL
	strcpy(rFunctionDelete, temp);
	strcpy((yyval.s), temp);
	
	// Efoson einai anadromh, tote metatrepoume to bhma apo string se int
	stepN = atoi(step);
}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 105 "c.y"
    {
	sprintf(temp, "%s.%s", (yyvsp[(1) - (3)].s), yylval.s);
	Copy((yyval.s), temp);
}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 110 "c.y"
    {
	sprintf(temp, "%s->%s", (yyvsp[(1) - (3)].s), yylval.s);
	Copy((yyval.s), temp);
}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 115 "c.y"
    {
	sprintf(temp, "%s++", (yyvsp[(1) - (2)].s));
	Copy((yyval.s), temp);
}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 120 "c.y"
    {
	sprintf(temp, "%s--", (yyvsp[(1) - (2)].s));
	Copy((yyval.s), temp);
}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 128 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 132 "c.y"
    {
	sprintf(temp, "%s, %s", (yyvsp[(1) - (3)].s), (yyvsp[(3) - (3)].s));
	Copy((yyval.s), temp);
}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 140 "c.y"
    {

}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 144 "c.y"
    {
	sprintf(temp, "++%s", (yyvsp[(2) - (2)].s));
	Copy((yyval.s), temp);
}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 149 "c.y"
    {
	sprintf(temp, "--%s", (yyvsp[(2) - (2)].s));
	Copy((yyval.s), temp);
}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 154 "c.y"
    {
	sprintf(temp, "%s%s", (yyvsp[(1) - (2)].s), (yyvsp[(2) - (2)].s));
	Copy((yyval.s), temp);
}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 159 "c.y"
    {
	sprintf(temp, "sizeof %s", (yyvsp[(2) - (2)].s));
	Copy((yyval.s), temp);
}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 164 "c.y"
    {
	sprintf(temp, "sizeof(%s)", (yyvsp[(3) - (4)].s));
	Copy((yyval.s), temp);
}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 172 "c.y"
    {
	sprintf(temp, "&");
	Copy((yyval.s), temp);
}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 177 "c.y"
    {
	sprintf(temp, "*");
	Copy((yyval.s), temp);
}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 182 "c.y"
    {
	sprintf(temp, "+");
	Copy((yyval.s), temp);
}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 187 "c.y"
    {
	sprintf(temp, "-");
	Copy((yyval.s), temp);
}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 192 "c.y"
    {
	sprintf(temp, "~");
	Copy((yyval.s), temp);
}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 197 "c.y"
    {
	sprintf(temp, "!");
	Copy((yyval.s), temp);
}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 205 "c.y"
    {

}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 209 "c.y"
    {
	sprintf(temp, "(%s)%s", (yyvsp[(2) - (4)].s), (yyvsp[(4) - (4)].s));
	Copy((yyval.s), temp);
}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 217 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
	// Apo8hkeuoume to bhma se mia metablhth string
	strcpy(step, (yyvsp[(1) - (1)].s));
}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 223 "c.y"
    {
	sprintf(temp, "%s * %s", (yyvsp[(1) - (3)].s), (yyvsp[(3) - (3)].s));
	Copy((yyval.s), temp);
	strcpy((yyval.s), temp);
}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 229 "c.y"
    {
	sprintf(temp, "%s / %s", (yyvsp[(1) - (3)].s), (yyvsp[(3) - (3)].s));
	Copy((yyval.s), temp);
	strcpy((yyval.s), temp);
}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 235 "c.y"
    {
	sprintf(temp, "%s %%% s", (yyvsp[(1) - (3)].s), (yyvsp[(3) - (3)].s));
	Copy((yyval.s), temp);
	strcpy((yyval.s), temp);
}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 244 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 248 "c.y"
    {
	sprintf(temp, "%s + %s", (yyvsp[(1) - (3)].s), (yyvsp[(3) - (3)].s));
	Copy((yyval.s), temp);
	strcpy((yyval.s), temp);
}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 254 "c.y"
    {
	sprintf(temp, "%s - %s", (yyvsp[(1) - (3)].s), (yyvsp[(3) - (3)].s));
	Copy((yyval.s), temp);
	strcpy((yyval.s), temp);
}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 263 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));	
}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 267 "c.y"
    {
	sprintf(temp, "%s<<%s", (yyvsp[(1) - (3)].s), (yyvsp[(3) - (3)].s));
	Copy((yyval.s), temp);
	strcpy((yyval.s), temp);
}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 273 "c.y"
    {
	sprintf(temp, "%s>>%s", (yyvsp[(1) - (3)].s), (yyvsp[(3) - (3)].s));
	Copy((yyval.s), temp);
	strcpy((yyval.s), temp);
}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 282 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 286 "c.y"
    {
	sprintf(temp, "%s < %s", (yyvsp[(1) - (3)].s), (yyvsp[(3) - (3)].s));
	// Metatroph tou (x < N) se maxN
	maxN = atoi((yyvsp[(3) - (3)].s));
	Copy((yyval.s), temp);
	strcpy((yyval.s), temp);
	//printf("--> %s\n", $$);
}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 295 "c.y"
    {
	sprintf(temp, "%s > %s", (yyvsp[(1) - (3)].s), (yyvsp[(3) - (3)].s));
	// Metatroph tou (x > N) se minN
	minN = atoi((yyvsp[(3) - (3)].s));	
	Copy((yyval.s), temp);
	strcpy((yyval.s), temp);
}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 303 "c.y"
    {
	sprintf(temp, "%s <= %s", (yyvsp[(1) - (3)].s), (yyvsp[(3) - (3)].s));
	Copy((yyval.s), temp);
	// Metatroph tou (x < N) se maxN
	maxN = atoi((yyvsp[(3) - (3)].s))+1;	
	strcpy((yyval.s), temp);
}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 311 "c.y"
    {
	sprintf(temp, "%s >= %s", (yyvsp[(1) - (3)].s), (yyvsp[(3) - (3)].s));
	Copy((yyval.s), temp);
	// Metatroph tou (x > N) se minN
	minN = atoi((yyvsp[(3) - (3)].s))-1;		
	strcpy((yyval.s), temp);
}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 322 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 326 "c.y"
    {
	sprintf(temp, "%s == %s", (yyvsp[(1) - (3)].s), (yyvsp[(3) - (3)].s));
	Copy((yyval.s), temp);
	strcpy((yyval.s), temp);
}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 332 "c.y"
    {
	sprintf(temp, "%s != %s", (yyvsp[(1) - (3)].s), (yyvsp[(3) - (3)].s));
	Copy((yyval.s), temp);
	strcpy((yyval.s), temp);
}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 341 "c.y"
    {	
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 345 "c.y"
    {
	sprintf(temp, "%s & %s", (yyvsp[(1) - (3)].s), (yyvsp[(3) - (3)].s));
	Copy((yyval.s), temp);
}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 353 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 357 "c.y"
    {
	sprintf(temp, "%s ^ %s", (yyvsp[(1) - (3)].s), (yyvsp[(3) - (3)].s));
	Copy((yyval.s), temp);
}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 365 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 369 "c.y"
    {
	sprintf(temp, "%s | %s", (yyvsp[(1) - (3)].s), (yyvsp[(3) - (3)].s));
	Copy((yyval.s), temp);
}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 377 "c.y"
    {
	Copy((yyval.s), temp);
}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 381 "c.y"
    {
	sprintf(temp, "%s && %s", (yyvsp[(1) - (3)].s), (yyvsp[(3) - (3)].s));
	Copy((yyval.s), temp);
}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 389 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 393 "c.y"
    {
	sprintf(temp, "%s || %s", (yyvsp[(1) - (3)].s), (yyvsp[(3) - (3)].s));
	Copy((yyval.s), temp);
}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 401 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 405 "c.y"
    {
	sprintf(temp, "%s ? %s : %s", (yyvsp[(1) - (5)].s), (yyvsp[(3) - (5)].s), (yyvsp[(5) - (5)].s));
	Copy((yyval.s), temp);
}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 413 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
	strcpy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 418 "c.y"
    {
	sprintf(temp, "%s %s %s", (yyvsp[(1) - (3)].s), (yyvsp[(2) - (3)].s), (yyvsp[(3) - (3)].s));
	Copy((yyval.s), temp);
	strcpy((yyval.s), temp);
}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 427 "c.y"
    {
	Copy((yyval.s), "=");
}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 431 "c.y"
    {
	Copy((yyval.s), "*=");
}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 435 "c.y"
    {
	Copy((yyval.s), "/=");
}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 439 "c.y"
    {
	Copy((yyval.s), "%=");
}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 443 "c.y"
    {
	Copy((yyval.s), "+=");
}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 447 "c.y"
    {
	Copy((yyval.s), "-=");
}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 451 "c.y"
    {
	Copy((yyval.s), "<<=");
}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 455 "c.y"
    {
	Copy((yyval.s), ">>=");
}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 459 "c.y"
    {
	Copy((yyval.s), "&=");
}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 463 "c.y"
    {
	Copy((yyval.s), "^=");
}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 467 "c.y"
    {
	Copy((yyval.s), "|=");
}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 474 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 478 "c.y"
    {
	sprintf(temp, "%s, %s ", (yyvsp[(1) - (3)].s), (yyvsp[(3) - (3)].s));
	Copy((yyval.s), temp);
}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 486 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 493 "c.y"
    {
	sprintf(temp, "%s;", (yyvsp[(1) - (2)].s));
	Copy((yyval.s), temp);
}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 498 "c.y"
    {
	sprintf(temp, "%s %s;", (yyvsp[(1) - (3)].s), (yyvsp[(2) - (3)].s));
	Copy((yyval.s), temp);
}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 506 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 510 "c.y"
    {
	sprintf(temp, "%s %s ", (yyvsp[(1) - (2)].s), (yyvsp[(2) - (2)].s));
	Copy((yyval.s), temp);
}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 515 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 519 "c.y"
    {
	sprintf(temp, "%s %s ", (yyvsp[(1) - (2)].s), (yyvsp[(2) - (2)].s));
	Copy((yyval.s), temp);
}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 524 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 528 "c.y"
    {
	sprintf(temp, "%s %s ", (yyvsp[(1) - (2)].s), (yyvsp[(2) - (2)].s));
	Copy((yyval.s), temp);
}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 536 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 540 "c.y"
    {
	sprintf(temp, "%s, %s ", (yyvsp[(1) - (3)].s), (yyvsp[(3) - (3)].s));
	Copy((yyval.s), temp);
}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 548 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 552 "c.y"
    {
	sprintf(temp, "%s = %s ", (yyvsp[(1) - (3)].s), (yyvsp[(3) - (3)].s));
	Copy((yyval.s), temp);
}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 560 "c.y"
    {
	Copy((yyval.s), yylval.s);
}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 564 "c.y"
    {
	Copy((yyval.s), yylval.s);
}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 568 "c.y"
    {
	Copy((yyval.s), yylval.s);
}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 572 "c.y"
    {
	Copy((yyval.s), yylval.s);
}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 576 "c.y"
    {
	Copy((yyval.s), yylval.s);
}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 583 "c.y"
    {
	Copy((yyval.s), yylval.s);
}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 587 "c.y"
    {
	Copy((yyval.s), yylval.s);
}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 591 "c.y"
    {
	Copy((yyval.s), yylval.s);
}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 595 "c.y"
    {
	Copy((yyval.s), yylval.s);
}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 599 "c.y"
    {
	Copy((yyval.s), yylval.s);
}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 603 "c.y"
    {
	Copy((yyval.s), yylval.s);
}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 607 "c.y"
    {
	Copy((yyval.s), yylval.s);
}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 611 "c.y"
    {
	Copy((yyval.s), yylval.s);
}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 615 "c.y"
    {
	Copy((yyval.s), yylval.s);
}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 619 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 623 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 627 "c.y"
    {
	Copy((yyval.s), yylval.s);
}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 634 "c.y"
    {
	sprintf(temp, "%s %s (%s) ", (yyvsp[(1) - (5)].s), yylval.s, (yyvsp[(4) - (5)].s));
	Copy((yyval.s), temp);
}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 639 "c.y"
    {
	sprintf(temp, "%s (%s) ", (yyvsp[(1) - (4)].s), (yyvsp[(3) - (4)].s));
	Copy((yyval.s), temp);
}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 644 "c.y"
    {
	sprintf(temp, "%s %s ", (yyvsp[(1) - (2)].s), yylval.s);
	Copy((yyval.s), temp);
}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 652 "c.y"
    {
	Copy((yyval.s), yylval.s);
}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 656 "c.y"
    {
	Copy((yyval.s), yylval.s);
}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 663 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 667 "c.y"
    {
	sprintf(temp, "%s %s ", (yyvsp[(1) - (2)].s), (yyvsp[(2) - (2)].s));
	Copy((yyval.s), temp);
}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 675 "c.y"
    {
	sprintf(temp, "%s %s ;", (yyvsp[(1) - (3)].s), (yyvsp[(2) - (3)].s));
	Copy((yyval.s), temp);
}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 683 "c.y"
    {
	sprintf(temp, "%s %s ", (yyvsp[(1) - (2)].s), (yyvsp[(2) - (2)].s));
	Copy((yyval.s), temp);
}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 688 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 692 "c.y"
    {
	sprintf(temp, "%s %s ", (yyvsp[(1) - (2)].s), (yyvsp[(2) - (2)].s));
	Copy((yyval.s), temp);
}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 697 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 704 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 708 "c.y"
    {
	sprintf(temp, "%s, %s ", (yyvsp[(1) - (3)].s), (yyvsp[(3) - (3)].s));
	Copy((yyval.s), temp);
}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 716 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 720 "c.y"
    {
	sprintf(temp, ":%s ", (yyvsp[(2) - (2)].s));
	Copy((yyval.s), temp);
}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 725 "c.y"
    {
	sprintf(temp, "%s:%s ", (yyvsp[(1) - (3)].s), (yyvsp[(3) - (3)].s));
	Copy((yyval.s), temp);
}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 733 "c.y"
    {
	sprintf(temp, "enum {%s}", (yyvsp[(3) - (4)].s));
	Copy((yyval.s), temp);
}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 738 "c.y"
    {
	sprintf(temp, "enum %s {%s} ", yylval.s, (yyvsp[(4) - (5)].s));
	Copy((yyval.s), temp);
}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 743 "c.y"
    {
	sprintf(temp, "enum %s ", yylval.s);
	Copy((yyval.s), temp);
}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 751 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 755 "c.y"
    {
	sprintf(temp, "%s, %s", (yyvsp[(1) - (3)].s), (yyvsp[(3) - (3)].s));
	Copy((yyval.s), temp);
}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 763 "c.y"
    {
	Copy((yyval.s), yylval.s);
}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 767 "c.y"
    {
	sprintf(temp, "%s = s", yylval.s, (yyvsp[(3) - (3)].s));
	Copy((yyval.s), temp);
}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 775 "c.y"
    {
	Copy((yyval.s), "const");
}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 779 "c.y"
    {
	Copy((yyval.s), "volatile");
}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 787 "c.y"
    {
	sprintf(temp, "%s %s", (yyvsp[(1) - (2)].s), (yyvsp[(2) - (2)].s));
	// An diasxisoume ton declarator thn proth fora
	if (declaratorCounter == 0) {
		// Tote anaferomaste sth metablhth ths sunarthshs
		// kai thn antigrafoume sth rVariable
		strcpy(rVariable, (yyvsp[(2) - (2)].s));
		declaratorCounter++;
	}
	// Allios an th diasxisoume deuterh fora, 
	else if (declaratorCounter == 1) {
		// Tote koitame pros to onoma ths sunarthshs
		// kai to antigrafoume sto functionName
		strcpy(functionName, (yyvsp[(2) - (2)].s));
		declaratorCounter++;
	}	
	Copy((yyval.s), temp);
}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 806 "c.y"
    {
	// An diasxisoume ton declarator thn proth fora
	if (declaratorCounter == 0) {
		// Tote anaferomaste sth metablhth ths sunarthshs
		// kai thn antigrafoume sth rVariable
		strcpy(rVariable, (yyvsp[(1) - (1)].s));
		declaratorCounter++;
	}
	// Allios an th diasxisoume deuterh fora, 
	else if (declaratorCounter == 1) {
		// Tote koitame pros to onoma ths sunarthshs
		// kai to antigrafoume sto functionName
		strcpy(functionName, (yyvsp[(1) - (1)].s));
		declaratorCounter++;
	}
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 827 "c.y"
    {
	Copy((yyval.s), yylval.s);
}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 831 "c.y"
    {
	sprintf(temp, "(%s)", (yyvsp[(2) - (3)].s));
	Copy((yyval.s), temp);
}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 836 "c.y"
    {
	sprintf(temp, "%s [%s]", (yyvsp[(1) - (4)].s), (yyvsp[(3) - (4)].s));
	Copy((yyval.s), temp);
}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 841 "c.y"
    {
	sprintf(temp, "%s [ ]", (yyvsp[(1) - (3)].s));
	Copy((yyval.s), temp);
}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 846 "c.y"
    {
	sprintf(temp, "%s (%s)", (yyvsp[(1) - (4)].s), (yyvsp[(3) - (4)].s));
	Copy((yyval.s), temp);
}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 851 "c.y"
    {
	sprintf(temp, "%s (%s)", (yyvsp[(1) - (4)].s), (yyvsp[(3) - (4)].s));
	Copy((yyval.s), temp);
}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 856 "c.y"
    {
	sprintf(temp, "%s ()", (yyvsp[(1) - (3)].s));
	Copy((yyval.s), temp);
}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 864 "c.y"
    {
	Copy((yyval.s), "*");
}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 868 "c.y"
    {
	sprintf(temp, "*%s", (yyvsp[(2) - (2)].s));
	Copy((yyval.s), temp);
}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 873 "c.y"
    {
	sprintf(temp, "*%s", (yyvsp[(2) - (2)].s));
	Copy((yyval.s), temp);
}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 878 "c.y"
    {
	sprintf(temp, "*%s", (yyvsp[(2) - (3)].s));
	Copy((yyval.s), temp);
}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 886 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 890 "c.y"
    {
	sprintf(temp, "%s %s", (yyvsp[(1) - (2)].s), (yyvsp[(2) - (2)].s));
	Copy((yyval.s), temp);
}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 899 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 903 "c.y"
    {
	sprintf(temp, "%s,...", (yyvsp[(1) - (3)].s));
	Copy((yyval.s), temp);
}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 911 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 919 "c.y"
    {
	sprintf(temp, "%s %s", (yyvsp[(1) - (2)].s), (yyvsp[(2) - (2)].s));
	Copy((yyval.s), temp);
}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 924 "c.y"
    {
	sprintf(temp, "%s %s", (yyvsp[(1) - (2)].s), (yyvsp[(2) - (2)].s));
	Copy((yyval.s), temp);
}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 929 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 936 "c.y"
    {
	Copy((yyval.s), yylval.s);
}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 940 "c.y"
    {
	sprintf(temp, "%s, %s", (yyvsp[(1) - (3)].s), yylval.s);
	Copy((yyval.s), temp);
}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 948 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 952 "c.y"
    {
	sprintf(temp, "%s %s", (yyvsp[(1) - (2)].s), (yyvsp[(2) - (2)].s));
	Copy((yyval.s), temp);
}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 960 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 964 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 968 "c.y"
    {
	sprintf(temp, "%s s%s", (yyvsp[(1) - (2)].s), (yyvsp[(2) - (2)].s));
	Copy((yyval.s), temp);
}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 976 "c.y"
    {
	sprintf(temp, "(%s)", (yyvsp[(2) - (3)].s));
	Copy((yyval.s), temp);
}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 981 "c.y"
    {
	Copy((yyval.s), "[]");
}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 985 "c.y"
    {
	sprintf(temp, "[%s]", (yyvsp[(2) - (3)].s));
	Copy((yyval.s), temp);
}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 990 "c.y"
    {
	sprintf(temp, "%s []", (yyvsp[(1) - (3)].s));
	Copy((yyval.s), temp);
}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 995 "c.y"
    {
	sprintf(temp, "%s [%s]", (yyvsp[(1) - (4)].s), (yyvsp[(3) - (4)].s));
	Copy((yyval.s), temp);
}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 1000 "c.y"
    {
	Copy((yyval.s), "()");
}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 1004 "c.y"
    {
	sprintf(temp, "(%s)", (yyvsp[(2) - (3)].s));
	Copy((yyval.s), temp);
}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 1009 "c.y"
    {
	sprintf(temp, "%s ()", (yyvsp[(1) - (3)].s));
	Copy((yyval.s), temp);
}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 1014 "c.y"
    {
	sprintf(temp, "%s (%s)", (yyvsp[(1) - (4)].s), (yyvsp[(3) - (4)].s));
	Copy((yyval.s), temp);
}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 1022 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 1026 "c.y"
    {
	sprintf(temp, "{%s}", (yyvsp[(2) - (3)].s));
	Copy((yyval.s), temp);
}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 1031 "c.y"
    {
	sprintf(temp, "{%s, }", (yyvsp[(2) - (4)].s));
	Copy((yyval.s), temp);
}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 1039 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 1043 "c.y"
    {
	sprintf(temp, "%s, %s", (yyvsp[(1) - (3)].s), (yyvsp[(3) - (3)].s));
	Copy((yyval.s), temp);
}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 1051 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 1055 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 1059 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 1063 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 1067 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 1071 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 1078 "c.y"
    {
	sprintf(temp, "%s : %s", yylval, (yyvsp[(3) - (3)].s));
	Copy((yyval.s), temp);
}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 1083 "c.y"
    {
	sprintf(temp, "case %s : %s", (yyvsp[(2) - (4)].s), (yyvsp[(4) - (4)].s));
	Copy((yyval.s), temp);
}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 1088 "c.y"
    {
	sprintf(temp, "default : %s", (yyvsp[(3) - (3)].s));
	Copy((yyval.s), temp);
}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 1096 "c.y"
    {
	Copy((yyval.s), "{}");
}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 1100 "c.y"
    {
	sprintf(temp, "{%s}", (yyvsp[(2) - (3)].s));
	Copy((yyval.s), temp);
}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 1105 "c.y"
    {
	sprintf(temp, "{%s}", (yyvsp[(2) - (3)].s));
	Copy((yyval.s), temp);
}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 1110 "c.y"
    {
	sprintf(temp, "{%s %s}", (yyvsp[(2) - (4)].s), (yyvsp[(3) - (4)].s));
	Copy((yyval.s), temp);
}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 1118 "c.y"
    {
	sprintf(temp, "%s", (yyvsp[(1) - (1)].s));
	Copy((yyval.s), temp);
}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 1123 "c.y"
    {
	sprintf(temp, "%s %s", (yyvsp[(1) - (2)].s), (yyvsp[(2) - (2)].s));
	Copy((yyval.s), temp);
}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 1131 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 1135 "c.y"
    {
	sprintf(temp, "%s %s", (yyvsp[(1) - (2)].s), (yyvsp[(2) - (2)].s));
	Copy((yyval.s), temp);
}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 1143 "c.y"
    {
	Copy((yyval.s), ";");
}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 1147 "c.y"
    {
	sprintf(temp, "%s;", (yyvsp[(1) - (2)].s));
	Copy((yyval.s), temp);
}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 1155 "c.y"
    {
	sprintf(temp, "if (%s) \n\t %s", (yyvsp[(3) - (5)].s), (yyvsp[(5) - (5)].s));
	Copy((yyval.s), temp);
}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 1160 "c.y"
    {
	sprintf(temp, "if (%s) \n\t%s \nelse \n\t%s", (yyvsp[(3) - (7)].s), (yyvsp[(5) - (7)].s), (yyvsp[(7) - (7)].s));
	Copy((yyval.s), temp);
}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 1165 "c.y"
    {
	sprintf(temp, "switch(%s) %s", (yyvsp[(3) - (5)].s), (yyvsp[(5) - (5)].s));
	Copy((yyval.s), temp);
}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 1173 "c.y"
    {
	sprintf(temp, "while (%s) \n\t%s ", (yyvsp[(3) - (5)].s), (yyvsp[(5) - (5)].s));
	Copy((yyval.s), temp);
}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 1178 "c.y"
    {
	sprintf(temp, "do \n\t %s \nwhile(%s);", (yyvsp[(2) - (7)].s), (yyvsp[(5) - (7)].s));
	Copy((yyval.s), temp);
}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 1183 "c.y"
    {
	sprintf(temp, "for (%s %s) \n\t%s ", (yyvsp[(3) - (6)].s), (yyvsp[(4) - (6)].s), (yyvsp[(6) - (6)].s));
	Copy((yyval.s), temp);
}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 1188 "c.y"
    {
	sprintf(temp, "for (%s %s %s) \n\t%s ", (yyvsp[(3) - (7)].s), (yyvsp[(4) - (7)].s), (yyvsp[(5) - (7)].s), (yyvsp[(7) - (7)].s));
	Copy((yyval.s), temp);
}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 1196 "c.y"
    {
	sprintf(temp, "goto %s ;", yylval.s);
	Copy((yyval.s), temp);
}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 1201 "c.y"
    {
	Copy((yyval.s), "continue;");
}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 1205 "c.y"
    {
	Copy((yyval.s), "break;");
}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 1209 "c.y"
    {
	Copy((yyval.s), "return;");
}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 1213 "c.y"
    {
	sprintf(temp, "return %s ;", (yyvsp[(2) - (3)].s));
	// An h sunarthsh einai anadromikh, tote
	// sto expression exoume thn praxi ths anadromhs
	if (isRecursive == 1) {
		strcpy(rFunction, (yyvsp[(2) - (3)].s));
		isRecursive++;
	}
	Copy((yyval.s), temp);
	strcpy((yyval.s), temp);
}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 1228 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 1232 "c.y"
    {
	sprintf(temp, "%s %s", (yyvsp[(1) - (2)].s), (yyvsp[(2) - (2)].s));
	Copy((yyval.s), temp);
}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 1240 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 1244 "c.y"
    {
	Copy((yyval.s), (yyvsp[(1) - (1)].s));
}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 1253 "c.y"
    {
	
	sprintf(temp, "%s %s %s %s", (yyvsp[(1) - (4)].s), (yyvsp[(2) - (4)].s), (yyvsp[(3) - (4)].s), (yyvsp[(4) - (4)].s));
	Copy((yyval.s), temp);

	strcpy(functionName, (yyvsp[(2) - (4)].s));
}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 1261 "c.y"
    {
	
	sprintf(temp, "%s %s %s", (yyvsp[(1) - (3)].s), (yyvsp[(2) - (3)].s), (yyvsp[(3) - (3)].s));
	Copy((yyval.s), temp);

	strcpy(functionName, (yyvsp[(2) - (3)].s));
}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 1269 "c.y"
    {
	
	sprintf(temp, "%s %s %s", (yyvsp[(1) - (3)].s), (yyvsp[(2) - (3)].s), (yyvsp[(3) - (3)].s));
	Copy((yyval.s), temp);

	strcpy(functionName, (yyvsp[(1) - (3)].s));
}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 1277 "c.y"
    {
	
	sprintf(temp, "%s %s", (yyvsp[(1) - (2)].s), (yyvsp[(2) - (2)].s));
	Copy((yyval.s), temp);

	strcpy(functionName, (yyvsp[(1) - (2)].s));
}
    break;



/* Line 1455 of yacc.c  */
#line 4111 "y.tab.c"
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
#line 1286 "c.y"


#include <stdio.h>
#include <string.h>

extern char *yytext;
extern int yylineno;

// Ektyposh mhnumatos sfalmatos
int yyerror(char *s)
{
    fprintf(stderr, "%s at line %i, last token: %s\n", s, yylineno, yytext);
	return -1;
}


// H main sunarthsh. Ginetai o elegxos ton orismaton, h anakateu8unsh 
// tou arxeiou eisodou sto yyin kai to teliko parsing.
int main(int argc, char **argv)
{	
	int ret_value;

	// Arxikopoihsh Metablhton
	temp = (char *)malloc(sizeof(char)*MAX_LENGTH);
	functionName = (char *)malloc(sizeof(char)*MAX_LENGTH);
	rVariable = (char *)malloc(sizeof(char)*MAX_LENGTH);
	rFunction = (char *)malloc(sizeof(char)*MAX_LENGTH);
	rFunctionDelete = (char *)malloc(sizeof(char)*MAX_LENGTH);
	step = (char *)malloc(sizeof(char)*MAX_LENGTH);
	
	// Elegxos orismaton
	if (argc != 2) {
		fprintf(stderr, "Wrong number of arguments\n");
		fprintf(stderr, ">compiler <input_file>\n");
		exit (-1);
	}
	// Elegxos an yparxei to arxeio eisodou
	if ((yyin = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "Cannot open file '%s'\n", argv[1]);
		exit(-2);
	}	
	// Dhmiourgia Arxeiou Exodou
	sprintf(temp, "output_%s", argv[1]);
	if ((yyout = fopen(temp, "w")) == NULL) {
		fprintf(stderr, "Cannot open file '%s'\n", temp);
		exit(-2);
	}	
	// Perasma sto arxeio ton suntaktikon kanonon pou orizoume parapano
	ret_value = yyparse();
	
	if (ret_value == 0) {
		fprintf(stderr, "Succefull Parsing!\n");
		printData();
		if (isRecursive) {
			slIncludeCreate();
			slThreadCreate();
			slMainCreate();
		}
	}
	else {
		fprintf(stderr, "Failed Parsing!\n");
	}
	// Kleisimo File Descriptor
	fclose (yyin);
	fclose (yyout);
	
	return 0;
}



