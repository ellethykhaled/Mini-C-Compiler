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
    #endif
    
    extern int yylex();
    
    extern FILE *yyin;

    extern int lineNumber;

#line 90 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INT_TYPE = 258,                /* INT_TYPE  */
    FLOAT_TYPE = 259,              /* FLOAT_TYPE  */
    STRING_TYPE = 260,             /* STRING_TYPE  */
    BOOLEAN_TYPE = 261,            /* BOOLEAN_TYPE  */
    CONSTANT = 262,                /* CONSTANT  */
    TRUE = 263,                    /* TRUE  */
    FALSE = 264,                   /* FALSE  */
    M_OP_PLUS = 265,               /* M_OP_PLUS  */
    M_OP_MINUS = 266,              /* M_OP_MINUS  */
    M_OP_MULT = 267,               /* M_OP_MULT  */
    M_OP_DIV = 268,                /* M_OP_DIV  */
    M_OP_MOD = 269,                /* M_OP_MOD  */
    M_OP_POWER = 270,              /* M_OP_POWER  */
    L_OP_NOT = 271,                /* L_OP_NOT  */
    L_OP_EXACT = 272,              /* L_OP_EXACT  */
    L_OP_AND = 273,                /* L_OP_AND  */
    L_OP_OR = 274,                 /* L_OP_OR  */
    OP_ASSIGN = 275,               /* OP_ASSIGN  */
    OP_EQUAL = 276,                /* OP_EQUAL  */
    OP_NOT_EQUAL = 277,            /* OP_NOT_EQUAL  */
    OP_LESS = 278,                 /* OP_LESS  */
    OP_LESS_EQUAL = 279,           /* OP_LESS_EQUAL  */
    OP_GREATER = 280,              /* OP_GREATER  */
    OP_GREATER_EQUAL = 281,        /* OP_GREATER_EQUAL  */
    TERMINATOR = 282,              /* TERMINATOR  */
    CLOSING_BRACKET = 283,         /* CLOSING_BRACKET  */
    OPENING_BLOCK_BRACES = 284,    /* OPENING_BLOCK_BRACES  */
    OPENING_BRACKET = 285,         /* OPENING_BRACKET  */
    CLOSING_BRACES = 286,          /* CLOSING_BRACES  */
    OPENING_BRACES = 287,          /* OPENING_BRACES  */
    FOR = 288,                     /* FOR  */
    WHILE = 289,                   /* WHILE  */
    REPEAT = 290,                  /* REPEAT  */
    RETURN = 291,                  /* RETURN  */
    ENUM = 292,                    /* ENUM  */
    COMMA = 293,                   /* COMMA  */
    IF = 294,                      /* IF  */
    THEN = 295,                    /* THEN  */
    ELSE = 296,                    /* ELSE  */
    SWITCH = 297,                  /* SWITCH  */
    CASE = 298,                    /* CASE  */
    DEFAULT = 299,                 /* DEFAULT  */
    FUNCTION = 300,                /* FUNCTION  */
    CALL = 301,                    /* CALL  */
    VOID_TYPE = 302,               /* VOID_TYPE  */
    IDENTIFIER = 303,              /* IDENTIFIER  */
    INTEGER_NUMBER = 304,          /* INTEGER_NUMBER  */
    FLOAT_NUMBER = 305,            /* FLOAT_NUMBER  */
    STRING = 306                   /* STRING  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define INT_TYPE 258
#define FLOAT_TYPE 259
#define STRING_TYPE 260
#define BOOLEAN_TYPE 261
#define CONSTANT 262
#define TRUE 263
#define FALSE 264
#define M_OP_PLUS 265
#define M_OP_MINUS 266
#define M_OP_MULT 267
#define M_OP_DIV 268
#define M_OP_MOD 269
#define M_OP_POWER 270
#define L_OP_NOT 271
#define L_OP_EXACT 272
#define L_OP_AND 273
#define L_OP_OR 274
#define OP_ASSIGN 275
#define OP_EQUAL 276
#define OP_NOT_EQUAL 277
#define OP_LESS 278
#define OP_LESS_EQUAL 279
#define OP_GREATER 280
#define OP_GREATER_EQUAL 281
#define TERMINATOR 282
#define CLOSING_BRACKET 283
#define OPENING_BLOCK_BRACES 284
#define OPENING_BRACKET 285
#define CLOSING_BRACES 286
#define OPENING_BRACES 287
#define FOR 288
#define WHILE 289
#define REPEAT 290
#define RETURN 291
#define ENUM 292
#define COMMA 293
#define IF 294
#define THEN 295
#define ELSE 296
#define SWITCH 297
#define CASE 298
#define DEFAULT 299
#define FUNCTION 300
#define CALL 301
#define VOID_TYPE 302
#define IDENTIFIER 303
#define INTEGER_NUMBER 304
#define FLOAT_NUMBER 305
#define STRING 306

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 47 "yacc_file.y"

    struct symbolItem *sValue;

    int sIndex;
    char * sName;

    float fValue;
    int iValue;
    char * cValue;

#line 256 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT_TYPE = 3,                   /* INT_TYPE  */
  YYSYMBOL_FLOAT_TYPE = 4,                 /* FLOAT_TYPE  */
  YYSYMBOL_STRING_TYPE = 5,                /* STRING_TYPE  */
  YYSYMBOL_BOOLEAN_TYPE = 6,               /* BOOLEAN_TYPE  */
  YYSYMBOL_CONSTANT = 7,                   /* CONSTANT  */
  YYSYMBOL_TRUE = 8,                       /* TRUE  */
  YYSYMBOL_FALSE = 9,                      /* FALSE  */
  YYSYMBOL_M_OP_PLUS = 10,                 /* M_OP_PLUS  */
  YYSYMBOL_M_OP_MINUS = 11,                /* M_OP_MINUS  */
  YYSYMBOL_M_OP_MULT = 12,                 /* M_OP_MULT  */
  YYSYMBOL_M_OP_DIV = 13,                  /* M_OP_DIV  */
  YYSYMBOL_M_OP_MOD = 14,                  /* M_OP_MOD  */
  YYSYMBOL_M_OP_POWER = 15,                /* M_OP_POWER  */
  YYSYMBOL_L_OP_NOT = 16,                  /* L_OP_NOT  */
  YYSYMBOL_L_OP_EXACT = 17,                /* L_OP_EXACT  */
  YYSYMBOL_L_OP_AND = 18,                  /* L_OP_AND  */
  YYSYMBOL_L_OP_OR = 19,                   /* L_OP_OR  */
  YYSYMBOL_OP_ASSIGN = 20,                 /* OP_ASSIGN  */
  YYSYMBOL_OP_EQUAL = 21,                  /* OP_EQUAL  */
  YYSYMBOL_OP_NOT_EQUAL = 22,              /* OP_NOT_EQUAL  */
  YYSYMBOL_OP_LESS = 23,                   /* OP_LESS  */
  YYSYMBOL_OP_LESS_EQUAL = 24,             /* OP_LESS_EQUAL  */
  YYSYMBOL_OP_GREATER = 25,                /* OP_GREATER  */
  YYSYMBOL_OP_GREATER_EQUAL = 26,          /* OP_GREATER_EQUAL  */
  YYSYMBOL_TERMINATOR = 27,                /* TERMINATOR  */
  YYSYMBOL_CLOSING_BRACKET = 28,           /* CLOSING_BRACKET  */
  YYSYMBOL_OPENING_BLOCK_BRACES = 29,      /* OPENING_BLOCK_BRACES  */
  YYSYMBOL_OPENING_BRACKET = 30,           /* OPENING_BRACKET  */
  YYSYMBOL_CLOSING_BRACES = 31,            /* CLOSING_BRACES  */
  YYSYMBOL_OPENING_BRACES = 32,            /* OPENING_BRACES  */
  YYSYMBOL_FOR = 33,                       /* FOR  */
  YYSYMBOL_WHILE = 34,                     /* WHILE  */
  YYSYMBOL_REPEAT = 35,                    /* REPEAT  */
  YYSYMBOL_RETURN = 36,                    /* RETURN  */
  YYSYMBOL_ENUM = 37,                      /* ENUM  */
  YYSYMBOL_COMMA = 38,                     /* COMMA  */
  YYSYMBOL_IF = 39,                        /* IF  */
  YYSYMBOL_THEN = 40,                      /* THEN  */
  YYSYMBOL_ELSE = 41,                      /* ELSE  */
  YYSYMBOL_SWITCH = 42,                    /* SWITCH  */
  YYSYMBOL_CASE = 43,                      /* CASE  */
  YYSYMBOL_DEFAULT = 44,                   /* DEFAULT  */
  YYSYMBOL_FUNCTION = 45,                  /* FUNCTION  */
  YYSYMBOL_CALL = 46,                      /* CALL  */
  YYSYMBOL_VOID_TYPE = 47,                 /* VOID_TYPE  */
  YYSYMBOL_IDENTIFIER = 48,                /* IDENTIFIER  */
  YYSYMBOL_INTEGER_NUMBER = 49,            /* INTEGER_NUMBER  */
  YYSYMBOL_FLOAT_NUMBER = 50,              /* FLOAT_NUMBER  */
  YYSYMBOL_STRING = 51,                    /* STRING  */
  YYSYMBOL_YYACCEPT = 52,                  /* $accept  */
  YYSYMBOL_program = 53,                   /* program  */
  YYSYMBOL_sub_program = 54,               /* sub_program  */
  YYSYMBOL_block_structure = 55,           /* block_structure  */
  YYSYMBOL_function_call = 56,             /* function_call  */
  YYSYMBOL_function_arguments = 57,        /* function_arguments  */
  YYSYMBOL_function_arguments2 = 58,       /* function_arguments2  */
  YYSYMBOL_function_definition = 59,       /* function_definition  */
  YYSYMBOL_function_parameters = 60,       /* function_parameters  */
  YYSYMBOL_function_parameters2 = 61,      /* function_parameters2  */
  YYSYMBOL_enumeration = 62,               /* enumeration  */
  YYSYMBOL_enum_body = 63,                 /* enum_body  */
  YYSYMBOL_switch_case = 64,               /* switch_case  */
  YYSYMBOL_switch_body = 65,               /* switch_body  */
  YYSYMBOL_switch_end = 66,                /* switch_end  */
  YYSYMBOL_single_line = 67,               /* single_line  */
  YYSYMBOL_while_loop = 68,                /* while_loop  */
  YYSYMBOL_do_while = 69,                  /* do_while  */
  YYSYMBOL_for_loop = 70,                  /* for_loop  */
  YYSYMBOL_line_or_null = 71,              /* line_or_null  */
  YYSYMBOL_if_stmt = 72,                   /* if_stmt  */
  YYSYMBOL_else_stmt = 73,                 /* else_stmt  */
  YYSYMBOL_constant_variable_declaration = 74, /* constant_variable_declaration  */
  YYSYMBOL_variable_or_function_declaration = 75, /* variable_or_function_declaration  */
  YYSYMBOL_variable_assignment = 76,       /* variable_assignment  */
  YYSYMBOL_expr = 77,                      /* expr  */
  YYSYMBOL_maths_expr = 78,                /* maths_expr  */
  YYSYMBOL_return_value = 79,              /* return_value  */
  YYSYMBOL_number = 80,                    /* number  */
  YYSYMBOL_logical_expression = 81,        /* logical_expression  */
  YYSYMBOL_logical_expression2 = 82,       /* logical_expression2  */
  YYSYMBOL_comparison_expression = 83      /* comparison_expression  */
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
#define YYFINAL  75
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1434

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  226

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   306


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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    70,    70,    71,    72,    75,    81,    84,    85,    86,
      87,    88,    89,    90,    91,    94,    95,    98,   144,   148,
     161,   162,   176,   193,   210,   225,   242,   246,   259,   260,
     274,   304,   304,   317,   318,   321,   322,   323,   324,   327,
     328,   331,   335,   339,   343,   349,   350,   352,   353,   356,
     358,   361,   362,   367,   371,   376,   377,   380,   385,   399,
     411,   423,   435,   449,   473,   497,   510,   515,   520,   525,
     530,   535,   540,   546,   585,   590,   606,   612,   617,   623,
     626,   631,   641,   651,   657,   667,   694,   721,   724,   727,
     730,   735,   756,   777,   798,   819,   840
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
  "\"end of file\"", "error", "\"invalid token\"", "INT_TYPE",
  "FLOAT_TYPE", "STRING_TYPE", "BOOLEAN_TYPE", "CONSTANT", "TRUE", "FALSE",
  "M_OP_PLUS", "M_OP_MINUS", "M_OP_MULT", "M_OP_DIV", "M_OP_MOD",
  "M_OP_POWER", "L_OP_NOT", "L_OP_EXACT", "L_OP_AND", "L_OP_OR",
  "OP_ASSIGN", "OP_EQUAL", "OP_NOT_EQUAL", "OP_LESS", "OP_LESS_EQUAL",
  "OP_GREATER", "OP_GREATER_EQUAL", "TERMINATOR", "CLOSING_BRACKET",
  "OPENING_BLOCK_BRACES", "OPENING_BRACKET", "CLOSING_BRACES",
  "OPENING_BRACES", "FOR", "WHILE", "REPEAT", "RETURN", "ENUM", "COMMA",
  "IF", "THEN", "ELSE", "SWITCH", "CASE", "DEFAULT", "FUNCTION", "CALL",
  "VOID_TYPE", "IDENTIFIER", "INTEGER_NUMBER", "FLOAT_NUMBER", "STRING",
  "$accept", "program", "sub_program", "block_structure", "function_call",
  "function_arguments", "function_arguments2", "function_definition",
  "function_parameters", "function_parameters2", "enumeration",
  "enum_body", "switch_case", "switch_body", "switch_end", "single_line",
  "while_loop", "do_while", "for_loop", "line_or_null", "if_stmt",
  "else_stmt", "constant_variable_declaration",
  "variable_or_function_declaration", "variable_assignment", "expr",
  "maths_expr", "return_value", "number", "logical_expression",
  "logical_expression2", "comparison_expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-182)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     691,   -42,   -36,   -33,   -26,     5,  -182,  -182,    18,    90,
     250,  1383,    31,    35,    38,    60,    40,    67,    50,    15,
      56,    98,  -182,  -182,  -182,   201,  -182,  -182,  -182,  -182,
    -182,  -182,    92,  -182,  -182,  -182,  -182,  -182,   100,  -182,
    -182,   102,   104,  -182,    14,  -182,  -182,  -182,  -182,  -182,
    -182,    98,   100,  -182,    18,  -182,   104,  -182,  -182,  -182,
     740,    30,    10,  1377,  1377,   299,  -182,  -182,    91,  1377,
      99,    84,   105,   113,  1383,  -182,  -182,  -182,  1383,     6,
       6,     6,     6,     6,     6,    90,    90,    90,    90,    90,
      90,    18,    18,   104,  -182,  -182,  -182,  -182,   107,   121,
     123,   789,   111,   132,     7,   133,   142,    90,  -182,  -182,
       6,   141,  -182,   141,   149,   149,   149,   149,  -182,  -182,
    -182,  -182,  -182,  -182,  -182,  -182,  1377,   134,  1377,   131,
     129,   135,    90,   137,    42,   140,   142,   145,   136,   148,
     144,   151,   348,  -182,  1377,   139,   152,   153,   157,   397,
      90,   160,  -182,   156,   162,   142,  -182,  -182,    90,  -182,
    1377,  -182,   838,  -182,   129,   168,   446,   495,  -182,   887,
     164,  -182,   167,   936,   136,   144,   175,  -182,  -182,  -182,
     178,   985,  -182,  1034,  -182,   544,  1083,    60,  1132,  -182,
    -182,   188,   189,  -182,   178,  -182,  -182,  1181,   165,  1230,
     195,    90,   593,   642,  -182,  -182,   196,   177,   161,   198,
    -182,  1279,   178,  1328,   197,   199,  -182,   202,  -182,  -182,
     178,  -182,   206,  -182,  -182,  -182
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,    87,    88,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    75,    79,    80,    76,     0,     2,    14,    78,    13,
      12,    11,     0,     9,    10,     8,     7,    42,    43,    44,
      41,    65,    73,    77,    66,    83,    89,    59,    60,    61,
      62,     0,     0,    58,     0,    75,    85,    84,    86,    16,
       0,     0,     0,    51,     0,     0,     5,     4,     0,     0,
       0,     0,     0,     0,     0,     1,     3,     6,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    15,    74,    90,    52,     0,     0,
       0,     0,     0,     0,     0,     0,    26,    18,    63,    64,
       0,    67,    73,    68,    69,    70,    71,    72,    91,    92,
      93,    94,    95,    96,    81,    82,    51,     0,     0,     0,
      31,     0,     0,     0,     0,     0,    26,     0,    28,     0,
      20,     0,     0,    48,     0,     0,     0,     0,     0,     0,
       0,     0,    34,     0,     0,     0,    27,    17,     0,    19,
      51,    46,     0,    47,    31,     0,     0,     0,    40,     0,
       0,    33,     0,     0,    28,    20,     0,    45,    32,    30,
      55,     0,    36,     0,    39,     0,     0,     0,     0,    29,
      21,     0,     0,    54,    55,    35,    38,     0,     0,     0,
       4,     0,     0,     0,    53,    37,     5,     0,     0,     0,
      50,     0,    55,     0,     0,     0,    23,     0,    49,    57,
      55,    25,     0,    22,    56,    24
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -182,    -5,   -11,  -182,  -182,  -182,    52,  -182,    93,    58,
    -182,    75,  -182,  -182,   108,   -39,  -182,  -182,  -182,  -123,
    -182,  -181,  -182,    -3,   236,   -15,    12,    -8,  -182,    -7,
       9,  -182
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    25,    26,    27,    28,   139,   159,    29,   137,   156,
      30,   146,    31,   134,   135,    32,    33,    34,    35,    98,
      36,   193,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      56,    58,    52,   141,    62,    60,    47,    67,     1,     2,
       3,     4,    48,   204,    76,    49,    72,    57,     1,     2,
       3,     4,    50,    61,    97,    99,     6,     7,    91,    92,
     103,   219,    91,    92,     8,     9,   110,   176,    96,   224,
      79,    80,    81,    82,    83,    84,    93,    62,    54,    76,
     132,   133,    20,    51,    55,    22,    23,    24,    95,   108,
     101,    63,    71,   109,    20,    64,    55,    22,    23,    24,
      65,   112,   112,   112,   112,   112,   112,   118,   119,   120,
     121,   122,   123,    93,    93,   150,   133,    97,    68,   143,
      76,   111,   113,   114,   115,   116,   117,    69,    70,   140,
     124,   125,   112,   138,    73,   163,    20,    66,    55,    22,
      23,    24,    79,    80,    81,    82,    83,    84,    74,    77,
      78,    97,    61,   102,   148,    85,    86,    87,    88,    89,
      90,   104,   105,   138,   126,   106,    20,   162,    55,    22,
      23,    24,   170,   107,   169,     1,     2,     3,     4,   127,
     175,    76,   174,    81,    82,    83,    84,   128,    76,   130,
     131,   181,   183,   136,    84,   144,   142,   145,   188,   149,
      76,   152,    76,   154,   155,   147,   157,    76,   160,   200,
     197,   199,   158,   165,   172,   166,    76,   164,    76,   167,
      67,   171,   216,   209,   173,   179,   185,   211,   213,   186,
      76,    75,    76,   191,     1,     2,     3,     4,     5,     6,
       7,    20,   206,    55,    22,    23,    24,     8,     9,   192,
     202,   203,   208,   214,   215,   217,   222,   190,   221,   153,
      10,    11,   189,   223,    12,    13,    14,   225,    16,   178,
      17,    53,   151,    18,     0,     0,    19,    20,     0,    21,
      22,    23,    24,     1,     2,     3,     4,     5,     6,     7,
       0,     0,     0,     0,     0,     0,     8,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,    59,     0,    12,    13,    14,    15,    16,     0,    17,
       0,     0,    18,     0,     0,    19,    20,     0,    21,    22,
      23,    24,     1,     2,     3,     4,     5,     6,     7,     0,
       0,     0,     0,     0,     0,     8,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
     100,     0,    12,    13,    14,    15,    16,     0,    17,     0,
       0,    18,     0,     0,    19,    20,     0,    21,    22,    23,
      24,     1,     2,     3,     4,     5,     6,     7,     0,     0,
       0,     0,     0,     0,     8,     9,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,   161,
       0,    12,    13,    14,    15,    16,     0,    17,     0,     0,
      18,     0,     0,    19,    20,     0,    21,    22,    23,    24,
       1,     2,     3,     4,     5,     6,     7,     0,     0,     0,
       0,     0,     0,     8,     9,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,   168,     0,
      12,    13,    14,    15,    16,     0,    17,     0,     0,    18,
       0,     0,    19,    20,     0,    21,    22,    23,    24,     1,
       2,     3,     4,     5,     6,     7,     0,     0,     0,     0,
       0,     0,     8,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,   180,     0,    12,
      13,    14,    15,    16,     0,    17,     0,     0,    18,     0,
       0,    19,    20,     0,    21,    22,    23,    24,     1,     2,
       3,     4,     5,     6,     7,     0,     0,     0,     0,     0,
       0,     8,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,   182,     0,    12,    13,
      14,    15,    16,     0,    17,     0,     0,    18,     0,     0,
      19,    20,     0,    21,    22,    23,    24,     1,     2,     3,
       4,     5,     6,     7,     0,     0,     0,     0,     0,     0,
       8,     9,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,   196,     0,    12,    13,    14,
      15,    16,     0,    17,     0,     0,    18,     0,     0,    19,
      20,     0,    21,    22,    23,    24,     1,     2,     3,     4,
       5,     6,     7,     0,     0,     0,     0,     0,     0,     8,
       9,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,   210,     0,    12,    13,    14,    15,
      16,     0,    17,     0,     0,    18,     0,     0,    19,    20,
       0,    21,    22,    23,    24,     1,     2,     3,     4,     5,
       6,     7,     0,     0,     0,     0,     0,     0,     8,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,   212,     0,    12,    13,    14,    15,    16,
       0,    17,     0,     0,    18,     0,     0,    19,    20,     0,
      21,    22,    23,    24,     1,     2,     3,     4,     5,     6,
       7,     0,     0,     0,     0,     0,     0,     8,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,    12,    13,    14,    15,    16,     0,
      17,     0,     0,    18,     0,     0,    19,    20,     0,    21,
      22,    23,    24,     1,     2,     3,     4,     5,     6,     7,
       0,     0,     0,     0,     0,     0,     8,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,    94,     0,    12,    13,    14,     0,    16,     0,    17,
       0,     0,    18,     0,     0,    19,    20,     0,    21,    22,
      23,    24,     1,     2,     3,     4,     5,     6,     7,     0,
       0,     0,     0,     0,     0,     8,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
     129,     0,    12,    13,    14,     0,    16,     0,    17,     0,
       0,    18,     0,     0,    19,    20,     0,    21,    22,    23,
      24,     1,     2,     3,     4,     5,     6,     7,     0,     0,
       0,     0,     0,     0,     8,     9,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,   177,
       0,    12,    13,    14,     0,    16,     0,    17,     0,     0,
      18,     0,     0,    19,    20,     0,    21,    22,    23,    24,
       1,     2,     3,     4,     5,     6,     7,     0,     0,     0,
       0,     0,     0,     8,     9,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,   184,     0,
      12,    13,    14,     0,    16,     0,    17,     0,     0,    18,
       0,     0,    19,    20,     0,    21,    22,    23,    24,     1,
       2,     3,     4,     5,     6,     7,     0,     0,     0,     0,
       0,     0,     8,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,    12,
      13,    14,   187,    16,     0,    17,     0,     0,    18,     0,
       0,    19,    20,     0,    21,    22,    23,    24,     1,     2,
       3,     4,     5,     6,     7,     0,     0,     0,     0,     0,
       0,     8,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,   194,     0,    12,    13,
      14,     0,    16,     0,    17,     0,     0,    18,     0,     0,
      19,    20,     0,    21,    22,    23,    24,     1,     2,     3,
       4,     5,     6,     7,     0,     0,     0,     0,     0,     0,
       8,     9,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,   195,     0,    12,    13,    14,
       0,    16,     0,    17,     0,     0,    18,     0,     0,    19,
      20,     0,    21,    22,    23,    24,     1,     2,     3,     4,
       5,     6,     7,     0,     0,     0,     0,     0,     0,     8,
       9,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,    12,    13,    14,   198,
      16,     0,    17,     0,     0,    18,     0,     0,    19,    20,
       0,    21,    22,    23,    24,     1,     2,     3,     4,     5,
       6,     7,     0,     0,     0,     0,     0,     0,     8,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,    12,    13,    14,   201,    16,
       0,    17,     0,     0,    18,     0,     0,    19,    20,     0,
      21,    22,    23,    24,     1,     2,     3,     4,     5,     6,
       7,     0,     0,     0,     0,     0,     0,     8,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,   205,     0,    12,    13,    14,     0,    16,     0,
      17,     0,     0,    18,     0,     0,    19,    20,     0,    21,
      22,    23,    24,     1,     2,     3,     4,     5,     6,     7,
       0,     0,     0,     0,     0,     0,     8,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,    12,    13,    14,   207,    16,     0,    17,
       0,     0,    18,     0,     0,    19,    20,     0,    21,    22,
      23,    24,     1,     2,     3,     4,     5,     6,     7,     0,
       0,     0,     0,     0,     0,     8,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
     218,     0,    12,    13,    14,     0,    16,     0,    17,     0,
       0,    18,     0,     0,    19,    20,     0,    21,    22,    23,
      24,     1,     2,     3,     4,     5,     6,     7,     0,     0,
       0,     0,     0,     0,     8,     9,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,   220,
       0,    12,    13,    14,     0,    16,     0,    17,     0,     0,
      18,     0,     0,    19,    20,     0,    21,    22,    23,    24,
       1,     2,     3,     4,     5,     6,     7,     0,     0,     0,
       0,     6,     7,     8,     9,     0,     0,     0,     0,     8,
       9,     0,     0,     0,     0,     0,     0,    11,     0,     0,
       0,     0,     0,    11,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    20,     0,    21,    22,    23,    24,    20,
       0,    55,    22,    23,    24
};

static const yytype_int16 yycheck[] =
{
       8,     9,     5,   126,    11,    10,    48,    15,     3,     4,
       5,     6,    48,   194,    25,    48,    19,     8,     3,     4,
       5,     6,    48,    11,    63,    64,     8,     9,    18,    19,
      69,   212,    18,    19,    16,    17,    30,   160,    28,   220,
      10,    11,    12,    13,    14,    15,    54,    54,    30,    60,
      43,    44,    46,    48,    48,    49,    50,    51,    28,    74,
      65,    30,    47,    78,    46,    30,    48,    49,    50,    51,
      32,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    43,    44,   126,    48,   128,
     101,    79,    80,    81,    82,    83,    84,    30,    48,   107,
      91,    92,   110,   106,    48,   144,    46,    47,    48,    49,
      50,    51,    10,    11,    12,    13,    14,    15,    20,    27,
      20,   160,   110,    32,   132,    21,    22,    23,    24,    25,
      26,    32,    48,   136,    27,    30,    46,   142,    48,    49,
      50,    51,   150,    30,   149,     3,     4,     5,     6,    28,
     158,   162,   155,    12,    13,    14,    15,    34,   169,    48,
      28,   166,   167,    30,    15,    34,    32,    38,   173,    32,
     181,    31,   183,    28,    38,    40,    28,   188,    27,   187,
     185,   186,    38,    31,    28,    32,   197,    48,   199,    32,
     198,    31,    31,   201,    32,    27,    32,   202,   203,    32,
     211,     0,   213,    28,     3,     4,     5,     6,     7,     8,
       9,    46,    47,    48,    49,    50,    51,    16,    17,    41,
      32,    32,    27,    27,    47,    27,    27,   175,    31,   136,
      29,    30,   174,    31,    33,    34,    35,    31,    37,   164,
      39,     5,   134,    42,    -1,    -1,    45,    46,    -1,    48,
      49,    50,    51,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      30,    31,    -1,    33,    34,    35,    36,    37,    -1,    39,
      -1,    -1,    42,    -1,    -1,    45,    46,    -1,    48,    49,
      50,    51,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,
      31,    -1,    33,    34,    35,    36,    37,    -1,    39,    -1,
      -1,    42,    -1,    -1,    45,    46,    -1,    48,    49,    50,
      51,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,
      -1,    33,    34,    35,    36,    37,    -1,    39,    -1,    -1,
      42,    -1,    -1,    45,    46,    -1,    48,    49,    50,    51,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,    -1,
      33,    34,    35,    36,    37,    -1,    39,    -1,    -1,    42,
      -1,    -1,    45,    46,    -1,    48,    49,    50,    51,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31,    -1,    33,
      34,    35,    36,    37,    -1,    39,    -1,    -1,    42,    -1,
      -1,    45,    46,    -1,    48,    49,    50,    51,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    30,    31,    -1,    33,    34,
      35,    36,    37,    -1,    39,    -1,    -1,    42,    -1,    -1,
      45,    46,    -1,    48,    49,    50,    51,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    30,    31,    -1,    33,    34,    35,
      36,    37,    -1,    39,    -1,    -1,    42,    -1,    -1,    45,
      46,    -1,    48,    49,    50,    51,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    30,    31,    -1,    33,    34,    35,    36,
      37,    -1,    39,    -1,    -1,    42,    -1,    -1,    45,    46,
      -1,    48,    49,    50,    51,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    30,    31,    -1,    33,    34,    35,    36,    37,
      -1,    39,    -1,    -1,    42,    -1,    -1,    45,    46,    -1,
      48,    49,    50,    51,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    30,    -1,    -1,    33,    34,    35,    36,    37,    -1,
      39,    -1,    -1,    42,    -1,    -1,    45,    46,    -1,    48,
      49,    50,    51,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      30,    31,    -1,    33,    34,    35,    -1,    37,    -1,    39,
      -1,    -1,    42,    -1,    -1,    45,    46,    -1,    48,    49,
      50,    51,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,
      31,    -1,    33,    34,    35,    -1,    37,    -1,    39,    -1,
      -1,    42,    -1,    -1,    45,    46,    -1,    48,    49,    50,
      51,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,
      -1,    33,    34,    35,    -1,    37,    -1,    39,    -1,    -1,
      42,    -1,    -1,    45,    46,    -1,    48,    49,    50,    51,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,    -1,
      33,    34,    35,    -1,    37,    -1,    39,    -1,    -1,    42,
      -1,    -1,    45,    46,    -1,    48,    49,    50,    51,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    30,    -1,    -1,    33,
      34,    35,    36,    37,    -1,    39,    -1,    -1,    42,    -1,
      -1,    45,    46,    -1,    48,    49,    50,    51,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    30,    31,    -1,    33,    34,
      35,    -1,    37,    -1,    39,    -1,    -1,    42,    -1,    -1,
      45,    46,    -1,    48,    49,    50,    51,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    30,    31,    -1,    33,    34,    35,
      -1,    37,    -1,    39,    -1,    -1,    42,    -1,    -1,    45,
      46,    -1,    48,    49,    50,    51,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    30,    -1,    -1,    33,    34,    35,    36,
      37,    -1,    39,    -1,    -1,    42,    -1,    -1,    45,    46,
      -1,    48,    49,    50,    51,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    30,    -1,    -1,    33,    34,    35,    36,    37,
      -1,    39,    -1,    -1,    42,    -1,    -1,    45,    46,    -1,
      48,    49,    50,    51,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    30,    31,    -1,    33,    34,    35,    -1,    37,    -1,
      39,    -1,    -1,    42,    -1,    -1,    45,    46,    -1,    48,
      49,    50,    51,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      30,    -1,    -1,    33,    34,    35,    36,    37,    -1,    39,
      -1,    -1,    42,    -1,    -1,    45,    46,    -1,    48,    49,
      50,    51,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,
      31,    -1,    33,    34,    35,    -1,    37,    -1,    39,    -1,
      -1,    42,    -1,    -1,    45,    46,    -1,    48,    49,    50,
      51,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,
      -1,    33,    34,    35,    -1,    37,    -1,    39,    -1,    -1,
      42,    -1,    -1,    45,    46,    -1,    48,    49,    50,    51,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,     8,     9,    16,    17,    -1,    -1,    -1,    -1,    16,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    48,    49,    50,    51,    46,
      -1,    48,    49,    50,    51
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    16,    17,
      29,    30,    33,    34,    35,    36,    37,    39,    42,    45,
      46,    48,    49,    50,    51,    53,    54,    55,    56,    59,
      62,    64,    67,    68,    69,    70,    72,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    48,    48,    48,
      48,    48,    75,    76,    30,    48,    79,    82,    79,    31,
      53,    78,    81,    30,    30,    32,    47,    79,    48,    30,
      48,    47,    75,    48,    20,     0,    54,    27,    20,    10,
      11,    12,    13,    14,    15,    21,    22,    23,    24,    25,
      26,    18,    19,    79,    31,    28,    28,    67,    71,    67,
      31,    53,    32,    67,    32,    48,    30,    30,    77,    77,
      30,    78,    79,    78,    78,    78,    78,    78,    79,    79,
      79,    79,    79,    79,    82,    82,    27,    28,    34,    31,
      48,    28,    43,    44,    65,    66,    30,    60,    75,    57,
      79,    71,    32,    67,    34,    38,    63,    40,    79,    32,
      43,    66,    31,    60,    28,    38,    61,    28,    38,    58,
      27,    31,    53,    67,    48,    31,    32,    32,    31,    53,
      79,    31,    28,    32,    75,    79,    71,    31,    63,    27,
      31,    53,    31,    53,    31,    32,    32,    36,    53,    61,
      58,    28,    41,    73,    31,    31,    31,    53,    36,    53,
      79,    36,    32,    32,    73,    31,    47,    36,    27,    79,
      31,    53,    31,    53,    27,    47,    31,    27,    31,    73,
      31,    31,    27,    31,    73,    31
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    52,    53,    53,    53,    53,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    55,    55,    56,    57,    57,
      58,    58,    59,    59,    59,    59,    60,    60,    61,    61,
      62,    63,    63,    64,    64,    65,    65,    65,    65,    66,
      66,    67,    67,    67,    67,    68,    68,    69,    69,    70,
      70,    71,    71,    72,    72,    73,    73,    73,    74,    75,
      75,    75,    75,    76,    76,    77,    77,    78,    78,    78,
      78,    78,    78,    78,    78,    79,    79,    79,    79,    80,
      80,    81,    81,    81,    82,    82,    82,    82,    82,    82,
      82,    83,    83,    83,    83,    83,    83
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     5,     0,     2,
       0,     3,    11,    10,    12,    11,     0,     2,     0,     3,
       7,     0,     3,     6,     5,     5,     4,     6,     5,     4,
       3,     1,     1,     1,     1,     7,     6,     6,     5,    11,
      10,     0,     1,     9,     8,     0,     5,     4,     2,     2,
       2,     2,     2,     3,     3,     1,     1,     3,     3,     3,
       3,     3,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     3,     3,     1,     2,     2,     2,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     3
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
  case 4: /* program: RETURN return_value  */
#line 72 "yacc_file.y"
                              {
            // Completely ignored in case of non-functions
        }
#line 1713 "y.tab.c"
    break;

  case 5: /* program: RETURN VOID_TYPE  */
#line 75 "yacc_file.y"
                           {
            // Completely ignored in case of non-functions
        }
#line 1721 "y.tab.c"
    break;

  case 6: /* sub_program: single_line TERMINATOR  */
#line 81 "yacc_file.y"
                               {
            printSymbolTable();
        }
#line 1729 "y.tab.c"
    break;

  case 7: /* sub_program: if_stmt  */
#line 84 "yacc_file.y"
                  { }
#line 1735 "y.tab.c"
    break;

  case 8: /* sub_program: for_loop  */
#line 85 "yacc_file.y"
                   { printSymbolTable(); }
#line 1741 "y.tab.c"
    break;

  case 9: /* sub_program: while_loop  */
#line 86 "yacc_file.y"
                     { printSymbolTable(); }
#line 1747 "y.tab.c"
    break;

  case 10: /* sub_program: do_while  */
#line 87 "yacc_file.y"
                   { printf("Repeat-until/Do-while loop\n"); }
#line 1753 "y.tab.c"
    break;

  case 11: /* sub_program: switch_case  */
#line 88 "yacc_file.y"
                      { printf("Switch case\n"); }
#line 1759 "y.tab.c"
    break;

  case 14: /* sub_program: block_structure  */
#line 91 "yacc_file.y"
                          { printf("Block structure\n"); }
#line 1765 "y.tab.c"
    break;

  case 17: /* function_call: CALL IDENTIFIER OPENING_BRACKET function_arguments CLOSING_BRACKET  */
#line 98 "yacc_file.y"
                                                                           {
            // Get the symbol from the symbol table
            int symbolIndex = getSymbolIndex((yyvsp[-3].sName));
            if (symbolIndex == -1)
                yyerror("Undeclared Symbol\n");

            if (symbolTable[symbolIndex].parametersCount > globalParametersCount) {
                printf("Arguments missing, found %d and required %d\n", globalParametersCount, symbolTable[symbolIndex].parametersCount);
                yyerror("Arguments missing\n");
            }
            else if (symbolTable[symbolIndex].parametersCount < globalParametersCount) {
                printf("A lot of arguments are provided, found %d and required %d\n", globalParametersCount, symbolTable[symbolIndex].parametersCount);
                yyerror("A lot of arguments are provided\n");
            }
            else {
                for (int i = 0; i < globalParametersCount; i++) {
                    if (symbolTable[symbolIndex].parameters[i] != globalParameters[i]) {
                        printf("Parameter #%d type mismatch %d, %d\n", i + 1, symbolTable[symbolIndex].parameters[i], globalParameters[i]);
                        yyerror("Parameter type mismatch\n");
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
                        printf("Global String: %s\n", globalString);
                        (yyval.iValue) = GLOBAL_STRING;
                    }
                    // Return the symbol index
                    else
                        (yyval.iValue) = symbolIndex;
                }
                else
                    (yyval.iValue) = GLOBAL_UNCERTAIN;
            }
        }
#line 1814 "y.tab.c"
    break;

  case 18: /* function_arguments: %empty  */
#line 144 "yacc_file.y"
        { 
            globalParametersCount = 0;
            globalParameters = NULL;
        }
#line 1823 "y.tab.c"
    break;

  case 19: /* function_arguments: return_value function_arguments2  */
#line 148 "yacc_file.y"
                                            {
            int returnResult = (yyvsp[-1].fValue);
            // Check if there is an issue with the incoming value
            if (returnResult == ERROR_UNDECLARED) {
                yyerror("Undeclared symbol\n");
            }
            if (returnResult == ERROR_UNINITIALIZED) {
                yyerror("Uninitizialized symbol\n");
            }

            addArgumentParameter(returnResult);
        }
#line 1840 "y.tab.c"
    break;

  case 21: /* function_arguments2: COMMA return_value function_arguments2  */
#line 162 "yacc_file.y"
                                                 {   
            int returnResult = (yyvsp[-1].fValue);
            // Check if there is an issue with the incoming value
            if (returnResult == ERROR_UNDECLARED) {
                yyerror("Undeclared symbol\n");
            }
            if (returnResult == ERROR_UNINITIALIZED) {
                yyerror("Uninitizialized symbol\n");
            }

            addArgumentParameter(returnResult);
        }
#line 1857 "y.tab.c"
    break;

  case 22: /* function_definition: FUNCTION variable_or_function_declaration OPENING_BRACKET function_parameters CLOSING_BRACKET OPENING_BRACES program RETURN return_value TERMINATOR CLOSING_BRACES  */
#line 176 "yacc_file.y"
                                                                                                                                                                           {
            int functionIndex = (yyvsp[-9].sIndex);
            symbolTable[functionIndex].isFunction = true;

            int returnResult = (yyvsp[-2].fValue);

            if (returnResult == ERROR_UNDECLARED)
                yyerror("Symbol undeclared");
            else if (returnResult == ERROR_UNINITIALIZED)
                yyerror("Symbol uninitialized");

            int assignmentStatus = defineNonVoidFunction(functionIndex, returnResult);
            if (assignmentStatus == ERROR_TYPE_MISMATCH)
                yyerror("Type mismatch");
            
            setFunctionParameters(functionIndex);
        }
#line 1879 "y.tab.c"
    break;

  case 23: /* function_definition: FUNCTION variable_or_function_declaration OPENING_BRACKET function_parameters CLOSING_BRACKET OPENING_BRACES RETURN return_value TERMINATOR CLOSING_BRACES  */
#line 193 "yacc_file.y"
                                                                                                                                                                     {
            int functionIndex = (yyvsp[-8].sIndex);
            symbolTable[functionIndex].isFunction = true;

            int returnResult = (yyvsp[-2].fValue);

            if (returnResult == ERROR_UNDECLARED)
                yyerror("Symbol undeclared");
            else if (returnResult == ERROR_UNINITIALIZED)
                yyerror("Symbol uninitialized");
            
            int assignmentStatus = defineNonVoidFunction(functionIndex, returnResult);
            if (assignmentStatus == ERROR_TYPE_MISMATCH)
                yyerror("Type mismatch");
            
            setFunctionParameters(functionIndex);
        }
#line 1901 "y.tab.c"
    break;

  case 24: /* function_definition: FUNCTION VOID_TYPE IDENTIFIER OPENING_BRACKET function_parameters CLOSING_BRACKET OPENING_BRACES program RETURN VOID_TYPE TERMINATOR CLOSING_BRACES  */
#line 210 "yacc_file.y"
                                                                                                                                                              {
            // Get the symbol index from the symbol name
            char * symbolName = (yyvsp[-9].sName);
            int resultIndex = searchAndDeclare(symbolName, TYPE_VOID);

            // If the symbol already is declared in the same scope-level, handle the error
            if (resultIndex == ERROR_DECLARED)
                yyerror("Symbol already declared\n");
            
            symbolTable[resultIndex].isFunction = true;
            
            setFunctionParameters(resultIndex);

            (yyval.iValue) = GLOBAL_VOID;
        }
#line 1921 "y.tab.c"
    break;

  case 25: /* function_definition: FUNCTION VOID_TYPE IDENTIFIER OPENING_BRACKET function_parameters CLOSING_BRACKET OPENING_BRACES RETURN VOID_TYPE TERMINATOR CLOSING_BRACES  */
#line 225 "yacc_file.y"
                                                                                                                                                      {
            // Get the symbol index from the symbol name
            char * symbolName = (yyvsp[-8].sName);
            int resultIndex = searchAndDeclare(symbolName, TYPE_VOID);

            // If the symbol already is declared in the same scope-level, handle the error
            if (resultIndex == ERROR_DECLARED)
                yyerror("Symbol already declared\n");
            
            symbolTable[resultIndex].isFunction = true;

            setFunctionParameters(resultIndex);

            (yyval.iValue) = GLOBAL_VOID;
        }
#line 1941 "y.tab.c"
    break;

  case 26: /* function_parameters: %empty  */
#line 242 "yacc_file.y"
        { 
            globalParametersCount = 0;
            globalParameters = NULL;
        }
#line 1950 "y.tab.c"
    break;

  case 27: /* function_parameters: variable_or_function_declaration function_parameters2  */
#line 246 "yacc_file.y"
                                                                {
            int returnResult = (yyvsp[-1].sIndex);
            // Check if there is an issue with the incoming value
            if (returnResult == ERROR_UNDECLARED) {
                yyerror("Undeclared symbol\n");
            }
            if (returnResult == ERROR_UNINITIALIZED) {
                yyerror("Undeclared symbol\n");
            }

            addArgumentParameter(returnResult);
        }
#line 1967 "y.tab.c"
    break;

  case 29: /* function_parameters2: COMMA variable_or_function_declaration function_parameters2  */
#line 260 "yacc_file.y"
                                                                      {
            int returnResult = (yyvsp[-1].sIndex);
            // Check if there is an issue with the incoming value
            if (returnResult == ERROR_UNDECLARED) {
                yyerror("Undeclared symbol\n");
            }
            if (returnResult == ERROR_UNINITIALIZED) {
                yyerror("Undeclared symbol\n");
            }

            addArgumentParameter(returnResult);
        }
#line 1984 "y.tab.c"
    break;

  case 30: /* enumeration: ENUM IDENTIFIER OPENING_BRACES IDENTIFIER enum_body CLOSING_BRACES TERMINATOR  */
#line 274 "yacc_file.y"
                                                                                      {
            // Get the symbol index from the enum name
            char * firstElement = (yyvsp[-3].sName);
            int resultIndex = searchAndDeclare(firstElement, TYPE_INT);

            // If the symbol already is declared in the same scope-level, handle the error
            if (resultIndex == ERROR_DECLARED)
                yyerror("Symbol already declared\n");
                
            int startIndex, endIndex;
            if ((yyvsp[-2].iValue) != ENUM_END) {
                // Start index is the incoming value from the enum_body
                startIndex = (yyvsp[-2].iValue);
                // End index is the index of the first element of the enum
                endIndex = resultIndex;

                sortEnumElements(startIndex, endIndex);
            }
            else {
                startIndex = resultIndex;
                endIndex = resultIndex;
            }

            // Get the symbol index from the enum name
            char * enumName = (yyvsp[-5].sName);

            assignEnumElements(startIndex, endIndex, enumName);
        }
#line 2017 "y.tab.c"
    break;

  case 31: /* enum_body: %empty  */
#line 304 "yacc_file.y"
        { (yyval.iValue) = ENUM_END; }
#line 2023 "y.tab.c"
    break;

  case 32: /* enum_body: COMMA IDENTIFIER enum_body  */
#line 304 "yacc_file.y"
                                                        {
            // Get the symbol index from the identifier name
            int resultIndex = searchAndDeclare((yyvsp[-1].sName), TYPE_INT);
            // If the symbol already is declared in the same scope-level, handle the error
            if (resultIndex == ERROR_DECLARED)
                yyerror("Symbol already declared\n");
            if ((yyvsp[0].iValue) == ENUM_END)
                (yyval.iValue) = resultIndex;
            else
                (yyval.iValue) = (yyvsp[0].iValue);
        }
#line 2039 "y.tab.c"
    break;

  case 41: /* single_line: expr  */
#line 331 "yacc_file.y"
             {
            // Return the symbol index
            (yyval.iValue) = (yyvsp[0].fValue);
        }
#line 2048 "y.tab.c"
    break;

  case 42: /* single_line: constant_variable_declaration  */
#line 335 "yacc_file.y"
                                        {
            // Return the symbol index
            (yyval.iValue) = (yyvsp[0].iValue);
        }
#line 2057 "y.tab.c"
    break;

  case 43: /* single_line: variable_or_function_declaration  */
#line 339 "yacc_file.y"
                                           {
            // Return the symbol index
            (yyval.iValue) = (yyvsp[0].sIndex);
        }
#line 2066 "y.tab.c"
    break;

  case 44: /* single_line: variable_assignment  */
#line 343 "yacc_file.y"
                              {
            // Return the symbol index
            (yyval.iValue) = (yyvsp[0].iValue);
        }
#line 2075 "y.tab.c"
    break;

  case 49: /* for_loop: FOR OPENING_BRACKET line_or_null TERMINATOR line_or_null TERMINATOR line_or_null CLOSING_BRACKET OPENING_BRACES program CLOSING_BRACES  */
#line 356 "yacc_file.y"
                                                                                                                                               {
        }
#line 2082 "y.tab.c"
    break;

  case 50: /* for_loop: FOR OPENING_BRACKET line_or_null TERMINATOR line_or_null TERMINATOR line_or_null CLOSING_BRACKET OPENING_BRACES CLOSING_BRACES  */
#line 358 "yacc_file.y"
                                                                                                                                         {
        }
#line 2089 "y.tab.c"
    break;

  case 52: /* line_or_null: single_line  */
#line 362 "yacc_file.y"
                  {
        printSymbolTable();
    }
#line 2097 "y.tab.c"
    break;

  case 53: /* if_stmt: IF OPENING_BRACKET single_line CLOSING_BRACKET THEN OPENING_BRACES program CLOSING_BRACES else_stmt  */
#line 367 "yacc_file.y"
                                                                                                            {
            ifStatementLogic((yyvsp[-6].iValue));
            printSymbolTable();
        }
#line 2106 "y.tab.c"
    break;

  case 54: /* if_stmt: IF OPENING_BRACKET single_line CLOSING_BRACKET THEN OPENING_BRACES CLOSING_BRACES else_stmt  */
#line 371 "yacc_file.y"
                                                                                                      {
            ifStatementLogic((yyvsp[-5].iValue));
            printSymbolTable();
        }
#line 2115 "y.tab.c"
    break;

  case 56: /* else_stmt: ELSE OPENING_BRACES program CLOSING_BRACES else_stmt  */
#line 377 "yacc_file.y"
                                                               {
            printSymbolTable();
        }
#line 2123 "y.tab.c"
    break;

  case 57: /* else_stmt: ELSE OPENING_BRACES CLOSING_BRACES else_stmt  */
#line 380 "yacc_file.y"
                                                       {
            printSymbolTable();
        }
#line 2131 "y.tab.c"
    break;

  case 58: /* constant_variable_declaration: CONSTANT variable_assignment  */
#line 385 "yacc_file.y"
                                     {
            // Using this grammar rule, a non-constant variable can be set as a constant after declaration
            // i.e.:
            // int i = 60;
            // const i = ay 7aga; // can be -> const i = i;
            // now i is a constant with the new assigned value
            int symbolIndex = (yyvsp[0].iValue);

            symbolTable[symbolIndex].isConstant = true;

            (yyval.iValue) = symbolIndex;
        }
#line 2148 "y.tab.c"
    break;

  case 59: /* variable_or_function_declaration: INT_TYPE IDENTIFIER  */
#line 399 "yacc_file.y"
                            {
            // Get the symbol index from the symbol name
            char * symbolName = (yyvsp[0].sName);
            int result = searchAndDeclare(symbolName, TYPE_INT);

            // If the symbol already is declared in the same scope-level, handle the error
            if (result == ERROR_DECLARED)
                yyerror("Symbol already declared\n");
            
            // Return the symbol index
            (yyval.sIndex) = result;
        }
#line 2165 "y.tab.c"
    break;

  case 60: /* variable_or_function_declaration: FLOAT_TYPE IDENTIFIER  */
#line 411 "yacc_file.y"
                                {
            // Get the symbol index from the symbol name
            char * symbolName = (yyvsp[0].sName);
            int result = searchAndDeclare(symbolName, TYPE_FLOAT);

            // If the symbol already is declared in the same scope-level, handle the error
            if (result == ERROR_DECLARED)
                yyerror("Symbol already declared\n");
            
            // Return the symbol index
            (yyval.sIndex) = result;
        }
#line 2182 "y.tab.c"
    break;

  case 61: /* variable_or_function_declaration: STRING_TYPE IDENTIFIER  */
#line 423 "yacc_file.y"
                                 {
            // Get the symbol index from the symbol name
            char * symbolName = (yyvsp[0].sName);
            int result = searchAndDeclare(symbolName, TYPE_STRING);

            // If the symbol already is declared in the same scope-level, handle the error
            if (result == ERROR_DECLARED)
                yyerror("Symbol already declared\n");
            
            // Return the symbol index
            (yyval.sIndex) = result;
        }
#line 2199 "y.tab.c"
    break;

  case 62: /* variable_or_function_declaration: BOOLEAN_TYPE IDENTIFIER  */
#line 435 "yacc_file.y"
                                  {
            // Get the symbol index from the symbol name
            char * symbolName = (yyvsp[0].sName);
            int result = searchAndDeclare(symbolName, TYPE_BOOL);

            // If the symbol already is declared in the same scope-level, handle the error
            if (result == ERROR_DECLARED)
                yyerror("Symbol already declared\n");
            
            // Return the symbol index
            (yyval.sIndex) = result;
        }
#line 2216 "y.tab.c"
    break;

  case 63: /* variable_assignment: IDENTIFIER OP_ASSIGN expr  */
#line 449 "yacc_file.y"
                                  {
            int symbolIndex = getSymbolIndex((yyvsp[-2].sName));
            if (symbolIndex == -1)
                yyerror("Undeclared Symbol\n");

            int assignmentStatus;
            // In case the function is of type void
            if ((yyvsp[0].fValue) == GLOBAL_VOID)
                yyerror("Function of type void\n");
            else if ((yyvsp[0].fValue) == GLOBAL_STRING)
                assignmentStatus = assignValue(symbolIndex, globalString, TYPE_STRING);
            else
                assignmentStatus = assignValue(symbolIndex, (void*)&(yyvsp[0].fValue), TYPE_FLOAT);
            
            if (assignmentStatus == ERROR_CONSTANT_REASSIGNMENT)
                yyerror("Constant reassigment\n");
            else if (assignmentStatus == ERROR_TYPE_MISMATCH)
                yyerror("Type mismatch\n");
            else if (assignmentStatus == ERROR_UNKNOWN)
                yyerror("Unknown error\n");
            
            // The assignmentStatus holds the symbolIndex if any
            (yyval.iValue) = assignmentStatus;
        }
#line 2245 "y.tab.c"
    break;

  case 64: /* variable_assignment: variable_or_function_declaration OP_ASSIGN expr  */
#line 473 "yacc_file.y"
                                                          {
            // Declare and assign a variable
            int symbolIndex = (yyvsp[-2].sIndex);

            int assignmentStatus;
            // In case the function is of type void
            if ((yyvsp[0].fValue) == GLOBAL_VOID)
                yyerror("Function of type void\n");
            else if ((yyvsp[0].fValue) == GLOBAL_STRING)
                assignmentStatus = assignValue(symbolIndex, globalString, TYPE_STRING);
            else
                assignmentStatus = assignValue(symbolIndex, (void*)&(yyvsp[0].fValue), TYPE_FLOAT);
            
            if (assignmentStatus == ERROR_CONSTANT_REASSIGNMENT)
                yyerror("Constant reassigment\n");
            else if (assignmentStatus == ERROR_TYPE_MISMATCH)
                yyerror("Type mismatch\n");
            else if (assignmentStatus == ERROR_UNKNOWN)
                yyerror("Unknown error\n");
            // The assignmentStatus holds the symbolIndex if any
            (yyval.iValue) = assignmentStatus;
        }
#line 2272 "y.tab.c"
    break;

  case 65: /* expr: maths_expr  */
#line 497 "yacc_file.y"
                   {
            // Return the symbol index or global reference (string or number)
            if ((yyvsp[0].fValue) == GLOBAL_STRING)
                (yyval.fValue) = GLOBAL_STRING;
            else if ((yyvsp[0].fValue) == GLOBAL_VOID)
                (yyval.fValue) = GLOBAL_VOID;
            else if ((yyvsp[0].fValue) == GLOBAL_NUMBER)
                (yyval.fValue) = globalNumber;
            else if ((yyvsp[0].fValue) == GLOBAL_UNCERTAIN)
                (yyval.fValue) = GLOBAL_UNCERTAIN;
            else
                (yyval.fValue) = (yyvsp[0].fValue);
        }
#line 2290 "y.tab.c"
    break;

  case 66: /* expr: logical_expression  */
#line 510 "yacc_file.y"
                             {
            // Return the symbol index or global reference (string or number)
            (yyval.fValue) = (yyvsp[0].fValue);
        }
#line 2299 "y.tab.c"
    break;

  case 67: /* maths_expr: maths_expr M_OP_PLUS maths_expr  */
#line 515 "yacc_file.y"
                                                             {
            if ((yyvsp[-2].fValue) == GLOBAL_STRING || (yyvsp[0].fValue) == GLOBAL_STRING)
                yyerror("Type mismatch\n");
            (yyval.fValue) = (yyvsp[-2].fValue) + (yyvsp[0].fValue);
        }
#line 2309 "y.tab.c"
    break;

  case 68: /* maths_expr: maths_expr M_OP_MINUS maths_expr  */
#line 520 "yacc_file.y"
                                                            {
            if ((yyvsp[-2].fValue) == GLOBAL_STRING || (yyvsp[0].fValue) == GLOBAL_STRING)
                yyerror("Type mismatch\n");
            (yyval.fValue) = (yyvsp[-2].fValue) - (yyvsp[0].fValue);
        }
#line 2319 "y.tab.c"
    break;

  case 69: /* maths_expr: maths_expr M_OP_MULT maths_expr  */
#line 525 "yacc_file.y"
                                                          {
            if ((yyvsp[-2].fValue) == GLOBAL_STRING || (yyvsp[0].fValue) == GLOBAL_STRING)
                yyerror("Type mismatch\n");
            (yyval.fValue) = (yyvsp[-2].fValue) * (yyvsp[0].fValue);
        }
#line 2329 "y.tab.c"
    break;

  case 70: /* maths_expr: maths_expr M_OP_DIV maths_expr  */
#line 530 "yacc_file.y"
                                                        {
            if ((yyvsp[-2].fValue) == GLOBAL_STRING || (yyvsp[0].fValue) == GLOBAL_STRING)
                yyerror("Type mismatch\n");
            (yyval.fValue) = (yyvsp[-2].fValue) / (yyvsp[0].fValue);
        }
#line 2339 "y.tab.c"
    break;

  case 71: /* maths_expr: maths_expr M_OP_MOD maths_expr  */
#line 535 "yacc_file.y"
                                                        {
            if ((yyvsp[-2].fValue) == GLOBAL_STRING || (yyvsp[0].fValue) == GLOBAL_STRING)
                yyerror("Type mismatch\n");
            (yyval.fValue) = (int) (yyvsp[-2].fValue) % (int) (yyvsp[0].fValue);
        }
#line 2349 "y.tab.c"
    break;

  case 72: /* maths_expr: maths_expr M_OP_POWER maths_expr  */
#line 540 "yacc_file.y"
                                                            {
            int answer = 1;
            for (int i = 0; i < (yyvsp[0].fValue); i++)
                answer *= (yyvsp[-2].fValue);
            (yyval.fValue) = answer;
        }
#line 2360 "y.tab.c"
    break;

  case 73: /* maths_expr: return_value  */
#line 546 "yacc_file.y"
                       {
            if ((yyvsp[0].fValue) == ERROR_UNDECLARED)
                yyerror("Undeclared symbol\n");
            else if ((yyvsp[0].fValue) == ERROR_UNINITIALIZED)
                yyerror("Uninitialized symbol\n");
            else if ((yyvsp[0].fValue) == GLOBAL_STRING){
                (yyval.fValue) = GLOBAL_STRING;
            }
            else if ((yyvsp[0].fValue) == GLOBAL_VOID){
                (yyval.fValue) = GLOBAL_VOID;
            }
            else if ((yyvsp[0].fValue) == GLOBAL_NUMBER){
                (yyval.fValue) = globalNumber;
            }
            else if ((yyvsp[0].fValue) == GLOBAL_UNCERTAIN){
                (yyval.fValue) = GLOBAL_UNCERTAIN;
            }
            else {
                int symbolIndex = (int) (yyvsp[0].fValue);
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
        }
#line 2404 "y.tab.c"
    break;

  case 74: /* maths_expr: OPENING_BRACKET maths_expr CLOSING_BRACKET  */
#line 585 "yacc_file.y"
                                                     {
            (yyval.fValue) = (yyvsp[-1].fValue);
        }
#line 2412 "y.tab.c"
    break;

  case 75: /* return_value: IDENTIFIER  */
#line 590 "yacc_file.y"
                   {
            int symbolIndex = getSymbolIndex((yyvsp[0].sName));
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
        }
#line 2433 "y.tab.c"
    break;

  case 76: /* return_value: STRING  */
#line 606 "yacc_file.y"
                 {
            // Return the global string indicator
            globalString = strdup((yyvsp[0].cValue));
            globalCertainString = true;
            (yyval.fValue) = GLOBAL_STRING;
        }
#line 2444 "y.tab.c"
    break;

  case 77: /* return_value: number  */
#line 612 "yacc_file.y"
                 {
            // Return the global number indicator
            globalNumber = (yyvsp[0].fValue);
            (yyval.fValue) = GLOBAL_NUMBER;
        }
#line 2454 "y.tab.c"
    break;

  case 78: /* return_value: function_call  */
#line 617 "yacc_file.y"
                        {
            // Return the symbol index for the function
            (yyval.fValue) = (yyvsp[0].iValue);
        }
#line 2463 "y.tab.c"
    break;

  case 79: /* number: INTEGER_NUMBER  */
#line 623 "yacc_file.y"
                       {
            (yyval.fValue) = (int) (yyvsp[0].iValue);
        }
#line 2471 "y.tab.c"
    break;

  case 80: /* number: FLOAT_NUMBER  */
#line 626 "yacc_file.y"
                       {
            (yyval.fValue) = (yyvsp[0].fValue);
        }
#line 2479 "y.tab.c"
    break;

  case 81: /* logical_expression: logical_expression L_OP_AND logical_expression2  */
#line 631 "yacc_file.y"
                                                        {
            // In case the function is of type void
            if ((yyvsp[-2].fValue) == GLOBAL_VOID || (yyvsp[0].fValue) == GLOBAL_VOID)
                yyerror("Function of type void\n");
            // Indicate uncertainty if exists
            else if ((yyvsp[-2].fValue) == GLOBAL_UNCERTAIN || (yyvsp[0].fValue) == GLOBAL_UNCERTAIN)
                (yyval.fValue) = GLOBAL_UNCERTAIN;
            else
                (yyval.fValue) = (yyvsp[-2].fValue) && (yyvsp[0].fValue);
        }
#line 2494 "y.tab.c"
    break;

  case 82: /* logical_expression: logical_expression L_OP_OR logical_expression2  */
#line 641 "yacc_file.y"
                                                         {
            // In case the function is of type void
            if ((yyvsp[-2].fValue) == GLOBAL_VOID || (yyvsp[0].fValue) == GLOBAL_VOID)
                yyerror("Function of type void\n");
            // Indicate uncertainty if exists
            else if ((yyvsp[-2].fValue) == GLOBAL_UNCERTAIN || (yyvsp[0].fValue) == GLOBAL_UNCERTAIN)
                (yyval.fValue) = GLOBAL_UNCERTAIN;
            else
                (yyval.fValue) = (yyvsp[-2].fValue) || (yyvsp[0].fValue);
        }
#line 2509 "y.tab.c"
    break;

  case 83: /* logical_expression: logical_expression2  */
#line 651 "yacc_file.y"
                              {
            (yyval.fValue) = (yyvsp[0].fValue);
        }
#line 2517 "y.tab.c"
    break;

  case 84: /* logical_expression2: L_OP_NOT logical_expression2  */
#line 657 "yacc_file.y"
                                     {
            // In case the function is of type void
            if ((yyvsp[0].fValue) == GLOBAL_VOID)
                yyerror("Function of type void\n");
            // Indicate uncertainty if exists
            else if ((yyvsp[0].fValue) == GLOBAL_UNCERTAIN)
                (yyval.fValue) = GLOBAL_UNCERTAIN;
            else
                (yyval.fValue) = !(yyvsp[0].fValue);
        }
#line 2532 "y.tab.c"
    break;

  case 85: /* logical_expression2: L_OP_NOT return_value  */
#line 667 "yacc_file.y"
                                {
            // In case the function is of type void
            if ((yyvsp[0].fValue) == GLOBAL_VOID)
                yyerror("Function of type void\n");
            // Indicate uncertainty if exists
            else if ((yyvsp[0].fValue) == GLOBAL_UNCERTAIN)
                (yyval.fValue) = GLOBAL_UNCERTAIN;
            else {
                // Parse the value in case of not being a string
                int symbolIndex = (yyvsp[0].fValue);
                float value;
                if (symbolIndex == GLOBAL_STRING)
                    yyerror("Type mismatch\n");
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
        }
#line 2564 "y.tab.c"
    break;

  case 86: /* logical_expression2: L_OP_EXACT return_value  */
#line 694 "yacc_file.y"
                                  {
            // In case the function is of type void
            if ((yyvsp[0].fValue) == GLOBAL_VOID)
                yyerror("Function of type void\n");
            // Indicate uncertainty if exists
            else if ((yyvsp[0].fValue) == GLOBAL_UNCERTAIN)
                (yyval.fValue) = GLOBAL_UNCERTAIN;
            else {
                // Parse the value in case of not being a string
                int symbolIndex = (yyvsp[0].fValue);
                float value;
                if (symbolIndex == GLOBAL_STRING)
                    yyerror("Type mismatch\n");
                else if (symbolIndex == GLOBAL_NUMBER)
                    value = globalNumber;
                else {
                    if (symbolTable[symbolIndex].type == TYPE_FLOAT)
                        value = symbolTable[symbolIndex].fValue;
                    else
                        value = symbolTable[symbolIndex].value;
                }
                if (value == 0)
                    (yyval.fValue) = 0;
                else
                    (yyval.fValue) = 1;
            }
        }
#line 2596 "y.tab.c"
    break;

  case 87: /* logical_expression2: TRUE  */
#line 721 "yacc_file.y"
               {
            (yyval.fValue) = true;
        }
#line 2604 "y.tab.c"
    break;

  case 88: /* logical_expression2: FALSE  */
#line 724 "yacc_file.y"
                {
            (yyval.fValue) = false;
        }
#line 2612 "y.tab.c"
    break;

  case 89: /* logical_expression2: comparison_expression  */
#line 727 "yacc_file.y"
                                {
            (yyval.fValue) = (yyvsp[0].iValue);
        }
#line 2620 "y.tab.c"
    break;

  case 90: /* logical_expression2: OPENING_BRACKET logical_expression CLOSING_BRACKET  */
#line 730 "yacc_file.y"
                                                             {
            (yyval.fValue) = (yyvsp[-1].fValue);
        }
#line 2628 "y.tab.c"
    break;

  case 91: /* comparison_expression: return_value OP_EQUAL return_value  */
#line 735 "yacc_file.y"
                                           {
            if ((yyvsp[-2].fValue) == GLOBAL_STRING || (yyvsp[0].fValue) == GLOBAL_STRING)
                yyerror("Type mismatch\n");

            // In case the function is of type void
            else if ((yyvsp[-2].fValue) == GLOBAL_VOID || (yyvsp[0].fValue) == GLOBAL_VOID)
                yyerror("Function of type void\n");
            // Indicate uncertainty if exists
            else if ((yyvsp[-2].fValue) == GLOBAL_UNCERTAIN || (yyvsp[0].fValue) == GLOBAL_UNCERTAIN)
                (yyval.iValue) = GLOBAL_UNCERTAIN;
            else {
                // Send the two incoming values for parsing and the comparator
                int result = processComparator((yyvsp[-2].fValue), (yyvsp[0].fValue), EQ_OP);

                if (result == TWO_NUMBERS_COMPARISON)
                    yyerror("Failed to compare two direct values\n");
                
                // Return the output of the comparison
                (yyval.iValue) = result;
            }
        }
#line 2654 "y.tab.c"
    break;

  case 92: /* comparison_expression: return_value OP_NOT_EQUAL return_value  */
#line 756 "yacc_file.y"
                                                 {
            if ((yyvsp[-2].fValue) == GLOBAL_STRING || (yyvsp[0].fValue) == GLOBAL_STRING)
                yyerror("Type mismatch\n");

            // In case the function is of type void
            else if ((yyvsp[-2].fValue) == GLOBAL_VOID || (yyvsp[0].fValue) == GLOBAL_VOID)
                yyerror("Function of type void\n");
            // Indicate uncertainty if exists
            else if ((yyvsp[-2].fValue) == GLOBAL_UNCERTAIN || (yyvsp[0].fValue) == GLOBAL_UNCERTAIN)
                (yyval.iValue) = GLOBAL_UNCERTAIN;
            else {
                // Send the two incoming values for parsing and the comparator
                int result = processComparator((yyvsp[-2].fValue), (yyvsp[0].fValue), NEQ_OP);

                if (result == TWO_NUMBERS_COMPARISON)
                    yyerror("Failed to compare two direct values\n");
                
                // Return the output of the comparison
                (yyval.iValue) = result;
            }
        }
#line 2680 "y.tab.c"
    break;

  case 93: /* comparison_expression: return_value OP_LESS return_value  */
#line 777 "yacc_file.y"
                                            {
            if ((yyvsp[-2].fValue) == GLOBAL_STRING || (yyvsp[0].fValue) == GLOBAL_STRING)
                yyerror("Type mismatch\n");

            // In case the function is of type void
            else if ((yyvsp[-2].fValue) == GLOBAL_VOID || (yyvsp[0].fValue) == GLOBAL_VOID)
                yyerror("Function of type void\n");
            // Indicate uncertainty if exists
            else if ((yyvsp[-2].fValue) == GLOBAL_UNCERTAIN || (yyvsp[0].fValue) == GLOBAL_UNCERTAIN)
                (yyval.iValue) = GLOBAL_UNCERTAIN;
            else {
                // Send the two incoming values for parsing and the comparator
                int result = processComparator((yyvsp[-2].fValue), (yyvsp[0].fValue), LS_OP);

                if (result == TWO_NUMBERS_COMPARISON)
                    yyerror("Failed to compare two direct values\n");
                
                // Return the output of the comparison
                (yyval.iValue) = result;
            }
        }
#line 2706 "y.tab.c"
    break;

  case 94: /* comparison_expression: return_value OP_LESS_EQUAL return_value  */
#line 798 "yacc_file.y"
                                                  {
            if ((yyvsp[-2].fValue) == GLOBAL_STRING || (yyvsp[0].fValue) == GLOBAL_STRING)
                yyerror("Type mismatch\n");
            
            // In case the function is of type void
            else if ((yyvsp[-2].fValue) == GLOBAL_VOID || (yyvsp[0].fValue) == GLOBAL_VOID)
                yyerror("Function of type void\n");
            // Indicate uncertainty if exists
            else if ((yyvsp[-2].fValue) == GLOBAL_UNCERTAIN || (yyvsp[0].fValue) == GLOBAL_UNCERTAIN)
                (yyval.iValue) = GLOBAL_UNCERTAIN;
            else {
                // Send the two incoming values for parsing and the comparator
                int result = processComparator((yyvsp[-2].fValue), (yyvsp[0].fValue), LSE_OP);

                if (result == TWO_NUMBERS_COMPARISON)
                    yyerror("Failed to compare two direct values\n");
                
                // Return the output of the comparison
                (yyval.iValue) = result;
            }
        }
#line 2732 "y.tab.c"
    break;

  case 95: /* comparison_expression: return_value OP_GREATER return_value  */
#line 819 "yacc_file.y"
                                               {
            if ((yyvsp[-2].fValue) == GLOBAL_STRING || (yyvsp[0].fValue) == GLOBAL_STRING)
                yyerror("Type mismatch\n");

            // In case the function is of type void
            else if ((yyvsp[-2].fValue) == GLOBAL_VOID || (yyvsp[0].fValue) == GLOBAL_VOID)
                yyerror("Function of type void\n");
            // Indicate uncertainty if exists
            else if ((yyvsp[-2].fValue) == GLOBAL_UNCERTAIN || (yyvsp[0].fValue) == GLOBAL_UNCERTAIN)
                (yyval.iValue) = GLOBAL_UNCERTAIN;
            else {
                // Send the two incoming values for parsing and the comparator
                int result = processComparator((yyvsp[-2].fValue), (yyvsp[0].fValue), GR_OP);

                if (result == TWO_NUMBERS_COMPARISON)
                    yyerror("Failed to compare two direct values\n");
                
                // Return the output of the comparison
                (yyval.iValue) = result;
            }
        }
#line 2758 "y.tab.c"
    break;

  case 96: /* comparison_expression: return_value OP_GREATER_EQUAL return_value  */
#line 840 "yacc_file.y"
                                                     {
            if ((yyvsp[-2].fValue) == GLOBAL_STRING || (yyvsp[0].fValue) == GLOBAL_STRING)
                yyerror("Type mismatch\n");

            // In case the function is of type void
            else if ((yyvsp[-2].fValue) == GLOBAL_VOID || (yyvsp[0].fValue) == GLOBAL_VOID)
                yyerror("Function of type void\n");
            // Indicate uncertainty if exists
            else if ((yyvsp[-2].fValue) == GLOBAL_UNCERTAIN || (yyvsp[0].fValue) == GLOBAL_UNCERTAIN)
                (yyval.iValue) = GLOBAL_UNCERTAIN;
            else {
                // Send the two incoming values for parsing and the comparator
                int result = processComparator((yyvsp[-2].fValue), (yyvsp[0].fValue), GRE_OP);

                if (result == TWO_NUMBERS_COMPARISON)
                    yyerror("Failed to compare two direct values\n");
                
                // Return the output of the comparison
                (yyval.iValue) = result;
            }
        }
#line 2784 "y.tab.c"
    break;


#line 2788 "y.tab.c"

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

#line 862 "yacc_file.y"

  
int main(int argc, char *argv[])
{
    initSymbolTable();

    yyin = fopen(argv[1], "r");

    symbolTableFile = fopen(argv[2], "w");
    
    quadruplesFile = fopen(argv[3], "w");
  
    yyparse();

    fclose(yyin);

    printSymbolTable();

    destroySymbolTable();

    fclose(symbolTableFile);
    fclose(quadruplesFile);

    return 0;
}
