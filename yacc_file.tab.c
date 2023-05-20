
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
#line 1 "yacc_file.y"

    /* Definition section */
    #include <stdio.h>
    #include <stdbool.h>
    #include <stdio.h>
    #include <string.h>
    #include <unistd.h>
    #ifndef HEADER_H
    #define HEADER_H
        #include "functions.c"
        #include "quadruples.c"
    #endif
    
    extern int yylex();
    
    extern FILE *yyin;

    extern int lineNumber;


/* Line 189 of yacc.c  */
#line 94 "yacc_file.tab.c"

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
     ERROR_TOKEN = 258,
     INT_TYPE = 259,
     FLOAT_TYPE = 260,
     STRING_TYPE = 261,
     BOOLEAN_TYPE = 262,
     CONSTANT = 263,
     TRUE = 264,
     FALSE = 265,
     M_OP_PLUS = 266,
     M_OP_MINUS = 267,
     M_OP_MULT = 268,
     M_OP_DIV = 269,
     M_OP_MOD = 270,
     M_OP_POWER = 271,
     L_OP_NOT = 272,
     L_OP_EXACT = 273,
     L_OP_AND = 274,
     L_OP_OR = 275,
     OP_ASSIGN = 276,
     OP_EQUAL = 277,
     OP_NOT_EQUAL = 278,
     OP_LESS = 279,
     OP_LESS_EQUAL = 280,
     OP_GREATER = 281,
     OP_GREATER_EQUAL = 282,
     TERMINATOR = 283,
     CLOSING_BRACKET = 284,
     OPENING_BLOCK_BRACES = 285,
     OPENING_BRACKET = 286,
     OPENING_BRACES = 287,
     FOR = 288,
     WHILE = 289,
     REPEAT = 290,
     RETURN = 291,
     ENUM = 292,
     COMMA = 293,
     THEN = 294,
     DEFAULT = 295,
     FUNCTION = 296,
     CALL = 297,
     VOID_TYPE = 298,
     IDENTIFIER = 299,
     INTEGER_NUMBER = 300,
     IF = 301,
     SWITCH = 302,
     CASE = 303,
     ELSE = 304,
     CLOSING_BRACES = 305,
     FLOAT_NUMBER = 306,
     STRING = 307
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 50 "yacc_file.y"

    struct symbolItem *sValue;

    int sIndex;
    char * sName;

    float fValue;
    int iValue;
    char * cValue;



/* Line 214 of yacc.c  */
#line 195 "yacc_file.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 207 "yacc_file.tab.c"

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
#define YYFINAL  76
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1453

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNRULES -- Number of states.  */
#define YYNSTATES  227

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    11,    14,    17,    19,    21,
      23,    25,    27,    29,    31,    33,    35,    39,    42,    48,
      49,    52,    53,    57,    69,    80,    93,   105,   106,   109,
     110,   114,   122,   123,   127,   134,   140,   146,   151,   158,
     164,   169,   173,   175,   177,   179,   181,   189,   196,   203,
     209,   221,   232,   233,   235,   245,   254,   255,   261,   266,
     269,   272,   275,   278,   281,   285,   289,   291,   293,   297,
     301,   305,   309,   313,   317,   319,   323,   325,   327,   329,
     331,   333,   335,   339,   343,   345,   348,   351,   354,   356,
     358,   360,   364,   368,   372,   376,   380,   384
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      54,     0,    -1,    55,    -1,    54,    55,    -1,    36,    80,
      -1,    36,    43,    -1,    68,    28,    -1,    73,    -1,    71,
      -1,    69,    -1,    70,    -1,    65,    -1,    63,    -1,    60,
      -1,    56,    -1,     3,    -1,    30,    54,    50,    -1,    30,
      50,    -1,    42,    44,    31,    58,    29,    -1,    -1,    80,
      59,    -1,    -1,    38,    80,    59,    -1,    41,    76,    31,
      61,    29,    32,    54,    36,    80,    28,    50,    -1,    41,
      76,    31,    61,    29,    32,    36,    80,    28,    50,    -1,
      41,    43,    44,    31,    61,    29,    32,    54,    36,    43,
      28,    50,    -1,    41,    43,    44,    31,    61,    29,    32,
      36,    43,    28,    50,    -1,    -1,    76,    62,    -1,    -1,
      38,    76,    62,    -1,    37,    44,    32,    44,    64,    50,
      28,    -1,    -1,    38,    44,    64,    -1,    47,    44,    32,
      66,    67,    50,    -1,    47,    44,    32,    67,    50,    -1,
      48,    80,    32,    54,    50,    -1,    48,    80,    32,    50,
      -1,    66,    48,    80,    32,    54,    50,    -1,    66,    48,
      80,    32,    50,    -1,    40,    32,    54,    50,    -1,    40,
      32,    50,    -1,    78,    -1,    75,    -1,    76,    -1,    77,
      -1,    34,    31,    68,    29,    32,    54,    50,    -1,    34,
      31,    68,    29,    32,    50,    -1,    35,    32,    54,    50,
      34,    68,    -1,    35,    32,    50,    34,    68,    -1,    33,
      31,    72,    28,    72,    28,    72,    29,    32,    54,    50,
      -1,    33,    31,    72,    28,    72,    28,    72,    29,    32,
      50,    -1,    -1,    68,    -1,    46,    31,    68,    29,    39,
      32,    54,    50,    74,    -1,    46,    31,    68,    29,    39,
      32,    50,    74,    -1,    -1,    49,    32,    54,    50,    74,
      -1,    49,    32,    50,    74,    -1,     8,    77,    -1,     4,
      44,    -1,     5,    44,    -1,     6,    44,    -1,     7,    44,
      -1,    44,    21,    78,    -1,    76,    21,    78,    -1,    79,
      -1,    82,    -1,    79,    11,    79,    -1,    79,    12,    79,
      -1,    79,    13,    79,    -1,    79,    14,    79,    -1,    79,
      15,    79,    -1,    79,    16,    79,    -1,    80,    -1,    31,
      79,    29,    -1,    44,    -1,    52,    -1,    81,    -1,    57,
      -1,    45,    -1,    51,    -1,    82,    19,    83,    -1,    82,
      20,    83,    -1,    83,    -1,    17,    83,    -1,    17,    80,
      -1,    18,    80,    -1,     9,    -1,    10,    -1,    84,    -1,
      31,    82,    29,    -1,    80,    22,    80,    -1,    80,    23,
      80,    -1,    80,    24,    80,    -1,    80,    25,    80,    -1,
      80,    26,    80,    -1,    80,    27,    80,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    73,    73,    74,    75,    78,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    96,    97,   100,   146,
     150,   163,   164,   178,   195,   212,   227,   244,   248,   261,
     262,   276,   306,   306,   319,   330,   340,   351,   362,   373,
     386,   387,   390,   394,   398,   402,   408,   411,   415,   418,
     423,   426,   430,   431,   434,   437,   441,   442,   444,   448,
     462,   474,   486,   498,   512,   543,   574,   587,   592,   609,
     627,   645,   663,   668,   674,   713,   718,   734,   740,   753,
     759,   762,   767,   789,   811,   817,   833,   860,   899,   907,
     915,   918,   923,   959,   995,  1031,  1067,  1103
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ERROR_TOKEN", "INT_TYPE", "FLOAT_TYPE",
  "STRING_TYPE", "BOOLEAN_TYPE", "CONSTANT", "TRUE", "FALSE", "M_OP_PLUS",
  "M_OP_MINUS", "M_OP_MULT", "M_OP_DIV", "M_OP_MOD", "M_OP_POWER",
  "L_OP_NOT", "L_OP_EXACT", "L_OP_AND", "L_OP_OR", "OP_ASSIGN", "OP_EQUAL",
  "OP_NOT_EQUAL", "OP_LESS", "OP_LESS_EQUAL", "OP_GREATER",
  "OP_GREATER_EQUAL", "TERMINATOR", "CLOSING_BRACKET",
  "OPENING_BLOCK_BRACES", "OPENING_BRACKET", "OPENING_BRACES", "FOR",
  "WHILE", "REPEAT", "RETURN", "ENUM", "COMMA", "THEN", "DEFAULT",
  "FUNCTION", "CALL", "VOID_TYPE", "IDENTIFIER", "INTEGER_NUMBER", "IF",
  "SWITCH", "CASE", "ELSE", "CLOSING_BRACES", "FLOAT_NUMBER", "STRING",
  "$accept", "program", "sub_program", "block_structure", "function_call",
  "function_arguments", "function_arguments2", "function_definition",
  "function_parameters", "function_parameters2", "enumeration",
  "enum_body", "switch_case", "switch_body", "switch_end", "single_line",
  "while_loop", "do_while", "for_loop", "line_or_null", "if_stmt",
  "else_stmt", "constant_variable_declaration",
  "variable_or_function_declaration", "variable_assignment", "expr",
  "maths_expr", "return_value", "number", "logical_expression",
  "logical_expression2", "comparison_expression", 0
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
     305,   306,   307
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    54,    54,    54,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    56,    56,    57,    58,
      58,    59,    59,    60,    60,    60,    60,    61,    61,    62,
      62,    63,    64,    64,    65,    65,    66,    66,    66,    66,
      67,    67,    68,    68,    68,    68,    69,    69,    70,    70,
      71,    71,    72,    72,    73,    73,    74,    74,    74,    75,
      76,    76,    76,    76,    77,    77,    78,    78,    79,    79,
      79,    79,    79,    79,    79,    79,    80,    80,    80,    80,
      81,    81,    82,    82,    82,    83,    83,    83,    83,    83,
      83,    83,    84,    84,    84,    84,    84,    84
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     5,     0,
       2,     0,     3,    11,    10,    12,    11,     0,     2,     0,
       3,     7,     0,     3,     6,     5,     5,     4,     6,     5,
       4,     3,     1,     1,     1,     1,     7,     6,     6,     5,
      11,    10,     0,     1,     9,     8,     0,     5,     4,     2,
       2,     2,     2,     2,     3,     3,     1,     1,     3,     3,
       3,     3,     3,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     3,     3,     1,     2,     2,     2,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    15,     0,     0,     0,     0,     0,    88,    89,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      76,    80,     0,     0,    81,    77,     0,     2,    14,    79,
      13,    12,    11,     0,     9,    10,     8,     7,    43,    44,
      45,    42,    66,    74,    78,    67,    84,    90,    60,    61,
      62,    63,     0,     0,    59,     0,    76,    86,    85,    87,
      17,     0,     0,     0,    52,     0,     0,     5,     4,     0,
       0,     0,     0,     0,     0,     0,     1,     3,     6,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    16,    75,    91,    53,     0,
       0,     0,     0,     0,     0,    27,    19,    64,     0,     0,
      65,     0,    68,    74,    69,    70,    71,    72,    73,    92,
      93,    94,    95,    96,    97,    82,    83,    52,     0,     0,
       0,    32,    27,     0,    29,     0,    21,     0,     0,     0,
       0,     0,     0,     0,    49,     0,     0,     0,     0,     0,
       0,    28,    18,     0,    20,     0,     0,     0,     0,     0,
      35,    52,    47,     0,    48,    32,     0,     0,     0,    29,
      21,     0,    41,     0,     0,     0,    34,     0,    46,    33,
      31,     0,     0,     0,    30,    22,    56,     0,    40,    37,
       0,     0,     0,     0,     0,     4,     0,     0,    55,    56,
      36,    39,     0,     0,     5,     0,     0,     0,     0,    54,
      38,    51,     0,     0,     0,    24,     0,    56,     0,    50,
      26,     0,    23,    58,    56,    25,    57
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    26,    27,    28,    29,   135,   154,    30,   133,   151,
      31,   147,    32,   140,   141,    33,    34,    35,    36,    99,
      37,   198,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -177
static const yytype_int16 yypact[] =
{
     698,  -177,   -35,   -33,   -19,    -2,     1,  -177,  -177,    12,
      78,   248,  1401,     9,    15,    17,    73,     7,    27,    21,
      40,  -177,    31,    22,  -177,  -177,   198,  -177,  -177,  -177,
    -177,  -177,  -177,    39,  -177,  -177,  -177,  -177,  -177,    59,
    -177,  -177,   138,   187,  -177,    18,  -177,  -177,  -177,  -177,
    -177,  -177,    40,    59,  -177,    12,  -177,   187,  -177,  -177,
    -177,   748,    92,    49,  1397,  1397,   298,  -177,  -177,    50,
      56,    79,    80,  1401,  1397,    87,  -177,  -177,  -177,  1401,
       8,     8,     8,     8,     8,     8,    78,    78,    78,    78,
      78,    78,    12,    12,   187,  -177,  -177,  -177,  -177,    84,
      97,    93,   798,    95,   100,   129,    78,  -177,   108,   -20,
    -177,     8,   175,  -177,   175,   124,   124,   124,   124,  -177,
    -177,  -177,  -177,  -177,  -177,  -177,  -177,  1397,   109,  1397,
     110,   105,   129,   118,   117,   135,   121,   127,   136,    78,
     -13,   126,   139,   348,  -177,  1397,   134,   133,   142,   147,
     129,  -177,  -177,    78,  -177,   152,   398,   154,    78,   144,
    -177,  1397,  -177,   848,  -177,   105,   167,   168,   898,   117,
     121,   448,  -177,   948,   498,   185,  -177,   189,  -177,  -177,
    -177,   998,    73,  1048,  -177,  -177,   170,  1098,  -177,  -177,
    1148,   548,   188,   130,  1198,   193,    78,   190,  -177,   170,
    -177,  -177,  1248,   598,   195,   181,   176,   197,   648,  -177,
    -177,  -177,  1298,   177,   202,  -177,   184,   170,  1348,  -177,
    -177,   186,  -177,  -177,   170,  -177,  -177
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -177,   -11,   -25,  -177,  -177,  -177,    67,  -177,   106,    72,
    -177,    81,  -177,  -177,   107,   -48,  -177,  -177,  -177,  -117,
    -177,  -176,  -177,    -4,   242,   -55,    -9,     3,  -177,    -8,
       6,  -177
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      61,    77,    53,    62,    63,     2,     3,     4,     5,    48,
     142,    49,    57,    59,    71,    58,    98,   100,   107,    68,
     138,     7,     8,   209,   110,    50,   108,   138,   139,     9,
      10,     2,     3,     4,     5,   158,    77,    92,    93,   111,
      64,   223,    51,    55,   177,    52,    65,    63,   226,    66,
      19,    69,    56,    21,    19,   102,    56,    21,    94,    24,
      25,    73,    74,    24,    25,    72,    75,    78,    92,    93,
      70,   112,   114,   115,   116,   117,   118,    77,    97,    98,
      79,   144,   103,   113,   113,   113,   113,   113,   113,   119,
     120,   121,   122,   123,   124,    94,    94,   164,   125,   126,
     104,   134,    62,    80,    81,    82,    83,    84,    85,   136,
     105,   106,   127,    98,   113,    19,    67,    56,    21,   109,
      19,    96,    56,    21,    24,    25,   128,   129,   134,    24,
      25,   132,   163,     2,     3,     4,     5,   137,    77,   131,
      85,   143,   157,   146,   145,   173,   169,   149,    77,    80,
      81,    82,    83,    84,    85,   150,   170,   183,    77,   153,
     187,   175,    77,   190,   152,    77,   155,   161,   156,    77,
     194,   167,    19,   204,    56,    21,   160,    77,   165,   168,
     202,    24,    25,   166,   171,   195,   174,    77,    82,    83,
      84,    85,   212,    77,   176,   180,    68,   218,    76,   207,
     181,     1,     2,     3,     4,     5,     6,     7,     8,    86,
      87,    88,    89,    90,    91,     9,    10,   191,   192,   197,
     203,   206,   208,   213,   214,   216,   215,   220,    11,    12,
     221,    13,    14,    15,   222,    17,   225,   185,   148,    18,
      19,   184,    20,    21,    22,    23,   179,   159,    54,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,    13,    14,    15,    16,    17,     0,     0,     0,    18,
      19,     0,    20,    21,    22,    23,     0,     0,    60,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,    13,    14,    15,    16,    17,     0,     0,     0,    18,
      19,     0,    20,    21,    22,    23,     0,     0,   101,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,    13,    14,    15,    16,    17,     0,     0,     0,    18,
      19,     0,    20,    21,    22,    23,     0,     0,   162,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,    13,    14,    15,    16,    17,     0,     0,     0,    18,
      19,     0,    20,    21,    22,    23,     0,     0,   172,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,    13,    14,    15,    16,    17,     0,     0,     0,    18,
      19,     0,    20,    21,    22,    23,     0,     0,   186,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,    13,    14,    15,    16,    17,     0,     0,     0,    18,
      19,     0,    20,    21,    22,    23,     0,     0,   189,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,    13,    14,    15,    16,    17,     0,     0,     0,    18,
      19,     0,    20,    21,    22,    23,     0,     0,   201,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,    13,    14,    15,    16,    17,     0,     0,     0,    18,
      19,     0,    20,    21,    22,    23,     0,     0,   211,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,    13,    14,    15,    16,    17,     0,     0,     0,    18,
      19,     0,    20,    21,    22,    23,     0,     0,   217,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,    13,    14,    15,    16,    17,     0,     0,     0,    18,
      19,     0,    20,    21,    22,    23,     0,     0,     0,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,    13,    14,    15,     0,    17,     0,     0,     0,    18,
      19,     0,    20,    21,    22,    23,     0,     0,    95,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,    13,    14,    15,     0,    17,     0,     0,     0,    18,
      19,     0,    20,    21,    22,    23,     0,     0,   130,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,    13,    14,    15,     0,    17,     0,     0,     0,    18,
      19,     0,    20,    21,    22,    23,     0,     0,   178,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,    13,    14,    15,   182,    17,     0,     0,     0,    18,
      19,     0,    20,    21,    22,    23,     0,     0,     0,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,    13,    14,    15,     0,    17,     0,     0,     0,    18,
      19,     0,    20,    21,    22,    23,     0,     0,   188,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,    13,    14,    15,   193,    17,     0,     0,     0,    18,
      19,     0,    20,    21,    22,    23,     0,     0,     0,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,    13,    14,    15,   196,    17,     0,     0,     0,    18,
      19,     0,    20,    21,    22,    23,     0,     0,     0,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,    13,    14,    15,     0,    17,     0,     0,     0,    18,
      19,     0,    20,    21,    22,    23,     0,     0,   199,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,    13,    14,    15,     0,    17,     0,     0,     0,    18,
      19,     0,    20,    21,    22,    23,     0,     0,   200,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,    13,    14,    15,   205,    17,     0,     0,     0,    18,
      19,     0,    20,    21,    22,    23,     0,     0,     0,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,    13,    14,    15,     0,    17,     0,     0,     0,    18,
      19,     0,    20,    21,    22,    23,     0,     0,   210,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,    13,    14,    15,     0,    17,     0,     0,     0,    18,
      19,     0,    20,    21,    22,    23,     0,     0,   219,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,    13,    14,    15,     0,    17,     0,     0,     0,    18,
      19,     0,    20,    21,    22,    23,     0,     0,   224,    24,
      25,     2,     3,     4,     5,     6,     7,     8,     0,     0,
       7,     8,     0,     0,     9,    10,     0,     0,     9,    10,
       0,     0,     0,     0,     0,     0,     0,     0,    12,     0,
       0,     0,    12,     0,     0,     0,     0,     0,     0,    19,
       0,    20,    21,    19,     0,    56,    21,     0,    24,    25,
       0,     0,    24,    25
};

static const yytype_int16 yycheck[] =
{
      11,    26,     6,    12,    12,     4,     5,     6,     7,    44,
     127,    44,     9,    10,    18,     9,    64,    65,    73,    16,
      40,     9,    10,   199,    79,    44,    74,    40,    48,    17,
      18,     4,     5,     6,     7,    48,    61,    19,    20,    31,
      31,   217,    44,    31,   161,    44,    31,    55,   224,    32,
      42,    44,    44,    45,    42,    66,    44,    45,    55,    51,
      52,    21,    31,    51,    52,    44,    44,    28,    19,    20,
      43,    80,    81,    82,    83,    84,    85,   102,    29,   127,
      21,   129,    32,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,   145,    92,    93,
      44,   105,   111,    11,    12,    13,    14,    15,    16,   106,
      31,    31,    28,   161,   111,    42,    43,    44,    45,    32,
      42,    29,    44,    45,    51,    52,    29,    34,   132,    51,
      52,    31,   143,     4,     5,     6,     7,    29,   163,    44,
      16,    32,   139,    38,    34,   156,   150,    29,   173,    11,
      12,    13,    14,    15,    16,    38,   153,   168,   183,    38,
     171,   158,   187,   174,    29,   190,    39,    28,    32,   194,
     181,    29,    42,    43,    44,    45,    50,   202,    44,    32,
     191,    51,    52,    50,    32,   182,    32,   212,    13,    14,
      15,    16,   203,   218,    50,    28,   193,   208,     0,   196,
      32,     3,     4,     5,     6,     7,     8,     9,    10,    22,
      23,    24,    25,    26,    27,    17,    18,    32,    29,    49,
      32,    28,    32,    28,    43,    28,    50,    50,    30,    31,
      28,    33,    34,    35,    50,    37,    50,   170,   132,    41,
      42,   169,    44,    45,    46,    47,   165,   140,     6,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
      42,    -1,    44,    45,    46,    47,    -1,    -1,    50,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
      42,    -1,    44,    45,    46,    47,    -1,    -1,    50,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
      42,    -1,    44,    45,    46,    47,    -1,    -1,    50,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
      42,    -1,    44,    45,    46,    47,    -1,    -1,    50,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
      42,    -1,    44,    45,    46,    47,    -1,    -1,    50,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
      42,    -1,    44,    45,    46,    47,    -1,    -1,    50,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
      42,    -1,    44,    45,    46,    47,    -1,    -1,    50,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
      42,    -1,    44,    45,    46,    47,    -1,    -1,    50,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
      42,    -1,    44,    45,    46,    47,    -1,    -1,    50,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
      42,    -1,    44,    45,    46,    47,    -1,    -1,    -1,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    33,    34,    35,    -1,    37,    -1,    -1,    -1,    41,
      42,    -1,    44,    45,    46,    47,    -1,    -1,    50,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    33,    34,    35,    -1,    37,    -1,    -1,    -1,    41,
      42,    -1,    44,    45,    46,    47,    -1,    -1,    50,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    33,    34,    35,    -1,    37,    -1,    -1,    -1,    41,
      42,    -1,    44,    45,    46,    47,    -1,    -1,    50,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
      42,    -1,    44,    45,    46,    47,    -1,    -1,    -1,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    33,    34,    35,    -1,    37,    -1,    -1,    -1,    41,
      42,    -1,    44,    45,    46,    47,    -1,    -1,    50,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
      42,    -1,    44,    45,    46,    47,    -1,    -1,    -1,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
      42,    -1,    44,    45,    46,    47,    -1,    -1,    -1,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    33,    34,    35,    -1,    37,    -1,    -1,    -1,    41,
      42,    -1,    44,    45,    46,    47,    -1,    -1,    50,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    33,    34,    35,    -1,    37,    -1,    -1,    -1,    41,
      42,    -1,    44,    45,    46,    47,    -1,    -1,    50,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
      42,    -1,    44,    45,    46,    47,    -1,    -1,    -1,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    33,    34,    35,    -1,    37,    -1,    -1,    -1,    41,
      42,    -1,    44,    45,    46,    47,    -1,    -1,    50,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    33,    34,    35,    -1,    37,    -1,    -1,    -1,    41,
      42,    -1,    44,    45,    46,    47,    -1,    -1,    50,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    33,    34,    35,    -1,    37,    -1,    -1,    -1,    41,
      42,    -1,    44,    45,    46,    47,    -1,    -1,    50,    51,
      52,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
       9,    10,    -1,    -1,    17,    18,    -1,    -1,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    44,    45,    42,    -1,    44,    45,    -1,    51,    52,
      -1,    -1,    51,    52
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    17,
      18,    30,    31,    33,    34,    35,    36,    37,    41,    42,
      44,    45,    46,    47,    51,    52,    54,    55,    56,    57,
      60,    63,    65,    68,    69,    70,    71,    73,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    44,    44,
      44,    44,    44,    76,    77,    31,    44,    80,    83,    80,
      50,    54,    79,    82,    31,    31,    32,    43,    80,    44,
      43,    76,    44,    21,    31,    44,     0,    55,    28,    21,
      11,    12,    13,    14,    15,    16,    22,    23,    24,    25,
      26,    27,    19,    20,    80,    50,    29,    29,    68,    72,
      68,    50,    54,    32,    44,    31,    31,    78,    68,    32,
      78,    31,    79,    80,    79,    79,    79,    79,    79,    80,
      80,    80,    80,    80,    80,    83,    83,    28,    29,    34,
      50,    44,    31,    61,    76,    58,    80,    29,    40,    48,
      66,    67,    72,    32,    68,    34,    38,    64,    61,    29,
      38,    62,    29,    38,    59,    39,    32,    80,    48,    67,
      50,    28,    50,    54,    68,    44,    50,    29,    32,    76,
      80,    32,    50,    54,    32,    80,    50,    72,    50,    64,
      28,    32,    36,    54,    62,    59,    50,    54,    50,    50,
      54,    32,    29,    36,    54,    80,    36,    49,    74,    50,
      50,    50,    54,    32,    43,    36,    28,    80,    32,    74,
      50,    50,    54,    28,    43,    50,    28,    50,    54,    50,
      50,    28,    50,    74,    50,    50,    74
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
        case 4:

/* Line 1455 of yacc.c  */
#line 75 "yacc_file.y"
    {
            // Completely ignored in case of non-functions
        ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 78 "yacc_file.y"
    {
            // Completely ignored in case of non-functions
        ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 89 "yacc_file.y"
    { resetRegisters(); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 93 "yacc_file.y"
    { handleError(UNEXPECTED_CHARACTER, -1, ""); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 100 "yacc_file.y"
    {
            // Get the symbol from the symbol table
            int symbolIndex = getSymbolIndex((yyvsp[(2) - (5)].sName));
            if (symbolIndex == -1)
                handleError(ERROR_UNDECLARED, -1, "");

            else if (symbolTable[symbolIndex].parametersCount > globalParametersCount) {
                char specialMessage[80];
                sprintf(specialMessage, "Arguments missing, found %d and required %d\n", globalParametersCount, symbolTable[symbolIndex].parametersCount);
                handleError(ERROR_MISSING_ARGUMENTS, -1, specialMessage);
            }
            else if (symbolTable[symbolIndex].parametersCount < globalParametersCount) {
                char specialMessage[80];
                sprintf(specialMessage, "A lot of arguments are provided, found %d and required %d\n", globalParametersCount, symbolTable[symbolIndex].parametersCount);
                handleError(ERROR_MORE_ARGUMENTS, -1, specialMessage);
            }
            else {
                for (int i = 0; i < globalParametersCount; i++) {
                    if (symbolTable[symbolIndex].parameters[i] != globalParameters[i]) {
                        handleError(PARAMETER_TYPE_MISMATCH, -1, "");
                        break;
                    }
                }
            }
            
            globalParametersCount = 0;
            globalParameters = NULL;

            if (symbolTable[symbolIndex].type == TYPE_VOID)
                (yyval.iValue) = GLOBAL_VOID;
            else {
                if (symbolTable[symbolIndex].isCertain) {
                    if (symbolTable[symbolIndex].type == TYPE_STRING) {
                        globalString = strdup(symbolTable[symbolIndex].stringValue);
                        (yyval.iValue) = GLOBAL_STRING;
                    }
                    // Return the symbol index
                    else
                        (yyval.iValue) = symbolIndex;
                }
                else
                    (yyval.iValue) = GLOBAL_UNCERTAIN;
            }
        ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 146 "yacc_file.y"
    { 
            globalParametersCount = 0;
            globalParameters = NULL;
        ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 150 "yacc_file.y"
    {
            int returnResult = (yyvsp[(1) - (2)].fValue);
            // Check if there is an issue with the incoming value
            if (returnResult == ERROR_UNDECLARED) {
                handleError(ERROR_UNDECLARED, -1, "");
            }
            if (returnResult == ERROR_UNINITIALIZED) {
                handleError(ERROR_UNINITIALIZED, -1, "");
            }

            addArgumentParameter(returnResult);
        ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 164 "yacc_file.y"
    {   
            int returnResult = (yyvsp[(2) - (3)].fValue);
            // Check if there is an issue with the incoming value
            if (returnResult == ERROR_UNDECLARED) {
                handleError(ERROR_UNDECLARED, -1, "");
            }
            if (returnResult == ERROR_UNINITIALIZED) {
                handleError(ERROR_UNINITIALIZED, -1, "");
            }

            addArgumentParameter(returnResult);
        ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 178 "yacc_file.y"
    {
            int functionIndex = (yyvsp[(2) - (11)].sIndex);
            symbolTable[functionIndex].isFunction = true;

            int returnResult = (yyvsp[(9) - (11)].fValue);

            if (returnResult == ERROR_UNDECLARED)
                handleError(ERROR_UNDECLARED, -1, "");
            else if (returnResult == ERROR_UNINITIALIZED)
                handleError(ERROR_UNINITIALIZED, -1, "");

            int assignmentStatus = defineNonVoidFunction(functionIndex, returnResult);
            if (assignmentStatus == ERROR_TYPE_MISMATCH)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            
            setFunctionParameters(functionIndex);
        ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 195 "yacc_file.y"
    {
            int functionIndex = (yyvsp[(2) - (10)].sIndex);
            symbolTable[functionIndex].isFunction = true;

            int returnResult = (yyvsp[(8) - (10)].fValue);

            if (returnResult == ERROR_UNDECLARED)
                handleError(ERROR_UNDECLARED, -1, "");
            else if (returnResult == ERROR_UNINITIALIZED)
                handleError(ERROR_UNINITIALIZED, -1, "");
            
            int assignmentStatus = defineNonVoidFunction(functionIndex, returnResult);
            if (assignmentStatus == ERROR_TYPE_MISMATCH)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            
            setFunctionParameters(functionIndex);
        ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 212 "yacc_file.y"
    {
            // Get the symbol index from the symbol name
            char * symbolName = (yyvsp[(3) - (12)].sName);
            int resultIndex = searchAndDeclare(symbolName, TYPE_VOID);

            // If the symbol already is declared in the same scope-level, handle the error
            if (resultIndex == ERROR_DECLARED)
                handleError(ERROR_DECLARED, -1, "");
            
            symbolTable[resultIndex].isFunction = true;
            
            setFunctionParameters(resultIndex);

            (yyval.iValue) = GLOBAL_VOID;
        ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 227 "yacc_file.y"
    {
            // Get the symbol index from the symbol name
            char * symbolName = (yyvsp[(3) - (11)].sName);
            int resultIndex = searchAndDeclare(symbolName, TYPE_VOID);

            // If the symbol already is declared in the same scope-level, handle the error
            if (resultIndex == ERROR_DECLARED)
                handleError(ERROR_DECLARED, -1, "");
            
            symbolTable[resultIndex].isFunction = true;

            setFunctionParameters(resultIndex);

            (yyval.iValue) = GLOBAL_VOID;
        ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 244 "yacc_file.y"
    { 
            globalParametersCount = 0;
            globalParameters = NULL;
        ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 248 "yacc_file.y"
    {
            int returnResult = (yyvsp[(1) - (2)].sIndex);
            // Check if there is an issue with the incoming value
            if (returnResult == ERROR_UNDECLARED) {
                handleError(ERROR_UNDECLARED, -1, "");
            }
            if (returnResult == ERROR_UNINITIALIZED) {
                handleError(ERROR_UNINITIALIZED, -1, "");
            }

            addArgumentParameter(returnResult);
        ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 262 "yacc_file.y"
    {
            int returnResult = (yyvsp[(2) - (3)].sIndex);
            // Check if there is an issue with the incoming value
            if (returnResult == ERROR_UNDECLARED) {
                handleError(ERROR_UNDECLARED, -1, "");
            }
            if (returnResult == ERROR_UNINITIALIZED) {
                handleError(ERROR_UNINITIALIZED, -1, "");
            }

            addArgumentParameter(returnResult);
        ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 276 "yacc_file.y"
    {
            // Get the symbol index from the enum name
            char * firstElement = (yyvsp[(4) - (7)].sName);
            int resultIndex = searchAndDeclare(firstElement, TYPE_INT);

            // If the symbol already is declared in the same scope-level, handle the error
            if (resultIndex == ERROR_DECLARED)
                handleError(ERROR_DECLARED, -1, "");
                
            int startIndex, endIndex;
            if ((yyvsp[(5) - (7)].iValue) != ENUM_END) {
                // Start index is the incoming value from the enum_body
                startIndex = (yyvsp[(5) - (7)].iValue);
                // End index is the index of the first element of the enum
                endIndex = resultIndex;

                sortEnumElements(startIndex, endIndex);
            }
            else {
                startIndex = resultIndex;
                endIndex = resultIndex;
            }

            // Get the symbol index from the enum name
            char * enumName = (yyvsp[(2) - (7)].sName);

            assignEnumElements(startIndex, endIndex, enumName);
        ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 306 "yacc_file.y"
    { (yyval.iValue) = ENUM_END; ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 306 "yacc_file.y"
    {
            // Get the symbol index from the identifier name
            int resultIndex = searchAndDeclare((yyvsp[(2) - (3)].sName), TYPE_INT);
            // If the symbol already is declared in the same scope-level, handle the error
            if (resultIndex == ERROR_DECLARED)
                handleError(ERROR_DECLARED, -1, "");
            if ((yyvsp[(3) - (3)].iValue) == ENUM_END)
                (yyval.iValue) = resultIndex;
            else
                (yyval.iValue) = (yyvsp[(3) - (3)].iValue);
        ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 319 "yacc_file.y"
    {
            int resultIndex = getSymbolIndex((yyvsp[(2) - (6)].sName));
            if (resultIndex == -1)
                handleError(ERROR_UNDECLARED, (yyvsp[(1) - (6)].iValue), "");
            else if (symbolTable[resultIndex].type != TYPE_INT) {
                handleError(SWITCH_TYPE_MISMATCH, (yyvsp[(1) - (6)].iValue), "");
            }
            else if (symbolTable[resultIndex].isInitialized == false) {
                handleError(ERROR_UNINITIALIZED, (yyvsp[(1) - (6)].iValue), "");
            }
        ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 330 "yacc_file.y"
    {
            int resultIndex = getSymbolIndex((yyvsp[(2) - (5)].sName));
            if (resultIndex == -1)
                handleError(ERROR_UNDECLARED, (yyvsp[(1) - (5)].iValue), "");
            else if (symbolTable[resultIndex].type != TYPE_INT) {
                handleError(SWITCH_TYPE_MISMATCH, (yyvsp[(1) - (5)].iValue), "");
            }
        ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 340 "yacc_file.y"
    {
            if ((int) (yyvsp[(2) - (5)].fValue) != GLOBAL_NUMBER)
                handleError(SWITCH_TYPE_MISMATCH, (yyvsp[(1) - (5)].iValue), "");
            // Compare the return values
            char tempBuffer1[8];
            if ((yyvsp[(2) - (5)].fValue) == GLOBAL_NUMBER)
                sprintf(tempBuffer1, "%.2f", globalNumber);

            addQuadruple(CMPEQ, tempBuffer1, "var", "");
            addUJump();
        ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 351 "yacc_file.y"
    {
            if ((int) (yyvsp[(2) - (4)].fValue) != GLOBAL_NUMBER)
                handleError(SWITCH_TYPE_MISMATCH, (yyvsp[(1) - (4)].iValue), "");
            // Compare the return values
            char tempBuffer1[8];
            if ((yyvsp[(2) - (4)].fValue) == GLOBAL_NUMBER)
                sprintf(tempBuffer1, "%.2f", globalNumber);

            addQuadruple(CMPEQ, tempBuffer1, "s var", "");
            addUJump();
        ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 362 "yacc_file.y"
    {
            if ((int) (yyvsp[(3) - (6)].fValue) != GLOBAL_NUMBER)
                handleError(SWITCH_TYPE_MISMATCH, (yyvsp[(2) - (6)].iValue), "");
            // Compare the return values
            char tempBuffer1[8];
            if ((yyvsp[(3) - (6)].fValue) == GLOBAL_NUMBER)
                sprintf(tempBuffer1, "%.2f", globalNumber);

            addQuadruple(CMPEQ, tempBuffer1, "var", "");
            addUJump();
        ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 373 "yacc_file.y"
    {
            if ((int) (yyvsp[(3) - (5)].fValue) != GLOBAL_NUMBER)
                handleError(SWITCH_TYPE_MISMATCH, (yyvsp[(2) - (5)].iValue), "");
            // Compare the return values
            char tempBuffer1[8];
            if ((yyvsp[(3) - (5)].fValue) == GLOBAL_NUMBER)
                sprintf(tempBuffer1, "%.2f", globalNumber);

            addQuadruple(CMPEQ, tempBuffer1, "var", "");
            addUJump();
        ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 390 "yacc_file.y"
    {
            // Return the symbol index
            (yyval.iValue) = (yyvsp[(1) - (1)].fValue);
        ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 394 "yacc_file.y"
    {
            // Return the symbol index
            (yyval.iValue) = (yyvsp[(1) - (1)].iValue);
        ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 398 "yacc_file.y"
    {
            // Return the symbol index
            (yyval.iValue) = (yyvsp[(1) - (1)].sIndex);
        ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 402 "yacc_file.y"
    {
            // Return the symbol index
            (yyval.iValue) = (yyvsp[(1) - (1)].iValue);
        ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 408 "yacc_file.y"
    {
            addLoopJump();
        ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 411 "yacc_file.y"
    {
            addLoopJump();
        ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 415 "yacc_file.y"
    {
            addLoopJump();
        ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 418 "yacc_file.y"
    {
            addLoopJump();
        ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 423 "yacc_file.y"
    {
            addLoopJump();
        ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 426 "yacc_file.y"
    {
            addLoopJump();
        ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 434 "yacc_file.y"
    {
            ifStatementLogic((yyvsp[(1) - (9)].iValue), (yyvsp[(3) - (9)].iValue));
        ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 437 "yacc_file.y"
    {
            ifStatementLogic((yyvsp[(1) - (8)].iValue), (yyvsp[(3) - (8)].iValue));
        ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 442 "yacc_file.y"
    {
        ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 444 "yacc_file.y"
    {
        ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 448 "yacc_file.y"
    {
            // Using this grammar rule, a non-constant variable can be set as a constant after declaration
            // i.e.:
            // int i = 60;
            // const i = ay 7aga; // can be -> const i = i;
            // now i is a constant with the new assigned value
            int symbolIndex = (yyvsp[(2) - (2)].iValue);

            symbolTable[symbolIndex].isConstant = true;

            (yyval.iValue) = symbolIndex;
        ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 462 "yacc_file.y"
    {
            // Get the symbol index from the symbol name
            char * symbolName = (yyvsp[(2) - (2)].sName);
            int result = searchAndDeclare(symbolName, TYPE_INT);

            // If the symbol already is declared in the same scope-level, handle the error
            if (result == ERROR_DECLARED)
                handleError(ERROR_DECLARED, -1, "");
            
            // Return the symbol index
            (yyval.sIndex) = result;
        ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 474 "yacc_file.y"
    {
            // Get the symbol index from the symbol name
            char * symbolName = (yyvsp[(2) - (2)].sName);
            int result = searchAndDeclare(symbolName, TYPE_FLOAT);

            // If the symbol already is declared in the same scope-level, handle the error
            if (result == ERROR_DECLARED)
                handleError(ERROR_DECLARED, -1, "");
            
            // Return the symbol index
            (yyval.sIndex) = result;
        ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 486 "yacc_file.y"
    {
            // Get the symbol index from the symbol name
            char * symbolName = (yyvsp[(2) - (2)].sName);
            int result = searchAndDeclare(symbolName, TYPE_STRING);

            // If the symbol already is declared in the same scope-level, handle the error
            if (result == ERROR_DECLARED)
                handleError(ERROR_DECLARED, -1, "");
            
            // Return the symbol index
            (yyval.sIndex) = result;
        ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 498 "yacc_file.y"
    {
            // Get the symbol index from the symbol name
            char * symbolName = (yyvsp[(2) - (2)].sName);
            int result = searchAndDeclare(symbolName, TYPE_BOOL);

            // If the symbol already is declared in the same scope-level, handle the error
            if (result == ERROR_DECLARED)
                handleError(ERROR_DECLARED, -1, "");
            
            // Return the symbol index
            (yyval.sIndex) = result;
        ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 512 "yacc_file.y"
    {
            int symbolIndex = getSymbolIndex((yyvsp[(1) - (3)].sName));
            if (symbolIndex == -1)
                handleError(ERROR_UNDECLARED, -1, "");

            int assignmentStatus;
            // In case the function is of type void
            if ((yyvsp[(3) - (3)].fValue) == GLOBAL_VOID)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            else if ((yyvsp[(3) - (3)].fValue) == GLOBAL_STRING)
                assignmentStatus = assignValue(symbolIndex, globalString, TYPE_STRING);
            else
                assignmentStatus = assignValue(symbolIndex, (void*)&(yyvsp[(3) - (3)].fValue), TYPE_FLOAT);
            
            if (assignmentStatus == ERROR_CONSTANT_REASSIGNMENT)
                handleError(ERROR_CONSTANT_REASSIGNMENT, -1, "");
            else if (assignmentStatus == ERROR_TYPE_MISMATCH)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            else if (assignmentStatus == ERROR_UNKNOWN)
                handleError(ERROR_UNKNOWN, -1, "");
            
            // The assignmentStatus holds the symbolIndex if any
            (yyval.iValue) = assignmentStatus;

            // Store the value stored in the register to the variable
            char tempBuffer[3];
            sprintf(tempBuffer, "R%d", currentRegister - 1);

            addQuadruple(STR, symbolTable[symbolIndex].name, tempBuffer, "");
            resetRegisters();
        ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 543 "yacc_file.y"
    {
            // Declare and assign a variable
            int symbolIndex = (yyvsp[(1) - (3)].sIndex);

            int assignmentStatus;
            // In case the function is of type void
            if ((yyvsp[(3) - (3)].fValue) == GLOBAL_VOID)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            else if ((yyvsp[(3) - (3)].fValue) == GLOBAL_STRING)
                assignmentStatus = assignValue(symbolIndex, globalString, TYPE_STRING);
            else
                assignmentStatus = assignValue(symbolIndex, (void*)&(yyvsp[(3) - (3)].fValue), TYPE_FLOAT);
            
            if (assignmentStatus == ERROR_CONSTANT_REASSIGNMENT)
                handleError(ERROR_CONSTANT_REASSIGNMENT, -1, "");
            else if (assignmentStatus == ERROR_TYPE_MISMATCH)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            else if (assignmentStatus == ERROR_UNKNOWN)
                handleError(ERROR_UNKNOWN, -1, "");
            // The assignmentStatus holds the symbolIndex if any
            (yyval.iValue) = assignmentStatus;

            // Store the value stored in the register to the variable
            char tempBuffer[3];
            sprintf(tempBuffer, "R%d", currentRegister - 1);

            addQuadruple(STR, symbolTable[symbolIndex].name, tempBuffer, "");
            resetRegisters();
        ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 574 "yacc_file.y"
    {
            // Return the symbol index or global reference (string or number)
            if ((yyvsp[(1) - (1)].fValue) == GLOBAL_STRING)
                (yyval.fValue) = GLOBAL_STRING;
            else if ((yyvsp[(1) - (1)].fValue) == GLOBAL_VOID)
                (yyval.fValue) = GLOBAL_VOID;
            else if ((yyvsp[(1) - (1)].fValue) == GLOBAL_NUMBER)
                (yyval.fValue) = globalNumber;
            else if ((yyvsp[(1) - (1)].fValue) == GLOBAL_UNCERTAIN)
                (yyval.fValue) = GLOBAL_UNCERTAIN;
            else
                (yyval.fValue) = (yyvsp[(1) - (1)].fValue);
        ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 587 "yacc_file.y"
    {
            // Return the symbol index or global reference (string or number)
            (yyval.fValue) = (yyvsp[(1) - (1)].fValue);
        ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 592 "yacc_file.y"
    {
            if ((yyvsp[(1) - (3)].fValue) == GLOBAL_STRING || (yyvsp[(3) - (3)].fValue) == GLOBAL_STRING)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            (yyval.fValue) = (yyvsp[(1) - (3)].fValue) + (yyvsp[(3) - (3)].fValue);

            // Store the value stored in the register to the variable
            char tempBuffer1[3];
            sprintf(tempBuffer1, "R%d", currentRegister - (2 + 2 * instructionsConsidered));

            char tempBuffer2[3];
            sprintf(tempBuffer2, "R%d", currentRegister - 1);

            char tempBuffer3[3];
            sprintf(tempBuffer3, "R%d", currentRegister++);

            addQuadruple(ADD, tempBuffer1, tempBuffer2, tempBuffer3);
        ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 609 "yacc_file.y"
    {
            if ((yyvsp[(1) - (3)].fValue) == GLOBAL_STRING || (yyvsp[(3) - (3)].fValue) == GLOBAL_STRING)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            (yyval.fValue) = (yyvsp[(1) - (3)].fValue) - (yyvsp[(3) - (3)].fValue);

            // Store the value stored in the register to the variable
            char tempBuffer1[3];
            sprintf(tempBuffer1, "R%d", currentRegister - (2 + 2 * instructionsConsidered));

            char tempBuffer2[3];
            sprintf(tempBuffer2, "R%d", currentRegister - 1);

            char tempBuffer3[3];
            sprintf(tempBuffer3, "R%d", currentRegister++);

            addQuadruple(SUB, tempBuffer1, tempBuffer2, tempBuffer3);
            instructionsConsidered++;
        ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 627 "yacc_file.y"
    {
            if ((yyvsp[(1) - (3)].fValue) == GLOBAL_STRING || (yyvsp[(3) - (3)].fValue) == GLOBAL_STRING)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            (yyval.fValue) = (yyvsp[(1) - (3)].fValue) * (yyvsp[(3) - (3)].fValue);

            // Store the value stored in the register to the variable
            char tempBuffer1[3];
            sprintf(tempBuffer1, "R%d", currentRegister - 2);

            char tempBuffer2[3];
            sprintf(tempBuffer2, "R%d", currentRegister - 1);

            char tempBuffer3[3];
            sprintf(tempBuffer3, "R%d", currentRegister++);

            addQuadruple(MUL, tempBuffer1, tempBuffer2, tempBuffer3);
            instructionsConsidered++;
        ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 645 "yacc_file.y"
    {
            if ((yyvsp[(1) - (3)].fValue) == GLOBAL_STRING || (yyvsp[(3) - (3)].fValue) == GLOBAL_STRING)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            (yyval.fValue) = (yyvsp[(1) - (3)].fValue) / (yyvsp[(3) - (3)].fValue);

            // Store the value stored in the register to the variable
            char tempBuffer1[3];
            sprintf(tempBuffer1, "R%d", currentRegister - 2);

            char tempBuffer2[3];
            sprintf(tempBuffer2, "R%d", currentRegister - 1);

            char tempBuffer3[3];
            sprintf(tempBuffer3, "R%d", currentRegister++);

            addQuadruple(DIV, tempBuffer1, tempBuffer2, tempBuffer3);
            instructionsConsidered++;
        ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 663 "yacc_file.y"
    {
            if ((yyvsp[(1) - (3)].fValue) == GLOBAL_STRING || (yyvsp[(3) - (3)].fValue) == GLOBAL_STRING)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            (yyval.fValue) = (int) (yyvsp[(1) - (3)].fValue) % (int) (yyvsp[(3) - (3)].fValue);
        ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 668 "yacc_file.y"
    {
            int answer = 1;
            for (int i = 0; i < (yyvsp[(3) - (3)].fValue); i++)
                answer *= (yyvsp[(1) - (3)].fValue);
            (yyval.fValue) = answer;
        ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 674 "yacc_file.y"
    {
            if ((yyvsp[(1) - (1)].fValue) == ERROR_UNDECLARED)
                handleError(ERROR_UNDECLARED, -1, "");
            else if ((yyvsp[(1) - (1)].fValue) == ERROR_UNINITIALIZED)
                handleError(ERROR_UNINITIALIZED, -1, "");
            else if ((yyvsp[(1) - (1)].fValue) == GLOBAL_STRING){
                (yyval.fValue) = GLOBAL_STRING;
            }
            else if ((yyvsp[(1) - (1)].fValue) == GLOBAL_VOID){
                (yyval.fValue) = GLOBAL_VOID;
            }
            else if ((yyvsp[(1) - (1)].fValue) == GLOBAL_NUMBER){
                (yyval.fValue) = globalNumber;
            }
            else if ((yyvsp[(1) - (1)].fValue) == GLOBAL_UNCERTAIN){
                (yyval.fValue) = GLOBAL_UNCERTAIN;
            }
            else {
                int symbolIndex = (int) (yyvsp[(1) - (1)].fValue);
                if (symbolTable[symbolIndex].type == TYPE_STRING){

                    // Check if certain
                    globalCertainString = symbolTable[symbolIndex].isCertain;
                    if (globalCertainString)
                        globalString = strdup(symbolTable[symbolIndex].stringValue);
                    else
                    // The else here is to prevent segmentation error in further propagation
                        globalString = strdup("?");

                    (yyval.fValue) = GLOBAL_STRING;
                }
                else if (symbolTable[symbolIndex].isCertain == false)
                    (yyval.fValue) = GLOBAL_UNCERTAIN;
                else if (symbolTable[symbolIndex].type == TYPE_INT || symbolTable[symbolIndex].type == TYPE_BOOL)
                    (yyval.fValue) = symbolTable[symbolIndex].value;
                else if (symbolTable[symbolIndex].type == TYPE_FLOAT)
                    (yyval.fValue) = symbolTable[symbolIndex].fValue;
            }
        ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 713 "yacc_file.y"
    {
            (yyval.fValue) = (yyvsp[(2) - (3)].fValue);
        ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 718 "yacc_file.y"
    {
            int symbolIndex = getSymbolIndex((yyvsp[(1) - (1)].sName));
            // In case of undeclared symbol
            if (symbolIndex == -1) {
                (yyval.fValue) = ERROR_UNDECLARED;
            }
            // In case of uninitialized symbol
            else if (symbolTable[symbolIndex].isInitialized != true) {
                (yyval.fValue) = ERROR_UNINITIALIZED;
            }
            // Otherwise return the symbol index
            else {
                symbolTable[symbolIndex].isUsed = true;
                (yyval.fValue) = symbolIndex;
            }
        ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 734 "yacc_file.y"
    {
            // Return the global string indicator
            globalString = strdup((yyvsp[(1) - (1)].cValue));
            globalCertainString = true;
            (yyval.fValue) = GLOBAL_STRING;
        ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 740 "yacc_file.y"
    {
            // Return the global number indicator
            globalNumber = (yyvsp[(1) - (1)].fValue);
            (yyval.fValue) = GLOBAL_NUMBER;

            // Store the number into a register
            char tempBuffer[3];
            sprintf(tempBuffer, "R%d", currentRegister++);

            char tempBuffer2[5];
            sprintf(tempBuffer2, "%.2f", globalNumber);
            addQuadruple(MOV, tempBuffer, tempBuffer2, "");
        ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 753 "yacc_file.y"
    {
            // Return the symbol index for the function
            (yyval.fValue) = (yyvsp[(1) - (1)].iValue);
        ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 759 "yacc_file.y"
    {
            (yyval.fValue) = (int) (yyvsp[(1) - (1)].iValue);
        ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 762 "yacc_file.y"
    {
            (yyval.fValue) = (yyvsp[(1) - (1)].fValue);
        ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 767 "yacc_file.y"
    {
            // In case the function is of type void
            if ((yyvsp[(1) - (3)].fValue) == GLOBAL_VOID || (yyvsp[(3) - (3)].fValue) == GLOBAL_VOID)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            // Indicate uncertainty if exists
            else if ((yyvsp[(1) - (3)].fValue) == GLOBAL_UNCERTAIN || (yyvsp[(3) - (3)].fValue) == GLOBAL_UNCERTAIN)
                (yyval.fValue) = GLOBAL_UNCERTAIN;
            else
                (yyval.fValue) = (yyvsp[(1) - (3)].fValue) && (yyvsp[(3) - (3)].fValue);

            // AND Operation
            char tempBuffer1[3];
            sprintf(tempBuffer1, "R%d", currentRegister - 2);

            char tempBuffer2[3];
            sprintf(tempBuffer2, "R%d", currentRegister - 1);

            char tempBuffer3[3];
            sprintf(tempBuffer3, "R%d", currentRegister++);

            addQuadruple(AND, tempBuffer1, tempBuffer2, tempBuffer3);
        ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 789 "yacc_file.y"
    {
            // In case the function is of type void
            if ((yyvsp[(1) - (3)].fValue) == GLOBAL_VOID || (yyvsp[(3) - (3)].fValue) == GLOBAL_VOID)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            // Indicate uncertainty if exists
            else if ((yyvsp[(1) - (3)].fValue) == GLOBAL_UNCERTAIN || (yyvsp[(3) - (3)].fValue) == GLOBAL_UNCERTAIN)
                (yyval.fValue) = GLOBAL_UNCERTAIN;
            else
                (yyval.fValue) = (yyvsp[(1) - (3)].fValue) || (yyvsp[(3) - (3)].fValue);

            // OR Operation
            char tempBuffer1[3];
            sprintf(tempBuffer1, "R%d", currentRegister - 2);

            char tempBuffer2[3];
            sprintf(tempBuffer2, "R%d", currentRegister - 1);

            char tempBuffer3[3];
            sprintf(tempBuffer3, "R%d", currentRegister++);

            addQuadruple(OR, tempBuffer1, tempBuffer2, tempBuffer3);
        ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 811 "yacc_file.y"
    {
            (yyval.fValue) = (yyvsp[(1) - (1)].fValue);
        ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 817 "yacc_file.y"
    {
            // In case the function is of type void
            if ((yyvsp[(2) - (2)].fValue) == GLOBAL_VOID)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            // Indicate uncertainty if exists
            else if ((yyvsp[(2) - (2)].fValue) == GLOBAL_UNCERTAIN)
                (yyval.fValue) = GLOBAL_UNCERTAIN;
            else
                (yyval.fValue) = !(yyvsp[(2) - (2)].fValue);
            
            // NOT Operation
            char tempBuffer1[3];
            sprintf(tempBuffer1, "R%d", currentRegister - 1);

            addQuadruple(NOT, tempBuffer1, tempBuffer1, "");
        ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 833 "yacc_file.y"
    {
            // In case the function is of type void
            if ((yyvsp[(2) - (2)].fValue) == GLOBAL_VOID)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            // Indicate uncertainty if exists
            else if ((yyvsp[(2) - (2)].fValue) == GLOBAL_UNCERTAIN)
                (yyval.fValue) = GLOBAL_UNCERTAIN;
            else {
                // Parse the value in case of not being a string
                int symbolIndex = (yyvsp[(2) - (2)].fValue);
                float value;
                if (symbolIndex == GLOBAL_STRING)
                    handleError(ERROR_TYPE_MISMATCH, -1, "");
                else if (symbolIndex == GLOBAL_NUMBER)
                    value = globalNumber;
                else {
                    if (symbolTable[symbolIndex].type == TYPE_FLOAT)
                        value = symbolTable[symbolIndex].fValue;
                    else
                        value = symbolTable[symbolIndex].value;
                }
                if (value == 0)
                    (yyval.fValue) = 1;
                else
                    (yyval.fValue) = 0;
            }
        ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 860 "yacc_file.y"
    {
            // In case the function is of type void
            if ((yyvsp[(2) - (2)].fValue) == GLOBAL_VOID)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            // Indicate uncertainty if exists
            else if ((yyvsp[(2) - (2)].fValue) == GLOBAL_UNCERTAIN)
                (yyval.fValue) = GLOBAL_UNCERTAIN;
            else {
                // Parse the value in case of not being a string
                int symbolIndex = (yyvsp[(2) - (2)].fValue);
                float value;
                if (symbolIndex == GLOBAL_STRING)
                    handleError(ERROR_TYPE_MISMATCH, -1, "");
                else if (symbolIndex == GLOBAL_NUMBER)
                    value = globalNumber;
                else {
                    if (symbolTable[symbolIndex].type == TYPE_FLOAT)
                        value = symbolTable[symbolIndex].fValue;
                    else
                        value = symbolTable[symbolIndex].value;
                }
                if (value == 0) {
                    (yyval.fValue) = 0;
                    // Put 1 into register
                    char tempBuffer1[3];
                    sprintf(tempBuffer1, "R%d", currentRegister++);

                    addQuadruple(MOV, tempBuffer1, "0", "");
                }
                else {
                    (yyval.fValue) = 1;
                    // Put 0 into register
                    char tempBuffer1[3];
                    sprintf(tempBuffer1, "R%d", currentRegister++);

                    addQuadruple(MOV, tempBuffer1, "1", "");
                }
            }
        ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 899 "yacc_file.y"
    {
            (yyval.fValue) = true;
            // Put 1 into register
            char tempBuffer1[3];
            sprintf(tempBuffer1, "R%d", currentRegister++);

            addQuadruple(MOV, tempBuffer1, "1", "");
        ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 907 "yacc_file.y"
    {
            (yyval.fValue) = false;
            // Put 0 into register
            char tempBuffer1[3];
            sprintf(tempBuffer1, "R%d", currentRegister++);

            addQuadruple(MOV, tempBuffer1, "0", "");
        ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 915 "yacc_file.y"
    {
            (yyval.fValue) = (yyvsp[(1) - (1)].iValue);
        ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 918 "yacc_file.y"
    {
            (yyval.fValue) = (yyvsp[(2) - (3)].fValue);
        ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 923 "yacc_file.y"
    {
            if ((yyvsp[(1) - (3)].fValue) == GLOBAL_STRING || (yyvsp[(3) - (3)].fValue) == GLOBAL_STRING)
                handleError(ERROR_TYPE_MISMATCH, -1, "");

            // In case the function is of type void
            else if ((yyvsp[(1) - (3)].fValue) == GLOBAL_VOID || (yyvsp[(3) - (3)].fValue) == GLOBAL_VOID)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            // Indicate uncertainty if exists
            else if ((yyvsp[(1) - (3)].fValue) == GLOBAL_UNCERTAIN || (yyvsp[(3) - (3)].fValue) == GLOBAL_UNCERTAIN)
                (yyval.iValue) = GLOBAL_UNCERTAIN;
            else {
                // Send the two incoming values for parsing and the comparator
                int result = processComparator((yyvsp[(1) - (3)].fValue), (yyvsp[(3) - (3)].fValue), EQ_OP);

                if (result == TWO_NUMBERS_COMPARISON)
                    handleError(ERROR_UNKNOWN, -1, "");
                
                // Return the output of the comparison
                (yyval.iValue) = result;
                
                // Compare the return values
                char tempBuffer1[8];
                if ((yyvsp[(1) - (3)].fValue) == GLOBAL_NUMBER)
                    sprintf(tempBuffer1, "%.2f", globalNumber);
                else
                    sprintf(tempBuffer1, "%s", symbolTable[(int)(yyvsp[(1) - (3)].fValue)].name);

                char tempBuffer2[8];
                if ((yyvsp[(3) - (3)].fValue) == GLOBAL_NUMBER)
                    sprintf(tempBuffer2, "%.2f", globalNumber);
                else
                    sprintf(tempBuffer2, "%s", symbolTable[(int)(yyvsp[(3) - (3)].fValue)].name);

                addQuadruple(CMPEQ, tempBuffer1, tempBuffer2, "");
            }
        ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 959 "yacc_file.y"
    {
            if ((yyvsp[(1) - (3)].fValue) == GLOBAL_STRING || (yyvsp[(3) - (3)].fValue) == GLOBAL_STRING)
                handleError(ERROR_TYPE_MISMATCH, -1, "");

            // In case the function is of type void
            else if ((yyvsp[(1) - (3)].fValue) == GLOBAL_VOID || (yyvsp[(3) - (3)].fValue) == GLOBAL_VOID)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            // Indicate uncertainty if exists
            else if ((yyvsp[(1) - (3)].fValue) == GLOBAL_UNCERTAIN || (yyvsp[(3) - (3)].fValue) == GLOBAL_UNCERTAIN)
                (yyval.iValue) = GLOBAL_UNCERTAIN;
            else {
                // Send the two incoming values for parsing and the comparator
                int result = processComparator((yyvsp[(1) - (3)].fValue), (yyvsp[(3) - (3)].fValue), NEQ_OP);

                if (result == TWO_NUMBERS_COMPARISON)
                    handleError(ERROR_UNKNOWN, -1, "");
                
                // Return the output of the comparison
                (yyval.iValue) = result;

                // Compare the return values
                char tempBuffer1[8];
                if ((yyvsp[(1) - (3)].fValue) == GLOBAL_NUMBER)
                    sprintf(tempBuffer1, "%.2f", globalNumber);
                else
                    sprintf(tempBuffer1, "%s", symbolTable[(int)(yyvsp[(1) - (3)].fValue)].name);

                char tempBuffer2[8];
                if ((yyvsp[(3) - (3)].fValue) == GLOBAL_NUMBER)
                    sprintf(tempBuffer2, "%.2f", globalNumber);
                else
                    sprintf(tempBuffer2, "%s", symbolTable[(int)(yyvsp[(3) - (3)].fValue)].name);

                addQuadruple(CMPNEQ, tempBuffer1, tempBuffer2, "");
            }
        ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 995 "yacc_file.y"
    {
            if ((yyvsp[(1) - (3)].fValue) == GLOBAL_STRING || (yyvsp[(3) - (3)].fValue) == GLOBAL_STRING)
                handleError(ERROR_TYPE_MISMATCH, -1, "");

            // In case the function is of type void
            else if ((yyvsp[(1) - (3)].fValue) == GLOBAL_VOID || (yyvsp[(3) - (3)].fValue) == GLOBAL_VOID)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            // Indicate uncertainty if exists
            else if ((yyvsp[(1) - (3)].fValue) == GLOBAL_UNCERTAIN || (yyvsp[(3) - (3)].fValue) == GLOBAL_UNCERTAIN)
                (yyval.iValue) = GLOBAL_UNCERTAIN;
            else {
                // Send the two incoming values for parsing and the comparator
                int result = processComparator((yyvsp[(1) - (3)].fValue), (yyvsp[(3) - (3)].fValue), LS_OP);

                if (result == TWO_NUMBERS_COMPARISON)
                    handleError(ERROR_UNKNOWN, -1, "");
                
                // Return the output of the comparison
                (yyval.iValue) = result;

                // Compare the return values
                char tempBuffer1[8];
                if ((yyvsp[(1) - (3)].fValue) == GLOBAL_NUMBER)
                    sprintf(tempBuffer1, "%.2f", globalNumber);
                else
                    sprintf(tempBuffer1, "%s", symbolTable[(int)(yyvsp[(1) - (3)].fValue)].name);

                char tempBuffer2[8];
                if ((yyvsp[(3) - (3)].fValue) == GLOBAL_NUMBER)
                    sprintf(tempBuffer2, "%.2f", globalNumber);
                else
                    sprintf(tempBuffer2, "%s", symbolTable[(int)(yyvsp[(3) - (3)].fValue)].name);

                addQuadruple(CMPLT, tempBuffer1, tempBuffer2, "");
            }
        ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 1031 "yacc_file.y"
    {
            if ((yyvsp[(1) - (3)].fValue) == GLOBAL_STRING || (yyvsp[(3) - (3)].fValue) == GLOBAL_STRING)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            
            // In case the function is of type void
            else if ((yyvsp[(1) - (3)].fValue) == GLOBAL_VOID || (yyvsp[(3) - (3)].fValue) == GLOBAL_VOID)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            // Indicate uncertainty if exists
            else if ((yyvsp[(1) - (3)].fValue) == GLOBAL_UNCERTAIN || (yyvsp[(3) - (3)].fValue) == GLOBAL_UNCERTAIN)
                (yyval.iValue) = GLOBAL_UNCERTAIN;
            else {
                // Send the two incoming values for parsing and the comparator
                int result = processComparator((yyvsp[(1) - (3)].fValue), (yyvsp[(3) - (3)].fValue), LSE_OP);

                if (result == TWO_NUMBERS_COMPARISON)
                    handleError(ERROR_UNKNOWN, -1, "");
                
                // Return the output of the comparison
                (yyval.iValue) = result;

                // Compare the return values
                char tempBuffer1[8];
                if ((yyvsp[(1) - (3)].fValue) == GLOBAL_NUMBER)
                    sprintf(tempBuffer1, "%.2f", globalNumber);
                else
                    sprintf(tempBuffer1, "%s", symbolTable[(int)(yyvsp[(1) - (3)].fValue)].name);

                char tempBuffer2[8];
                if ((yyvsp[(3) - (3)].fValue) == GLOBAL_NUMBER)
                    sprintf(tempBuffer2, "%.2f", globalNumber);
                else
                    sprintf(tempBuffer2, "%s", symbolTable[(int)(yyvsp[(3) - (3)].fValue)].name);

                addQuadruple(CMPLE, tempBuffer1, tempBuffer2, "");
            }
        ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 1067 "yacc_file.y"
    {
            if ((yyvsp[(1) - (3)].fValue) == GLOBAL_STRING || (yyvsp[(3) - (3)].fValue) == GLOBAL_STRING)
                handleError(ERROR_TYPE_MISMATCH, -1, "");

            // In case the function is of type void
            else if ((yyvsp[(1) - (3)].fValue) == GLOBAL_VOID || (yyvsp[(3) - (3)].fValue) == GLOBAL_VOID)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            // Indicate uncertainty if exists
            else if ((yyvsp[(1) - (3)].fValue) == GLOBAL_UNCERTAIN || (yyvsp[(3) - (3)].fValue) == GLOBAL_UNCERTAIN)
                (yyval.iValue) = GLOBAL_UNCERTAIN;
            else {
                // Send the two incoming values for parsing and the comparator
                int result = processComparator((yyvsp[(1) - (3)].fValue), (yyvsp[(3) - (3)].fValue), GR_OP);

                if (result == TWO_NUMBERS_COMPARISON)
                    handleError(ERROR_UNKNOWN, -1, "");
                
                // Return the output of the comparison
                (yyval.iValue) = result;

                // Compare the return values
                char tempBuffer1[8];
                if ((yyvsp[(1) - (3)].fValue) == GLOBAL_NUMBER)
                    sprintf(tempBuffer1, "%.2f", globalNumber);
                else
                    sprintf(tempBuffer1, "%s", symbolTable[(int)(yyvsp[(1) - (3)].fValue)].name);

                char tempBuffer2[8];
                if ((yyvsp[(3) - (3)].fValue) == GLOBAL_NUMBER)
                    sprintf(tempBuffer2, "%.2f", globalNumber);
                else
                    sprintf(tempBuffer2, "%s", symbolTable[(int)(yyvsp[(3) - (3)].fValue)].name);

                addQuadruple(CMPGT, tempBuffer1, tempBuffer2, "");
            }
        ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 1103 "yacc_file.y"
    {
            if ((yyvsp[(1) - (3)].fValue) == GLOBAL_STRING || (yyvsp[(3) - (3)].fValue) == GLOBAL_STRING)
                handleError(ERROR_TYPE_MISMATCH, -1, "");

            // In case the function is of type void
            else if ((yyvsp[(1) - (3)].fValue) == GLOBAL_VOID || (yyvsp[(3) - (3)].fValue) == GLOBAL_VOID)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            // Indicate uncertainty if exists
            else if ((yyvsp[(1) - (3)].fValue) == GLOBAL_UNCERTAIN || (yyvsp[(3) - (3)].fValue) == GLOBAL_UNCERTAIN)
                (yyval.iValue) = GLOBAL_UNCERTAIN;
            else {
                // Send the two incoming values for parsing and the comparator
                int result = processComparator((yyvsp[(1) - (3)].fValue), (yyvsp[(3) - (3)].fValue), GRE_OP);

                if (result == TWO_NUMBERS_COMPARISON)
                    handleError(ERROR_UNKNOWN, -1, "");
                
                // Return the output of the comparison
                (yyval.iValue) = result;

                // Compare the return values
                char tempBuffer1[8];
                if ((yyvsp[(1) - (3)].fValue) == GLOBAL_NUMBER)
                    sprintf(tempBuffer1, "%.2f", globalNumber);
                else
                    sprintf(tempBuffer1, "%s", symbolTable[(int)(yyvsp[(1) - (3)].fValue)].name);

                char tempBuffer2[8];
                if ((yyvsp[(3) - (3)].fValue) == GLOBAL_NUMBER)
                    sprintf(tempBuffer2, "%.2f", globalNumber);
                else
                    sprintf(tempBuffer2, "%s", symbolTable[(int)(yyvsp[(3) - (3)].fValue)].name);

                addQuadruple(CMPGE, tempBuffer1, tempBuffer2, "");
            }
        ;}
    break;



/* Line 1455 of yacc.c  */
#line 3301 "yacc_file.tab.c"
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
#line 1140 "yacc_file.y"


  
int main(int argc, char *argv[])
{
    initSymbolTable();

    yyin = fopen(argv[1], "r");

    symbolTableFile = fopen(argv[2], "w");
    quadruplesFile = fopen(argv[3], "w");
    errorsFile = fopen(argv[4], "w");
  
    yyparse();

    fclose(yyin);

    destroySymbolTable();

    printQuadruples();
    destroyQuadruples();

    fclose(symbolTableFile);
    fclose(quadruplesFile);
    fclose(errorsFile);

    return 0;
}
