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
        #include "quadruples.c"
    #endif
    
    extern int yylex();
    
    extern FILE *yyin;

    extern int lineNumber;

#line 91 "y.tab.c"

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
    ERROR_TOKEN = 258,             /* ERROR_TOKEN  */
    INT_TYPE = 259,                /* INT_TYPE  */
    FLOAT_TYPE = 260,              /* FLOAT_TYPE  */
    STRING_TYPE = 261,             /* STRING_TYPE  */
    BOOLEAN_TYPE = 262,            /* BOOLEAN_TYPE  */
    CONSTANT = 263,                /* CONSTANT  */
    TRUE = 264,                    /* TRUE  */
    FALSE = 265,                   /* FALSE  */
    M_OP_PLUS = 266,               /* M_OP_PLUS  */
    M_OP_MINUS = 267,              /* M_OP_MINUS  */
    M_OP_MULT = 268,               /* M_OP_MULT  */
    M_OP_DIV = 269,                /* M_OP_DIV  */
    M_OP_MOD = 270,                /* M_OP_MOD  */
    M_OP_POWER = 271,              /* M_OP_POWER  */
    L_OP_NOT = 272,                /* L_OP_NOT  */
    L_OP_EXACT = 273,              /* L_OP_EXACT  */
    L_OP_AND = 274,                /* L_OP_AND  */
    L_OP_OR = 275,                 /* L_OP_OR  */
    OP_ASSIGN = 276,               /* OP_ASSIGN  */
    OP_EQUAL = 277,                /* OP_EQUAL  */
    OP_NOT_EQUAL = 278,            /* OP_NOT_EQUAL  */
    OP_LESS = 279,                 /* OP_LESS  */
    OP_LESS_EQUAL = 280,           /* OP_LESS_EQUAL  */
    OP_GREATER = 281,              /* OP_GREATER  */
    OP_GREATER_EQUAL = 282,        /* OP_GREATER_EQUAL  */
    TERMINATOR = 283,              /* TERMINATOR  */
    CLOSING_BRACKET = 284,         /* CLOSING_BRACKET  */
    OPENING_BLOCK_BRACES = 285,    /* OPENING_BLOCK_BRACES  */
    OPENING_BRACKET = 286,         /* OPENING_BRACKET  */
    CLOSING_BRACES = 287,          /* CLOSING_BRACES  */
    OPENING_BRACES = 288,          /* OPENING_BRACES  */
    FOR = 289,                     /* FOR  */
    WHILE = 290,                   /* WHILE  */
    REPEAT = 291,                  /* REPEAT  */
    RETURN = 292,                  /* RETURN  */
    ENUM = 293,                    /* ENUM  */
    COMMA = 294,                   /* COMMA  */
    THEN = 295,                    /* THEN  */
    ELSE = 296,                    /* ELSE  */
    DEFAULT = 297,                 /* DEFAULT  */
    FUNCTION = 298,                /* FUNCTION  */
    CALL = 299,                    /* CALL  */
    VOID_TYPE = 300,               /* VOID_TYPE  */
    IDENTIFIER = 301,              /* IDENTIFIER  */
    INTEGER_NUMBER = 302,          /* INTEGER_NUMBER  */
    IF = 303,                      /* IF  */
    SWITCH = 304,                  /* SWITCH  */
    CASE = 305,                    /* CASE  */
    FLOAT_NUMBER = 306,            /* FLOAT_NUMBER  */
    STRING = 307                   /* STRING  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ERROR_TOKEN 258
#define INT_TYPE 259
#define FLOAT_TYPE 260
#define STRING_TYPE 261
#define BOOLEAN_TYPE 262
#define CONSTANT 263
#define TRUE 264
#define FALSE 265
#define M_OP_PLUS 266
#define M_OP_MINUS 267
#define M_OP_MULT 268
#define M_OP_DIV 269
#define M_OP_MOD 270
#define M_OP_POWER 271
#define L_OP_NOT 272
#define L_OP_EXACT 273
#define L_OP_AND 274
#define L_OP_OR 275
#define OP_ASSIGN 276
#define OP_EQUAL 277
#define OP_NOT_EQUAL 278
#define OP_LESS 279
#define OP_LESS_EQUAL 280
#define OP_GREATER 281
#define OP_GREATER_EQUAL 282
#define TERMINATOR 283
#define CLOSING_BRACKET 284
#define OPENING_BLOCK_BRACES 285
#define OPENING_BRACKET 286
#define CLOSING_BRACES 287
#define OPENING_BRACES 288
#define FOR 289
#define WHILE 290
#define REPEAT 291
#define RETURN 292
#define ENUM 293
#define COMMA 294
#define THEN 295
#define ELSE 296
#define DEFAULT 297
#define FUNCTION 298
#define CALL 299
#define VOID_TYPE 300
#define IDENTIFIER 301
#define INTEGER_NUMBER 302
#define IF 303
#define SWITCH 304
#define CASE 305
#define FLOAT_NUMBER 306
#define STRING 307

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 50 "yacc_file.y"

    struct symbolItem *sValue;

    int sIndex;
    char * sName;

    float fValue;
    int iValue;
    char * cValue;

#line 259 "y.tab.c"

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
  YYSYMBOL_ERROR_TOKEN = 3,                /* ERROR_TOKEN  */
  YYSYMBOL_INT_TYPE = 4,                   /* INT_TYPE  */
  YYSYMBOL_FLOAT_TYPE = 5,                 /* FLOAT_TYPE  */
  YYSYMBOL_STRING_TYPE = 6,                /* STRING_TYPE  */
  YYSYMBOL_BOOLEAN_TYPE = 7,               /* BOOLEAN_TYPE  */
  YYSYMBOL_CONSTANT = 8,                   /* CONSTANT  */
  YYSYMBOL_TRUE = 9,                       /* TRUE  */
  YYSYMBOL_FALSE = 10,                     /* FALSE  */
  YYSYMBOL_M_OP_PLUS = 11,                 /* M_OP_PLUS  */
  YYSYMBOL_M_OP_MINUS = 12,                /* M_OP_MINUS  */
  YYSYMBOL_M_OP_MULT = 13,                 /* M_OP_MULT  */
  YYSYMBOL_M_OP_DIV = 14,                  /* M_OP_DIV  */
  YYSYMBOL_M_OP_MOD = 15,                  /* M_OP_MOD  */
  YYSYMBOL_M_OP_POWER = 16,                /* M_OP_POWER  */
  YYSYMBOL_L_OP_NOT = 17,                  /* L_OP_NOT  */
  YYSYMBOL_L_OP_EXACT = 18,                /* L_OP_EXACT  */
  YYSYMBOL_L_OP_AND = 19,                  /* L_OP_AND  */
  YYSYMBOL_L_OP_OR = 20,                   /* L_OP_OR  */
  YYSYMBOL_OP_ASSIGN = 21,                 /* OP_ASSIGN  */
  YYSYMBOL_OP_EQUAL = 22,                  /* OP_EQUAL  */
  YYSYMBOL_OP_NOT_EQUAL = 23,              /* OP_NOT_EQUAL  */
  YYSYMBOL_OP_LESS = 24,                   /* OP_LESS  */
  YYSYMBOL_OP_LESS_EQUAL = 25,             /* OP_LESS_EQUAL  */
  YYSYMBOL_OP_GREATER = 26,                /* OP_GREATER  */
  YYSYMBOL_OP_GREATER_EQUAL = 27,          /* OP_GREATER_EQUAL  */
  YYSYMBOL_TERMINATOR = 28,                /* TERMINATOR  */
  YYSYMBOL_CLOSING_BRACKET = 29,           /* CLOSING_BRACKET  */
  YYSYMBOL_OPENING_BLOCK_BRACES = 30,      /* OPENING_BLOCK_BRACES  */
  YYSYMBOL_OPENING_BRACKET = 31,           /* OPENING_BRACKET  */
  YYSYMBOL_CLOSING_BRACES = 32,            /* CLOSING_BRACES  */
  YYSYMBOL_OPENING_BRACES = 33,            /* OPENING_BRACES  */
  YYSYMBOL_FOR = 34,                       /* FOR  */
  YYSYMBOL_WHILE = 35,                     /* WHILE  */
  YYSYMBOL_REPEAT = 36,                    /* REPEAT  */
  YYSYMBOL_RETURN = 37,                    /* RETURN  */
  YYSYMBOL_ENUM = 38,                      /* ENUM  */
  YYSYMBOL_COMMA = 39,                     /* COMMA  */
  YYSYMBOL_THEN = 40,                      /* THEN  */
  YYSYMBOL_ELSE = 41,                      /* ELSE  */
  YYSYMBOL_DEFAULT = 42,                   /* DEFAULT  */
  YYSYMBOL_FUNCTION = 43,                  /* FUNCTION  */
  YYSYMBOL_CALL = 44,                      /* CALL  */
  YYSYMBOL_VOID_TYPE = 45,                 /* VOID_TYPE  */
  YYSYMBOL_IDENTIFIER = 46,                /* IDENTIFIER  */
  YYSYMBOL_INTEGER_NUMBER = 47,            /* INTEGER_NUMBER  */
  YYSYMBOL_IF = 48,                        /* IF  */
  YYSYMBOL_SWITCH = 49,                    /* SWITCH  */
  YYSYMBOL_CASE = 50,                      /* CASE  */
  YYSYMBOL_FLOAT_NUMBER = 51,              /* FLOAT_NUMBER  */
  YYSYMBOL_STRING = 52,                    /* STRING  */
  YYSYMBOL_YYACCEPT = 53,                  /* $accept  */
  YYSYMBOL_program = 54,                   /* program  */
  YYSYMBOL_sub_program = 55,               /* sub_program  */
  YYSYMBOL_block_structure = 56,           /* block_structure  */
  YYSYMBOL_function_call = 57,             /* function_call  */
  YYSYMBOL_function_arguments = 58,        /* function_arguments  */
  YYSYMBOL_function_arguments2 = 59,       /* function_arguments2  */
  YYSYMBOL_function_definition = 60,       /* function_definition  */
  YYSYMBOL_function_parameters = 61,       /* function_parameters  */
  YYSYMBOL_function_parameters2 = 62,      /* function_parameters2  */
  YYSYMBOL_enumeration = 63,               /* enumeration  */
  YYSYMBOL_enum_body = 64,                 /* enum_body  */
  YYSYMBOL_switch_case = 65,               /* switch_case  */
  YYSYMBOL_switch_body = 66,               /* switch_body  */
  YYSYMBOL_switch_end = 67,                /* switch_end  */
  YYSYMBOL_single_line = 68,               /* single_line  */
  YYSYMBOL_while_loop = 69,                /* while_loop  */
  YYSYMBOL_do_while = 70,                  /* do_while  */
  YYSYMBOL_for_loop = 71,                  /* for_loop  */
  YYSYMBOL_line_or_null = 72,              /* line_or_null  */
  YYSYMBOL_if_stmt = 73,                   /* if_stmt  */
  YYSYMBOL_else_stmt = 74,                 /* else_stmt  */
  YYSYMBOL_constant_variable_declaration = 75, /* constant_variable_declaration  */
  YYSYMBOL_variable_or_function_declaration = 76, /* variable_or_function_declaration  */
  YYSYMBOL_variable_assignment = 77,       /* variable_assignment  */
  YYSYMBOL_expr = 78,                      /* expr  */
  YYSYMBOL_maths_expr = 79,                /* maths_expr  */
  YYSYMBOL_return_value = 80,              /* return_value  */
  YYSYMBOL_number = 81,                    /* number  */
  YYSYMBOL_logical_expression = 82,        /* logical_expression  */
  YYSYMBOL_logical_expression2 = 83,       /* logical_expression2  */
  YYSYMBOL_comparison_expression = 84      /* comparison_expression  */
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
#define YYFINAL  76
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1459

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  227

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   307


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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    73,    73,    74,    75,    78,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    96,    97,   100,   147,
     151,   164,   165,   179,   196,   213,   228,   245,   249,   262,
     263,   277,   307,   307,   320,   328,   338,   342,   346,   350,
     356,   357,   360,   364,   368,   372,   378,   379,   381,   382,
     385,   387,   390,   391,   394,   397,   401,   402,   404,   408,
     422,   434,   446,   458,   472,   503,   534,   547,   552,   569,
     587,   605,   623,   628,   634,   673,   678,   694,   700,   713,
     719,   722,   727,   749,   771,   777,   793,   820,   859,   867,
     875,   878,   883,   919,   955,   991,  1027,  1063
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
  "\"end of file\"", "error", "\"invalid token\"", "ERROR_TOKEN",
  "INT_TYPE", "FLOAT_TYPE", "STRING_TYPE", "BOOLEAN_TYPE", "CONSTANT",
  "TRUE", "FALSE", "M_OP_PLUS", "M_OP_MINUS", "M_OP_MULT", "M_OP_DIV",
  "M_OP_MOD", "M_OP_POWER", "L_OP_NOT", "L_OP_EXACT", "L_OP_AND",
  "L_OP_OR", "OP_ASSIGN", "OP_EQUAL", "OP_NOT_EQUAL", "OP_LESS",
  "OP_LESS_EQUAL", "OP_GREATER", "OP_GREATER_EQUAL", "TERMINATOR",
  "CLOSING_BRACKET", "OPENING_BLOCK_BRACES", "OPENING_BRACKET",
  "CLOSING_BRACES", "OPENING_BRACES", "FOR", "WHILE", "REPEAT", "RETURN",
  "ENUM", "COMMA", "THEN", "ELSE", "DEFAULT", "FUNCTION", "CALL",
  "VOID_TYPE", "IDENTIFIER", "INTEGER_NUMBER", "IF", "SWITCH", "CASE",
  "FLOAT_NUMBER", "STRING", "$accept", "program", "sub_program",
  "block_structure", "function_call", "function_arguments",
  "function_arguments2", "function_definition", "function_parameters",
  "function_parameters2", "enumeration", "enum_body", "switch_case",
  "switch_body", "switch_end", "single_line", "while_loop", "do_while",
  "for_loop", "line_or_null", "if_stmt", "else_stmt",
  "constant_variable_declaration", "variable_or_function_declaration",
  "variable_assignment", "expr", "maths_expr", "return_value", "number",
  "logical_expression", "logical_expression2", "comparison_expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-190)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     698,  -190,   -41,   -28,   -26,   -14,     2,  -190,  -190,    13,
     103,   248,  1407,    12,    15,    23,    60,    16,    33,    17,
      45,  -190,    37,    24,  -190,  -190,   198,  -190,  -190,  -190,
    -190,  -190,  -190,    52,  -190,  -190,  -190,  -190,  -190,    61,
    -190,  -190,   160,   187,  -190,    22,  -190,  -190,  -190,  -190,
    -190,  -190,    45,    61,  -190,    13,  -190,   187,  -190,  -190,
    -190,   748,    38,     5,  1397,  1397,   298,  -190,  -190,    67,
      62,    79,    84,  1407,  1397,    87,  -190,  -190,  -190,  1407,
      72,    72,    72,    72,    72,    72,   103,   103,   103,   103,
     103,   103,    13,    13,   187,  -190,  -190,  -190,  -190,    93,
      88,    90,   798,    76,    95,   177,   103,  -190,    98,   -21,
    -190,    72,   175,  -190,   175,   113,   113,   113,   113,  -190,
    -190,  -190,  -190,  -190,  -190,  -190,  -190,  1397,    97,  1397,
      96,   100,   177,   108,   104,   115,   112,   119,   120,   103,
      19,   132,   124,   348,  -190,  1397,   121,   134,   139,   145,
     177,  -190,  -190,   103,  -190,   146,   398,   153,   103,   162,
    -190,  1397,  -190,   848,  -190,   100,   167,   184,   898,   104,
     112,   448,  -190,   948,   498,   185,  -190,   171,  -190,  -190,
    -190,   998,    60,  1048,  -190,  -190,   178,  1098,  -190,  -190,
    1148,   548,   188,    89,  1198,   192,   103,   189,  -190,   178,
    -190,  -190,  1248,   598,   195,   179,   193,   199,   648,  -190,
    -190,  -190,  1298,   194,   202,  -190,   203,   178,  1348,  -190,
    -190,   205,  -190,  -190,   178,  -190,  -190
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
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

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -190,   -11,   -25,  -190,  -190,  -190,    68,  -190,    99,    70,
    -190,    75,  -190,  -190,   122,   -48,  -190,  -190,  -190,  -116,
    -190,  -189,  -190,    -4,   237,   -46,    -9,     3,  -190,    -8,
       6,  -190
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    26,    27,    28,    29,   135,   154,    30,   133,   151,
      31,   147,    32,   140,   141,    33,    34,    35,    36,    99,
      37,   198,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      61,    77,    53,    62,    63,    48,     2,     3,     4,     5,
     209,   142,    57,    59,    71,    58,    98,   100,    49,    68,
      50,   138,     7,     8,    92,    93,   108,   107,   223,   139,
       9,    10,    51,   110,    97,   226,    77,     2,     3,     4,
       5,    92,    93,    64,    55,   177,    65,    63,    52,    80,
      81,    82,    83,    84,    85,   102,    66,    19,    94,    56,
      21,   138,    69,    72,    24,    25,    73,    96,    74,   158,
      75,   112,   114,   115,   116,   117,   118,    77,    70,    98,
      78,   144,    79,   113,   113,   113,   113,   113,   113,   119,
     120,   121,   122,   123,   124,    94,    94,   164,   125,   126,
     103,   134,    62,   111,    19,    67,    56,    21,   104,   136,
     105,    24,    25,    98,   113,   106,    19,   128,    56,    21,
     109,   127,   131,    24,    25,   129,   132,   137,   134,    85,
     143,   145,   163,    19,   204,    56,    21,   149,    77,   146,
      24,    25,   157,   150,   152,   173,   169,    19,    77,    56,
      21,   153,   161,   156,    24,    25,   170,   183,    77,   155,
     187,   175,    77,   190,   160,    77,   166,   165,   167,    77,
     194,    80,    81,    82,    83,    84,    85,    77,   168,   171,
     202,     2,     3,     4,     5,   195,   174,    77,    82,    83,
      84,    85,   212,    77,   176,   180,    68,   218,    76,   207,
     192,     1,     2,     3,     4,     5,     6,     7,     8,    86,
      87,    88,    89,    90,    91,     9,    10,   181,   191,   197,
     206,   203,   208,   213,   214,   215,   220,   216,    11,    12,
     221,   148,    13,    14,    15,   222,    17,   225,   185,   184,
     179,    18,    19,    54,    20,    21,    22,    23,     0,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,   159,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
      60,     0,    13,    14,    15,    16,    17,     0,     0,     0,
       0,    18,    19,     0,    20,    21,    22,    23,     0,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
     101,     0,    13,    14,    15,    16,    17,     0,     0,     0,
       0,    18,    19,     0,    20,    21,    22,    23,     0,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
     162,     0,    13,    14,    15,    16,    17,     0,     0,     0,
       0,    18,    19,     0,    20,    21,    22,    23,     0,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
     172,     0,    13,    14,    15,    16,    17,     0,     0,     0,
       0,    18,    19,     0,    20,    21,    22,    23,     0,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
     186,     0,    13,    14,    15,    16,    17,     0,     0,     0,
       0,    18,    19,     0,    20,    21,    22,    23,     0,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
     189,     0,    13,    14,    15,    16,    17,     0,     0,     0,
       0,    18,    19,     0,    20,    21,    22,    23,     0,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
     201,     0,    13,    14,    15,    16,    17,     0,     0,     0,
       0,    18,    19,     0,    20,    21,    22,    23,     0,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
     211,     0,    13,    14,    15,    16,    17,     0,     0,     0,
       0,    18,    19,     0,    20,    21,    22,    23,     0,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
     217,     0,    13,    14,    15,    16,    17,     0,     0,     0,
       0,    18,    19,     0,    20,    21,    22,    23,     0,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,    13,    14,    15,    16,    17,     0,     0,     0,
       0,    18,    19,     0,    20,    21,    22,    23,     0,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
      95,     0,    13,    14,    15,     0,    17,     0,     0,     0,
       0,    18,    19,     0,    20,    21,    22,    23,     0,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
     130,     0,    13,    14,    15,     0,    17,     0,     0,     0,
       0,    18,    19,     0,    20,    21,    22,    23,     0,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
     178,     0,    13,    14,    15,     0,    17,     0,     0,     0,
       0,    18,    19,     0,    20,    21,    22,    23,     0,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,    13,    14,    15,   182,    17,     0,     0,     0,
       0,    18,    19,     0,    20,    21,    22,    23,     0,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
     188,     0,    13,    14,    15,     0,    17,     0,     0,     0,
       0,    18,    19,     0,    20,    21,    22,    23,     0,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,    13,    14,    15,   193,    17,     0,     0,     0,
       0,    18,    19,     0,    20,    21,    22,    23,     0,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,    13,    14,    15,   196,    17,     0,     0,     0,
       0,    18,    19,     0,    20,    21,    22,    23,     0,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
     199,     0,    13,    14,    15,     0,    17,     0,     0,     0,
       0,    18,    19,     0,    20,    21,    22,    23,     0,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
     200,     0,    13,    14,    15,     0,    17,     0,     0,     0,
       0,    18,    19,     0,    20,    21,    22,    23,     0,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,    13,    14,    15,   205,    17,     0,     0,     0,
       0,    18,    19,     0,    20,    21,    22,    23,     0,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
     210,     0,    13,    14,    15,     0,    17,     0,     0,     0,
       0,    18,    19,     0,    20,    21,    22,    23,     0,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
     219,     0,    13,    14,    15,     0,    17,     0,     0,     0,
       0,    18,    19,     0,    20,    21,    22,    23,     0,    24,
      25,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
     224,     0,    13,    14,    15,     0,    17,     0,     0,     0,
       0,    18,    19,     0,    20,    21,    22,    23,     0,    24,
      25,     2,     3,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     0,     0,     9,    10,     7,     8,     0,     0,
       0,     0,     0,     0,     9,    10,     0,     0,    12,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,     0,
       0,    19,     0,    20,    21,     0,     0,     0,    24,    25,
       0,    19,     0,    56,    21,     0,     0,     0,    24,    25
};

static const yytype_int16 yycheck[] =
{
      11,    26,     6,    12,    12,    46,     4,     5,     6,     7,
     199,   127,     9,    10,    18,     9,    64,    65,    46,    16,
      46,    42,     9,    10,    19,    20,    74,    73,   217,    50,
      17,    18,    46,    79,    29,   224,    61,     4,     5,     6,
       7,    19,    20,    31,    31,   161,    31,    55,    46,    11,
      12,    13,    14,    15,    16,    66,    33,    44,    55,    46,
      47,    42,    46,    46,    51,    52,    21,    29,    31,    50,
      46,    80,    81,    82,    83,    84,    85,   102,    45,   127,
      28,   129,    21,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,   145,    92,    93,
      33,   105,   111,    31,    44,    45,    46,    47,    46,   106,
      31,    51,    52,   161,   111,    31,    44,    29,    46,    47,
      33,    28,    46,    51,    52,    35,    31,    29,   132,    16,
      33,    35,   143,    44,    45,    46,    47,    29,   163,    39,
      51,    52,   139,    39,    29,   156,   150,    44,   173,    46,
      47,    39,    28,    33,    51,    52,   153,   168,   183,    40,
     171,   158,   187,   174,    32,   190,    32,    46,    29,   194,
     181,    11,    12,    13,    14,    15,    16,   202,    33,    33,
     191,     4,     5,     6,     7,   182,    33,   212,    13,    14,
      15,    16,   203,   218,    32,    28,   193,   208,     0,   196,
      29,     3,     4,     5,     6,     7,     8,     9,    10,    22,
      23,    24,    25,    26,    27,    17,    18,    33,    33,    41,
      28,    33,    33,    28,    45,    32,    32,    28,    30,    31,
      28,   132,    34,    35,    36,    32,    38,    32,   170,   169,
     165,    43,    44,     6,    46,    47,    48,    49,    -1,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,   140,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    -1,    34,    35,    36,    37,    38,    -1,    -1,    -1,
      -1,    43,    44,    -1,    46,    47,    48,    49,    -1,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    -1,    34,    35,    36,    37,    38,    -1,    -1,    -1,
      -1,    43,    44,    -1,    46,    47,    48,    49,    -1,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    -1,    34,    35,    36,    37,    38,    -1,    -1,    -1,
      -1,    43,    44,    -1,    46,    47,    48,    49,    -1,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    -1,    34,    35,    36,    37,    38,    -1,    -1,    -1,
      -1,    43,    44,    -1,    46,    47,    48,    49,    -1,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    -1,    34,    35,    36,    37,    38,    -1,    -1,    -1,
      -1,    43,    44,    -1,    46,    47,    48,    49,    -1,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    -1,    34,    35,    36,    37,    38,    -1,    -1,    -1,
      -1,    43,    44,    -1,    46,    47,    48,    49,    -1,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    -1,    34,    35,    36,    37,    38,    -1,    -1,    -1,
      -1,    43,    44,    -1,    46,    47,    48,    49,    -1,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    -1,    34,    35,    36,    37,    38,    -1,    -1,    -1,
      -1,    43,    44,    -1,    46,    47,    48,    49,    -1,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    -1,    34,    35,    36,    37,    38,    -1,    -1,    -1,
      -1,    43,    44,    -1,    46,    47,    48,    49,    -1,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    -1,    34,    35,    36,    37,    38,    -1,    -1,    -1,
      -1,    43,    44,    -1,    46,    47,    48,    49,    -1,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    -1,    34,    35,    36,    -1,    38,    -1,    -1,    -1,
      -1,    43,    44,    -1,    46,    47,    48,    49,    -1,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    -1,    34,    35,    36,    -1,    38,    -1,    -1,    -1,
      -1,    43,    44,    -1,    46,    47,    48,    49,    -1,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    -1,    34,    35,    36,    -1,    38,    -1,    -1,    -1,
      -1,    43,    44,    -1,    46,    47,    48,    49,    -1,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    -1,    34,    35,    36,    37,    38,    -1,    -1,    -1,
      -1,    43,    44,    -1,    46,    47,    48,    49,    -1,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    -1,    34,    35,    36,    -1,    38,    -1,    -1,    -1,
      -1,    43,    44,    -1,    46,    47,    48,    49,    -1,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    -1,    34,    35,    36,    37,    38,    -1,    -1,    -1,
      -1,    43,    44,    -1,    46,    47,    48,    49,    -1,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    -1,    34,    35,    36,    37,    38,    -1,    -1,    -1,
      -1,    43,    44,    -1,    46,    47,    48,    49,    -1,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    -1,    34,    35,    36,    -1,    38,    -1,    -1,    -1,
      -1,    43,    44,    -1,    46,    47,    48,    49,    -1,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    -1,    34,    35,    36,    -1,    38,    -1,    -1,    -1,
      -1,    43,    44,    -1,    46,    47,    48,    49,    -1,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    -1,    34,    35,    36,    37,    38,    -1,    -1,    -1,
      -1,    43,    44,    -1,    46,    47,    48,    49,    -1,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    -1,    34,    35,    36,    -1,    38,    -1,    -1,    -1,
      -1,    43,    44,    -1,    46,    47,    48,    49,    -1,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    -1,    34,    35,    36,    -1,    38,    -1,    -1,    -1,
      -1,    43,    44,    -1,    46,    47,    48,    49,    -1,    51,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    -1,    34,    35,    36,    -1,    38,    -1,    -1,    -1,
      -1,    43,    44,    -1,    46,    47,    48,    49,    -1,    51,
      52,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    44,    -1,    46,    47,    -1,    -1,    -1,    51,    52,
      -1,    44,    -1,    46,    47,    -1,    -1,    -1,    51,    52
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    17,
      18,    30,    31,    34,    35,    36,    37,    38,    43,    44,
      46,    47,    48,    49,    51,    52,    54,    55,    56,    57,
      60,    63,    65,    68,    69,    70,    71,    73,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    46,    46,
      46,    46,    46,    76,    77,    31,    46,    80,    83,    80,
      32,    54,    79,    82,    31,    31,    33,    45,    80,    46,
      45,    76,    46,    21,    31,    46,     0,    55,    28,    21,
      11,    12,    13,    14,    15,    16,    22,    23,    24,    25,
      26,    27,    19,    20,    80,    32,    29,    29,    68,    72,
      68,    32,    54,    33,    46,    31,    31,    78,    68,    33,
      78,    31,    79,    80,    79,    79,    79,    79,    79,    80,
      80,    80,    80,    80,    80,    83,    83,    28,    29,    35,
      32,    46,    31,    61,    76,    58,    80,    29,    42,    50,
      66,    67,    72,    33,    68,    35,    39,    64,    61,    29,
      39,    62,    29,    39,    59,    40,    33,    80,    50,    67,
      32,    28,    32,    54,    68,    46,    32,    29,    33,    76,
      80,    33,    32,    54,    33,    80,    32,    72,    32,    64,
      28,    33,    37,    54,    62,    59,    32,    54,    32,    32,
      54,    33,    29,    37,    54,    80,    37,    41,    74,    32,
      32,    32,    54,    33,    45,    37,    28,    80,    33,    74,
      32,    32,    54,    28,    45,    32,    28,    32,    54,    32,
      32,    28,    32,    74,    32,    32,    74
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
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

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
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
#line 75 "yacc_file.y"
                              {
            // Completely ignored in case of non-functions
        }
#line 1721 "y.tab.c"
    break;

  case 5: /* program: RETURN VOID_TYPE  */
#line 78 "yacc_file.y"
                           {
            // Completely ignored in case of non-functions
        }
#line 1729 "y.tab.c"
    break;

  case 11: /* sub_program: switch_case  */
#line 89 "yacc_file.y"
                      { resetRegisters(); }
#line 1735 "y.tab.c"
    break;

  case 15: /* sub_program: ERROR_TOKEN  */
#line 93 "yacc_file.y"
                      { handleError(UNEXPECTED_CHARACTER, -1, ""); }
#line 1741 "y.tab.c"
    break;

  case 18: /* function_call: CALL IDENTIFIER OPENING_BRACKET function_arguments CLOSING_BRACKET  */
#line 100 "yacc_file.y"
                                                                           {
            // Get the symbol from the symbol table
            int symbolIndex = getSymbolIndex((yyvsp[-3].sName));
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
#line 1791 "y.tab.c"
    break;

  case 19: /* function_arguments: %empty  */
#line 147 "yacc_file.y"
        { 
            globalParametersCount = 0;
            globalParameters = NULL;
        }
#line 1800 "y.tab.c"
    break;

  case 20: /* function_arguments: return_value function_arguments2  */
#line 151 "yacc_file.y"
                                            {
            int returnResult = (yyvsp[-1].fValue);
            // Check if there is an issue with the incoming value
            if (returnResult == ERROR_UNDECLARED) {
                handleError(ERROR_UNDECLARED, -1, "");
            }
            if (returnResult == ERROR_UNINITIALIZED) {
                handleError(ERROR_UNINITIALIZED, -1, "");
            }

            addArgumentParameter(returnResult);
        }
#line 1817 "y.tab.c"
    break;

  case 22: /* function_arguments2: COMMA return_value function_arguments2  */
#line 165 "yacc_file.y"
                                                 {   
            int returnResult = (yyvsp[-1].fValue);
            // Check if there is an issue with the incoming value
            if (returnResult == ERROR_UNDECLARED) {
                handleError(ERROR_UNDECLARED, -1, "");
            }
            if (returnResult == ERROR_UNINITIALIZED) {
                handleError(ERROR_UNINITIALIZED, -1, "");
            }

            addArgumentParameter(returnResult);
        }
#line 1834 "y.tab.c"
    break;

  case 23: /* function_definition: FUNCTION variable_or_function_declaration OPENING_BRACKET function_parameters CLOSING_BRACKET OPENING_BRACES program RETURN return_value TERMINATOR CLOSING_BRACES  */
#line 179 "yacc_file.y"
                                                                                                                                                                           {
            int functionIndex = (yyvsp[-9].sIndex);
            symbolTable[functionIndex].isFunction = true;

            int returnResult = (yyvsp[-2].fValue);

            if (returnResult == ERROR_UNDECLARED)
                handleError(ERROR_UNDECLARED, -1, "");
            else if (returnResult == ERROR_UNINITIALIZED)
                handleError(ERROR_UNINITIALIZED, -1, "");

            int assignmentStatus = defineNonVoidFunction(functionIndex, returnResult);
            if (assignmentStatus == ERROR_TYPE_MISMATCH)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            
            setFunctionParameters(functionIndex);
        }
#line 1856 "y.tab.c"
    break;

  case 24: /* function_definition: FUNCTION variable_or_function_declaration OPENING_BRACKET function_parameters CLOSING_BRACKET OPENING_BRACES RETURN return_value TERMINATOR CLOSING_BRACES  */
#line 196 "yacc_file.y"
                                                                                                                                                                     {
            int functionIndex = (yyvsp[-8].sIndex);
            symbolTable[functionIndex].isFunction = true;

            int returnResult = (yyvsp[-2].fValue);

            if (returnResult == ERROR_UNDECLARED)
                handleError(ERROR_UNDECLARED, -1, "");
            else if (returnResult == ERROR_UNINITIALIZED)
                handleError(ERROR_UNINITIALIZED, -1, "");
            
            int assignmentStatus = defineNonVoidFunction(functionIndex, returnResult);
            if (assignmentStatus == ERROR_TYPE_MISMATCH)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            
            setFunctionParameters(functionIndex);
        }
#line 1878 "y.tab.c"
    break;

  case 25: /* function_definition: FUNCTION VOID_TYPE IDENTIFIER OPENING_BRACKET function_parameters CLOSING_BRACKET OPENING_BRACES program RETURN VOID_TYPE TERMINATOR CLOSING_BRACES  */
#line 213 "yacc_file.y"
                                                                                                                                                              {
            // Get the symbol index from the symbol name
            char * symbolName = (yyvsp[-9].sName);
            int resultIndex = searchAndDeclare(symbolName, TYPE_VOID);

            // If the symbol already is declared in the same scope-level, handle the error
            if (resultIndex == ERROR_DECLARED)
                handleError(ERROR_DECLARED, -1, "");
            
            symbolTable[resultIndex].isFunction = true;
            
            setFunctionParameters(resultIndex);

            (yyval.iValue) = GLOBAL_VOID;
        }
#line 1898 "y.tab.c"
    break;

  case 26: /* function_definition: FUNCTION VOID_TYPE IDENTIFIER OPENING_BRACKET function_parameters CLOSING_BRACKET OPENING_BRACES RETURN VOID_TYPE TERMINATOR CLOSING_BRACES  */
#line 228 "yacc_file.y"
                                                                                                                                                      {
            // Get the symbol index from the symbol name
            char * symbolName = (yyvsp[-8].sName);
            int resultIndex = searchAndDeclare(symbolName, TYPE_VOID);

            // If the symbol already is declared in the same scope-level, handle the error
            if (resultIndex == ERROR_DECLARED)
                handleError(ERROR_DECLARED, -1, "");
            
            symbolTable[resultIndex].isFunction = true;

            setFunctionParameters(resultIndex);

            (yyval.iValue) = GLOBAL_VOID;
        }
#line 1918 "y.tab.c"
    break;

  case 27: /* function_parameters: %empty  */
#line 245 "yacc_file.y"
        { 
            globalParametersCount = 0;
            globalParameters = NULL;
        }
#line 1927 "y.tab.c"
    break;

  case 28: /* function_parameters: variable_or_function_declaration function_parameters2  */
#line 249 "yacc_file.y"
                                                                {
            int returnResult = (yyvsp[-1].sIndex);
            // Check if there is an issue with the incoming value
            if (returnResult == ERROR_UNDECLARED) {
                handleError(ERROR_UNDECLARED, -1, "");
            }
            if (returnResult == ERROR_UNINITIALIZED) {
                handleError(ERROR_UNINITIALIZED, -1, "");
            }

            addArgumentParameter(returnResult);
        }
#line 1944 "y.tab.c"
    break;

  case 30: /* function_parameters2: COMMA variable_or_function_declaration function_parameters2  */
#line 263 "yacc_file.y"
                                                                      {
            int returnResult = (yyvsp[-1].sIndex);
            // Check if there is an issue with the incoming value
            if (returnResult == ERROR_UNDECLARED) {
                handleError(ERROR_UNDECLARED, -1, "");
            }
            if (returnResult == ERROR_UNINITIALIZED) {
                handleError(ERROR_UNINITIALIZED, -1, "");
            }

            addArgumentParameter(returnResult);
        }
#line 1961 "y.tab.c"
    break;

  case 31: /* enumeration: ENUM IDENTIFIER OPENING_BRACES IDENTIFIER enum_body CLOSING_BRACES TERMINATOR  */
#line 277 "yacc_file.y"
                                                                                      {
            // Get the symbol index from the enum name
            char * firstElement = (yyvsp[-3].sName);
            int resultIndex = searchAndDeclare(firstElement, TYPE_INT);

            // If the symbol already is declared in the same scope-level, handle the error
            if (resultIndex == ERROR_DECLARED)
                handleError(ERROR_DECLARED, -1, "");
                
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
#line 1994 "y.tab.c"
    break;

  case 32: /* enum_body: %empty  */
#line 307 "yacc_file.y"
        { (yyval.iValue) = ENUM_END; }
#line 2000 "y.tab.c"
    break;

  case 33: /* enum_body: COMMA IDENTIFIER enum_body  */
#line 307 "yacc_file.y"
                                                        {
            // Get the symbol index from the identifier name
            int resultIndex = searchAndDeclare((yyvsp[-1].sName), TYPE_INT);
            // If the symbol already is declared in the same scope-level, handle the error
            if (resultIndex == ERROR_DECLARED)
                handleError(ERROR_DECLARED, -1, "");
            if ((yyvsp[0].iValue) == ENUM_END)
                (yyval.iValue) = resultIndex;
            else
                (yyval.iValue) = (yyvsp[0].iValue);
        }
#line 2016 "y.tab.c"
    break;

  case 34: /* switch_case: SWITCH IDENTIFIER OPENING_BRACES switch_body switch_end CLOSING_BRACES  */
#line 320 "yacc_file.y"
                                                                               {
            int resultIndex = getSymbolIndex((yyvsp[-4].sName));
            if (resultIndex == -1)
                handleError(ERROR_UNDECLARED, (yyvsp[-5].iValue), "");
            else if (symbolTable[resultIndex].type != TYPE_INT) {
                handleError(SWITCH_TYPE_MISMATCH, (yyvsp[-5].iValue), "");
            }
        }
#line 2029 "y.tab.c"
    break;

  case 35: /* switch_case: SWITCH IDENTIFIER OPENING_BRACES switch_end CLOSING_BRACES  */
#line 328 "yacc_file.y"
                                                                     {
            int resultIndex = getSymbolIndex((yyvsp[-3].sName));
            if (resultIndex == -1)
                handleError(ERROR_UNDECLARED, (yyvsp[-4].iValue), "");
            else if (symbolTable[resultIndex].type != TYPE_INT) {
                handleError(SWITCH_TYPE_MISMATCH, (yyvsp[-4].iValue), "");
            }
        }
#line 2042 "y.tab.c"
    break;

  case 36: /* switch_body: CASE return_value OPENING_BRACES program CLOSING_BRACES  */
#line 338 "yacc_file.y"
                                                                {
            if ((int) (yyvsp[-3].fValue) != GLOBAL_NUMBER)
                handleError(SWITCH_TYPE_MISMATCH, (yyvsp[-4].iValue), "");
        }
#line 2051 "y.tab.c"
    break;

  case 37: /* switch_body: CASE return_value OPENING_BRACES CLOSING_BRACES  */
#line 342 "yacc_file.y"
                                                          {
            if ((int) (yyvsp[-2].fValue) != GLOBAL_NUMBER)
                handleError(SWITCH_TYPE_MISMATCH, (yyvsp[-3].iValue), "");
        }
#line 2060 "y.tab.c"
    break;

  case 38: /* switch_body: switch_body CASE return_value OPENING_BRACES program CLOSING_BRACES  */
#line 346 "yacc_file.y"
                                                                              {
            if ((int) (yyvsp[-3].fValue) != GLOBAL_NUMBER)
                handleError(SWITCH_TYPE_MISMATCH, (yyvsp[-4].iValue), "");
        }
#line 2069 "y.tab.c"
    break;

  case 39: /* switch_body: switch_body CASE return_value OPENING_BRACES CLOSING_BRACES  */
#line 350 "yacc_file.y"
                                                                      {
            if ((int) (yyvsp[-2].fValue) != GLOBAL_NUMBER)
                handleError(SWITCH_TYPE_MISMATCH, (yyvsp[-3].iValue), "");
        }
#line 2078 "y.tab.c"
    break;

  case 42: /* single_line: expr  */
#line 360 "yacc_file.y"
             {
            // Return the symbol index
            (yyval.iValue) = (yyvsp[0].fValue);
        }
#line 2087 "y.tab.c"
    break;

  case 43: /* single_line: constant_variable_declaration  */
#line 364 "yacc_file.y"
                                        {
            // Return the symbol index
            (yyval.iValue) = (yyvsp[0].iValue);
        }
#line 2096 "y.tab.c"
    break;

  case 44: /* single_line: variable_or_function_declaration  */
#line 368 "yacc_file.y"
                                           {
            // Return the symbol index
            (yyval.iValue) = (yyvsp[0].sIndex);
        }
#line 2105 "y.tab.c"
    break;

  case 45: /* single_line: variable_assignment  */
#line 372 "yacc_file.y"
                              {
            // Return the symbol index
            (yyval.iValue) = (yyvsp[0].iValue);
        }
#line 2114 "y.tab.c"
    break;

  case 50: /* for_loop: FOR OPENING_BRACKET line_or_null TERMINATOR line_or_null TERMINATOR line_or_null CLOSING_BRACKET OPENING_BRACES program CLOSING_BRACES  */
#line 385 "yacc_file.y"
                                                                                                                                               {
        }
#line 2121 "y.tab.c"
    break;

  case 51: /* for_loop: FOR OPENING_BRACKET line_or_null TERMINATOR line_or_null TERMINATOR line_or_null CLOSING_BRACKET OPENING_BRACES CLOSING_BRACES  */
#line 387 "yacc_file.y"
                                                                                                                                         {
        }
#line 2128 "y.tab.c"
    break;

  case 54: /* if_stmt: IF OPENING_BRACKET single_line CLOSING_BRACKET THEN OPENING_BRACES program CLOSING_BRACES else_stmt  */
#line 394 "yacc_file.y"
                                                                                                            {
            ifStatementLogic((yyvsp[-8].iValue), (yyvsp[-6].iValue));
        }
#line 2136 "y.tab.c"
    break;

  case 55: /* if_stmt: IF OPENING_BRACKET single_line CLOSING_BRACKET THEN OPENING_BRACES CLOSING_BRACES else_stmt  */
#line 397 "yacc_file.y"
                                                                                                      {
            ifStatementLogic((yyvsp[-7].iValue), (yyvsp[-5].iValue));
        }
#line 2144 "y.tab.c"
    break;

  case 57: /* else_stmt: ELSE OPENING_BRACES program CLOSING_BRACES else_stmt  */
#line 402 "yacc_file.y"
                                                               {
        }
#line 2151 "y.tab.c"
    break;

  case 58: /* else_stmt: ELSE OPENING_BRACES CLOSING_BRACES else_stmt  */
#line 404 "yacc_file.y"
                                                       {
        }
#line 2158 "y.tab.c"
    break;

  case 59: /* constant_variable_declaration: CONSTANT variable_assignment  */
#line 408 "yacc_file.y"
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
#line 2175 "y.tab.c"
    break;

  case 60: /* variable_or_function_declaration: INT_TYPE IDENTIFIER  */
#line 422 "yacc_file.y"
                            {
            // Get the symbol index from the symbol name
            char * symbolName = (yyvsp[0].sName);
            int result = searchAndDeclare(symbolName, TYPE_INT);

            // If the symbol already is declared in the same scope-level, handle the error
            if (result == ERROR_DECLARED)
                handleError(ERROR_DECLARED, -1, "");
            
            // Return the symbol index
            (yyval.sIndex) = result;
        }
#line 2192 "y.tab.c"
    break;

  case 61: /* variable_or_function_declaration: FLOAT_TYPE IDENTIFIER  */
#line 434 "yacc_file.y"
                                {
            // Get the symbol index from the symbol name
            char * symbolName = (yyvsp[0].sName);
            int result = searchAndDeclare(symbolName, TYPE_FLOAT);

            // If the symbol already is declared in the same scope-level, handle the error
            if (result == ERROR_DECLARED)
                handleError(ERROR_DECLARED, -1, "");
            
            // Return the symbol index
            (yyval.sIndex) = result;
        }
#line 2209 "y.tab.c"
    break;

  case 62: /* variable_or_function_declaration: STRING_TYPE IDENTIFIER  */
#line 446 "yacc_file.y"
                                 {
            // Get the symbol index from the symbol name
            char * symbolName = (yyvsp[0].sName);
            int result = searchAndDeclare(symbolName, TYPE_STRING);

            // If the symbol already is declared in the same scope-level, handle the error
            if (result == ERROR_DECLARED)
                handleError(ERROR_DECLARED, -1, "");
            
            // Return the symbol index
            (yyval.sIndex) = result;
        }
#line 2226 "y.tab.c"
    break;

  case 63: /* variable_or_function_declaration: BOOLEAN_TYPE IDENTIFIER  */
#line 458 "yacc_file.y"
                                  {
            // Get the symbol index from the symbol name
            char * symbolName = (yyvsp[0].sName);
            int result = searchAndDeclare(symbolName, TYPE_BOOL);

            // If the symbol already is declared in the same scope-level, handle the error
            if (result == ERROR_DECLARED)
                handleError(ERROR_DECLARED, -1, "");
            
            // Return the symbol index
            (yyval.sIndex) = result;
        }
#line 2243 "y.tab.c"
    break;

  case 64: /* variable_assignment: IDENTIFIER OP_ASSIGN expr  */
#line 472 "yacc_file.y"
                                  {
            int symbolIndex = getSymbolIndex((yyvsp[-2].sName));
            if (symbolIndex == -1)
                handleError(ERROR_UNDECLARED, -1, "");

            int assignmentStatus;
            // In case the function is of type void
            if ((yyvsp[0].fValue) == GLOBAL_VOID)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            else if ((yyvsp[0].fValue) == GLOBAL_STRING)
                assignmentStatus = assignValue(symbolIndex, globalString, TYPE_STRING);
            else
                assignmentStatus = assignValue(symbolIndex, (void*)&(yyvsp[0].fValue), TYPE_FLOAT);
            
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
        }
#line 2279 "y.tab.c"
    break;

  case 65: /* variable_assignment: variable_or_function_declaration OP_ASSIGN expr  */
#line 503 "yacc_file.y"
                                                          {
            // Declare and assign a variable
            int symbolIndex = (yyvsp[-2].sIndex);

            int assignmentStatus;
            // In case the function is of type void
            if ((yyvsp[0].fValue) == GLOBAL_VOID)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            else if ((yyvsp[0].fValue) == GLOBAL_STRING)
                assignmentStatus = assignValue(symbolIndex, globalString, TYPE_STRING);
            else
                assignmentStatus = assignValue(symbolIndex, (void*)&(yyvsp[0].fValue), TYPE_FLOAT);
            
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
        }
#line 2313 "y.tab.c"
    break;

  case 66: /* expr: maths_expr  */
#line 534 "yacc_file.y"
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
#line 2331 "y.tab.c"
    break;

  case 67: /* expr: logical_expression  */
#line 547 "yacc_file.y"
                             {
            // Return the symbol index or global reference (string or number)
            (yyval.fValue) = (yyvsp[0].fValue);
        }
#line 2340 "y.tab.c"
    break;

  case 68: /* maths_expr: maths_expr M_OP_PLUS maths_expr  */
#line 552 "yacc_file.y"
                                                             {
            if ((yyvsp[-2].fValue) == GLOBAL_STRING || (yyvsp[0].fValue) == GLOBAL_STRING)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            (yyval.fValue) = (yyvsp[-2].fValue) + (yyvsp[0].fValue);

            // Store the value stored in the register to the variable
            char tempBuffer1[3];
            sprintf(tempBuffer1, "R%d", currentRegister - (2 + 2 * instructionsConsidered));

            char tempBuffer2[3];
            sprintf(tempBuffer2, "R%d", currentRegister - 1);

            char tempBuffer3[3];
            sprintf(tempBuffer3, "R%d", currentRegister++);

            addQuadruple(ADD, tempBuffer1, tempBuffer2, tempBuffer3);
        }
#line 2362 "y.tab.c"
    break;

  case 69: /* maths_expr: maths_expr M_OP_MINUS maths_expr  */
#line 569 "yacc_file.y"
                                                            {
            if ((yyvsp[-2].fValue) == GLOBAL_STRING || (yyvsp[0].fValue) == GLOBAL_STRING)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            (yyval.fValue) = (yyvsp[-2].fValue) - (yyvsp[0].fValue);

            // Store the value stored in the register to the variable
            char tempBuffer1[3];
            sprintf(tempBuffer1, "R%d", currentRegister - (2 + 2 * instructionsConsidered));

            char tempBuffer2[3];
            sprintf(tempBuffer2, "R%d", currentRegister - 1);

            char tempBuffer3[3];
            sprintf(tempBuffer3, "R%d", currentRegister++);

            addQuadruple(SUB, tempBuffer1, tempBuffer2, tempBuffer3);
            instructionsConsidered++;
        }
#line 2385 "y.tab.c"
    break;

  case 70: /* maths_expr: maths_expr M_OP_MULT maths_expr  */
#line 587 "yacc_file.y"
                                                          {
            if ((yyvsp[-2].fValue) == GLOBAL_STRING || (yyvsp[0].fValue) == GLOBAL_STRING)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            (yyval.fValue) = (yyvsp[-2].fValue) * (yyvsp[0].fValue);

            // Store the value stored in the register to the variable
            char tempBuffer1[3];
            sprintf(tempBuffer1, "R%d", currentRegister - 2);

            char tempBuffer2[3];
            sprintf(tempBuffer2, "R%d", currentRegister - 1);

            char tempBuffer3[3];
            sprintf(tempBuffer3, "R%d", currentRegister++);

            addQuadruple(MUL, tempBuffer1, tempBuffer2, tempBuffer3);
            instructionsConsidered++;
        }
#line 2408 "y.tab.c"
    break;

  case 71: /* maths_expr: maths_expr M_OP_DIV maths_expr  */
#line 605 "yacc_file.y"
                                                        {
            if ((yyvsp[-2].fValue) == GLOBAL_STRING || (yyvsp[0].fValue) == GLOBAL_STRING)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            (yyval.fValue) = (yyvsp[-2].fValue) / (yyvsp[0].fValue);

            // Store the value stored in the register to the variable
            char tempBuffer1[3];
            sprintf(tempBuffer1, "R%d", currentRegister - 2);

            char tempBuffer2[3];
            sprintf(tempBuffer2, "R%d", currentRegister - 1);

            char tempBuffer3[3];
            sprintf(tempBuffer3, "R%d", currentRegister++);

            addQuadruple(DIV, tempBuffer1, tempBuffer2, tempBuffer3);
            instructionsConsidered++;
        }
#line 2431 "y.tab.c"
    break;

  case 72: /* maths_expr: maths_expr M_OP_MOD maths_expr  */
#line 623 "yacc_file.y"
                                                        {
            if ((yyvsp[-2].fValue) == GLOBAL_STRING || (yyvsp[0].fValue) == GLOBAL_STRING)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            (yyval.fValue) = (int) (yyvsp[-2].fValue) % (int) (yyvsp[0].fValue);
        }
#line 2441 "y.tab.c"
    break;

  case 73: /* maths_expr: maths_expr M_OP_POWER maths_expr  */
#line 628 "yacc_file.y"
                                                            {
            int answer = 1;
            for (int i = 0; i < (yyvsp[0].fValue); i++)
                answer *= (yyvsp[-2].fValue);
            (yyval.fValue) = answer;
        }
#line 2452 "y.tab.c"
    break;

  case 74: /* maths_expr: return_value  */
#line 634 "yacc_file.y"
                       {
            if ((yyvsp[0].fValue) == ERROR_UNDECLARED)
                handleError(ERROR_UNDECLARED, -1, "");
            else if ((yyvsp[0].fValue) == ERROR_UNINITIALIZED)
                handleError(ERROR_UNINITIALIZED, -1, "");
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
#line 2496 "y.tab.c"
    break;

  case 75: /* maths_expr: OPENING_BRACKET maths_expr CLOSING_BRACKET  */
#line 673 "yacc_file.y"
                                                     {
            (yyval.fValue) = (yyvsp[-1].fValue);
        }
#line 2504 "y.tab.c"
    break;

  case 76: /* return_value: IDENTIFIER  */
#line 678 "yacc_file.y"
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
#line 2525 "y.tab.c"
    break;

  case 77: /* return_value: STRING  */
#line 694 "yacc_file.y"
                 {
            // Return the global string indicator
            globalString = strdup((yyvsp[0].cValue));
            globalCertainString = true;
            (yyval.fValue) = GLOBAL_STRING;
        }
#line 2536 "y.tab.c"
    break;

  case 78: /* return_value: number  */
#line 700 "yacc_file.y"
                 {
            // Return the global number indicator
            globalNumber = (yyvsp[0].fValue);
            (yyval.fValue) = GLOBAL_NUMBER;

            // Store the number into a register
            char tempBuffer[3];
            sprintf(tempBuffer, "R%d", currentRegister++);

            char tempBuffer2[5];
            sprintf(tempBuffer2, "%.2f", globalNumber);
            addQuadruple(MOV, tempBuffer, tempBuffer2, "");
        }
#line 2554 "y.tab.c"
    break;

  case 79: /* return_value: function_call  */
#line 713 "yacc_file.y"
                        {
            // Return the symbol index for the function
            (yyval.fValue) = (yyvsp[0].iValue);
        }
#line 2563 "y.tab.c"
    break;

  case 80: /* number: INTEGER_NUMBER  */
#line 719 "yacc_file.y"
                       {
            (yyval.fValue) = (int) (yyvsp[0].iValue);
        }
#line 2571 "y.tab.c"
    break;

  case 81: /* number: FLOAT_NUMBER  */
#line 722 "yacc_file.y"
                       {
            (yyval.fValue) = (yyvsp[0].fValue);
        }
#line 2579 "y.tab.c"
    break;

  case 82: /* logical_expression: logical_expression L_OP_AND logical_expression2  */
#line 727 "yacc_file.y"
                                                        {
            // In case the function is of type void
            if ((yyvsp[-2].fValue) == GLOBAL_VOID || (yyvsp[0].fValue) == GLOBAL_VOID)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            // Indicate uncertainty if exists
            else if ((yyvsp[-2].fValue) == GLOBAL_UNCERTAIN || (yyvsp[0].fValue) == GLOBAL_UNCERTAIN)
                (yyval.fValue) = GLOBAL_UNCERTAIN;
            else
                (yyval.fValue) = (yyvsp[-2].fValue) && (yyvsp[0].fValue);

            // AND Operation
            char tempBuffer1[3];
            sprintf(tempBuffer1, "R%d", currentRegister - 2);

            char tempBuffer2[3];
            sprintf(tempBuffer2, "R%d", currentRegister - 1);

            char tempBuffer3[3];
            sprintf(tempBuffer3, "R%d", currentRegister++);

            addQuadruple(AND, tempBuffer1, tempBuffer2, tempBuffer3);
        }
#line 2606 "y.tab.c"
    break;

  case 83: /* logical_expression: logical_expression L_OP_OR logical_expression2  */
#line 749 "yacc_file.y"
                                                         {
            // In case the function is of type void
            if ((yyvsp[-2].fValue) == GLOBAL_VOID || (yyvsp[0].fValue) == GLOBAL_VOID)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            // Indicate uncertainty if exists
            else if ((yyvsp[-2].fValue) == GLOBAL_UNCERTAIN || (yyvsp[0].fValue) == GLOBAL_UNCERTAIN)
                (yyval.fValue) = GLOBAL_UNCERTAIN;
            else
                (yyval.fValue) = (yyvsp[-2].fValue) || (yyvsp[0].fValue);

            // OR Operation
            char tempBuffer1[3];
            sprintf(tempBuffer1, "R%d", currentRegister - 2);

            char tempBuffer2[3];
            sprintf(tempBuffer2, "R%d", currentRegister - 1);

            char tempBuffer3[3];
            sprintf(tempBuffer3, "R%d", currentRegister++);

            addQuadruple(OR, tempBuffer1, tempBuffer2, tempBuffer3);
        }
#line 2633 "y.tab.c"
    break;

  case 84: /* logical_expression: logical_expression2  */
#line 771 "yacc_file.y"
                              {
            (yyval.fValue) = (yyvsp[0].fValue);
        }
#line 2641 "y.tab.c"
    break;

  case 85: /* logical_expression2: L_OP_NOT logical_expression2  */
#line 777 "yacc_file.y"
                                     {
            // In case the function is of type void
            if ((yyvsp[0].fValue) == GLOBAL_VOID)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            // Indicate uncertainty if exists
            else if ((yyvsp[0].fValue) == GLOBAL_UNCERTAIN)
                (yyval.fValue) = GLOBAL_UNCERTAIN;
            else
                (yyval.fValue) = !(yyvsp[0].fValue);
            
            // NOT Operation
            char tempBuffer1[3];
            sprintf(tempBuffer1, "R%d", currentRegister - 1);

            addQuadruple(NOT, tempBuffer1, tempBuffer1, "");
        }
#line 2662 "y.tab.c"
    break;

  case 86: /* logical_expression2: L_OP_NOT return_value  */
#line 793 "yacc_file.y"
                                {
            // In case the function is of type void
            if ((yyvsp[0].fValue) == GLOBAL_VOID)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            // Indicate uncertainty if exists
            else if ((yyvsp[0].fValue) == GLOBAL_UNCERTAIN)
                (yyval.fValue) = GLOBAL_UNCERTAIN;
            else {
                // Parse the value in case of not being a string
                int symbolIndex = (yyvsp[0].fValue);
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
        }
#line 2694 "y.tab.c"
    break;

  case 87: /* logical_expression2: L_OP_EXACT return_value  */
#line 820 "yacc_file.y"
                                  {
            // In case the function is of type void
            if ((yyvsp[0].fValue) == GLOBAL_VOID)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            // Indicate uncertainty if exists
            else if ((yyvsp[0].fValue) == GLOBAL_UNCERTAIN)
                (yyval.fValue) = GLOBAL_UNCERTAIN;
            else {
                // Parse the value in case of not being a string
                int symbolIndex = (yyvsp[0].fValue);
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
        }
#line 2738 "y.tab.c"
    break;

  case 88: /* logical_expression2: TRUE  */
#line 859 "yacc_file.y"
               {
            (yyval.fValue) = true;
            // Put 1 into register
            char tempBuffer1[3];
            sprintf(tempBuffer1, "R%d", currentRegister++);

            addQuadruple(MOV, tempBuffer1, "1", "");
        }
#line 2751 "y.tab.c"
    break;

  case 89: /* logical_expression2: FALSE  */
#line 867 "yacc_file.y"
                {
            (yyval.fValue) = false;
            // Put 0 into register
            char tempBuffer1[3];
            sprintf(tempBuffer1, "R%d", currentRegister++);

            addQuadruple(MOV, tempBuffer1, "0", "");
        }
#line 2764 "y.tab.c"
    break;

  case 90: /* logical_expression2: comparison_expression  */
#line 875 "yacc_file.y"
                                {
            (yyval.fValue) = (yyvsp[0].iValue);
        }
#line 2772 "y.tab.c"
    break;

  case 91: /* logical_expression2: OPENING_BRACKET logical_expression CLOSING_BRACKET  */
#line 878 "yacc_file.y"
                                                             {
            (yyval.fValue) = (yyvsp[-1].fValue);
        }
#line 2780 "y.tab.c"
    break;

  case 92: /* comparison_expression: return_value OP_EQUAL return_value  */
#line 883 "yacc_file.y"
                                           {
            if ((yyvsp[-2].fValue) == GLOBAL_STRING || (yyvsp[0].fValue) == GLOBAL_STRING)
                handleError(ERROR_TYPE_MISMATCH, -1, "");

            // In case the function is of type void
            else if ((yyvsp[-2].fValue) == GLOBAL_VOID || (yyvsp[0].fValue) == GLOBAL_VOID)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            // Indicate uncertainty if exists
            else if ((yyvsp[-2].fValue) == GLOBAL_UNCERTAIN || (yyvsp[0].fValue) == GLOBAL_UNCERTAIN)
                (yyval.iValue) = GLOBAL_UNCERTAIN;
            else {
                // Send the two incoming values for parsing and the comparator
                int result = processComparator((yyvsp[-2].fValue), (yyvsp[0].fValue), EQ_OP);

                if (result == TWO_NUMBERS_COMPARISON)
                    handleError(ERROR_UNKNOWN, -1, "");
                
                // Return the output of the comparison
                (yyval.iValue) = result;
                
                // Compare the return values
                char tempBuffer1[8];
                if ((yyvsp[-2].fValue) == GLOBAL_NUMBER)
                    sprintf(tempBuffer1, "%.2f", globalNumber);
                else
                    sprintf(tempBuffer1, "%s", symbolTable[(int)(yyvsp[-2].fValue)].name);

                char tempBuffer2[8];
                if ((yyvsp[0].fValue) == GLOBAL_NUMBER)
                    sprintf(tempBuffer2, "%.2f", globalNumber);
                else
                    sprintf(tempBuffer2, "%s", symbolTable[(int)(yyvsp[0].fValue)].name);

                addQuadruple(CMPEQ, tempBuffer1, tempBuffer2, "");
            }
        }
#line 2821 "y.tab.c"
    break;

  case 93: /* comparison_expression: return_value OP_NOT_EQUAL return_value  */
#line 919 "yacc_file.y"
                                                 {
            if ((yyvsp[-2].fValue) == GLOBAL_STRING || (yyvsp[0].fValue) == GLOBAL_STRING)
                handleError(ERROR_TYPE_MISMATCH, -1, "");

            // In case the function is of type void
            else if ((yyvsp[-2].fValue) == GLOBAL_VOID || (yyvsp[0].fValue) == GLOBAL_VOID)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            // Indicate uncertainty if exists
            else if ((yyvsp[-2].fValue) == GLOBAL_UNCERTAIN || (yyvsp[0].fValue) == GLOBAL_UNCERTAIN)
                (yyval.iValue) = GLOBAL_UNCERTAIN;
            else {
                // Send the two incoming values for parsing and the comparator
                int result = processComparator((yyvsp[-2].fValue), (yyvsp[0].fValue), NEQ_OP);

                if (result == TWO_NUMBERS_COMPARISON)
                    handleError(ERROR_UNKNOWN, -1, "");
                
                // Return the output of the comparison
                (yyval.iValue) = result;

                // Compare the return values
                char tempBuffer1[8];
                if ((yyvsp[-2].fValue) == GLOBAL_NUMBER)
                    sprintf(tempBuffer1, "%.2f", globalNumber);
                else
                    sprintf(tempBuffer1, "%s", symbolTable[(int)(yyvsp[-2].fValue)].name);

                char tempBuffer2[8];
                if ((yyvsp[0].fValue) == GLOBAL_NUMBER)
                    sprintf(tempBuffer2, "%.2f", globalNumber);
                else
                    sprintf(tempBuffer2, "%s", symbolTable[(int)(yyvsp[0].fValue)].name);

                addQuadruple(CMPNEQ, tempBuffer1, tempBuffer2, "");
            }
        }
#line 2862 "y.tab.c"
    break;

  case 94: /* comparison_expression: return_value OP_LESS return_value  */
#line 955 "yacc_file.y"
                                            {
            if ((yyvsp[-2].fValue) == GLOBAL_STRING || (yyvsp[0].fValue) == GLOBAL_STRING)
                handleError(ERROR_TYPE_MISMATCH, -1, "");

            // In case the function is of type void
            else if ((yyvsp[-2].fValue) == GLOBAL_VOID || (yyvsp[0].fValue) == GLOBAL_VOID)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            // Indicate uncertainty if exists
            else if ((yyvsp[-2].fValue) == GLOBAL_UNCERTAIN || (yyvsp[0].fValue) == GLOBAL_UNCERTAIN)
                (yyval.iValue) = GLOBAL_UNCERTAIN;
            else {
                // Send the two incoming values for parsing and the comparator
                int result = processComparator((yyvsp[-2].fValue), (yyvsp[0].fValue), LS_OP);

                if (result == TWO_NUMBERS_COMPARISON)
                    handleError(ERROR_UNKNOWN, -1, "");
                
                // Return the output of the comparison
                (yyval.iValue) = result;

                // Compare the return values
                char tempBuffer1[8];
                if ((yyvsp[-2].fValue) == GLOBAL_NUMBER)
                    sprintf(tempBuffer1, "%.2f", globalNumber);
                else
                    sprintf(tempBuffer1, "%s", symbolTable[(int)(yyvsp[-2].fValue)].name);

                char tempBuffer2[8];
                if ((yyvsp[0].fValue) == GLOBAL_NUMBER)
                    sprintf(tempBuffer2, "%.2f", globalNumber);
                else
                    sprintf(tempBuffer2, "%s", symbolTable[(int)(yyvsp[0].fValue)].name);

                addQuadruple(CMPLT, tempBuffer1, tempBuffer2, "");
            }
        }
#line 2903 "y.tab.c"
    break;

  case 95: /* comparison_expression: return_value OP_LESS_EQUAL return_value  */
#line 991 "yacc_file.y"
                                                  {
            if ((yyvsp[-2].fValue) == GLOBAL_STRING || (yyvsp[0].fValue) == GLOBAL_STRING)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            
            // In case the function is of type void
            else if ((yyvsp[-2].fValue) == GLOBAL_VOID || (yyvsp[0].fValue) == GLOBAL_VOID)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            // Indicate uncertainty if exists
            else if ((yyvsp[-2].fValue) == GLOBAL_UNCERTAIN || (yyvsp[0].fValue) == GLOBAL_UNCERTAIN)
                (yyval.iValue) = GLOBAL_UNCERTAIN;
            else {
                // Send the two incoming values for parsing and the comparator
                int result = processComparator((yyvsp[-2].fValue), (yyvsp[0].fValue), LSE_OP);

                if (result == TWO_NUMBERS_COMPARISON)
                    handleError(ERROR_UNKNOWN, -1, "");
                
                // Return the output of the comparison
                (yyval.iValue) = result;

                // Compare the return values
                char tempBuffer1[8];
                if ((yyvsp[-2].fValue) == GLOBAL_NUMBER)
                    sprintf(tempBuffer1, "%.2f", globalNumber);
                else
                    sprintf(tempBuffer1, "%s", symbolTable[(int)(yyvsp[-2].fValue)].name);

                char tempBuffer2[8];
                if ((yyvsp[0].fValue) == GLOBAL_NUMBER)
                    sprintf(tempBuffer2, "%.2f", globalNumber);
                else
                    sprintf(tempBuffer2, "%s", symbolTable[(int)(yyvsp[0].fValue)].name);

                addQuadruple(CMPLE, tempBuffer1, tempBuffer2, "");
            }
        }
#line 2944 "y.tab.c"
    break;

  case 96: /* comparison_expression: return_value OP_GREATER return_value  */
#line 1027 "yacc_file.y"
                                               {
            if ((yyvsp[-2].fValue) == GLOBAL_STRING || (yyvsp[0].fValue) == GLOBAL_STRING)
                handleError(ERROR_TYPE_MISMATCH, -1, "");

            // In case the function is of type void
            else if ((yyvsp[-2].fValue) == GLOBAL_VOID || (yyvsp[0].fValue) == GLOBAL_VOID)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            // Indicate uncertainty if exists
            else if ((yyvsp[-2].fValue) == GLOBAL_UNCERTAIN || (yyvsp[0].fValue) == GLOBAL_UNCERTAIN)
                (yyval.iValue) = GLOBAL_UNCERTAIN;
            else {
                // Send the two incoming values for parsing and the comparator
                int result = processComparator((yyvsp[-2].fValue), (yyvsp[0].fValue), GR_OP);

                if (result == TWO_NUMBERS_COMPARISON)
                    handleError(ERROR_UNKNOWN, -1, "");
                
                // Return the output of the comparison
                (yyval.iValue) = result;

                // Compare the return values
                char tempBuffer1[8];
                if ((yyvsp[-2].fValue) == GLOBAL_NUMBER)
                    sprintf(tempBuffer1, "%.2f", globalNumber);
                else
                    sprintf(tempBuffer1, "%s", symbolTable[(int)(yyvsp[-2].fValue)].name);

                char tempBuffer2[8];
                if ((yyvsp[0].fValue) == GLOBAL_NUMBER)
                    sprintf(tempBuffer2, "%.2f", globalNumber);
                else
                    sprintf(tempBuffer2, "%s", symbolTable[(int)(yyvsp[0].fValue)].name);

                addQuadruple(CMPGT, tempBuffer1, tempBuffer2, "");
            }
        }
#line 2985 "y.tab.c"
    break;

  case 97: /* comparison_expression: return_value OP_GREATER_EQUAL return_value  */
#line 1063 "yacc_file.y"
                                                     {
            if ((yyvsp[-2].fValue) == GLOBAL_STRING || (yyvsp[0].fValue) == GLOBAL_STRING)
                handleError(ERROR_TYPE_MISMATCH, -1, "");

            // In case the function is of type void
            else if ((yyvsp[-2].fValue) == GLOBAL_VOID || (yyvsp[0].fValue) == GLOBAL_VOID)
                handleError(ERROR_TYPE_MISMATCH, -1, "");
            // Indicate uncertainty if exists
            else if ((yyvsp[-2].fValue) == GLOBAL_UNCERTAIN || (yyvsp[0].fValue) == GLOBAL_UNCERTAIN)
                (yyval.iValue) = GLOBAL_UNCERTAIN;
            else {
                // Send the two incoming values for parsing and the comparator
                int result = processComparator((yyvsp[-2].fValue), (yyvsp[0].fValue), GRE_OP);

                if (result == TWO_NUMBERS_COMPARISON)
                    handleError(ERROR_UNKNOWN, -1, "");
                
                // Return the output of the comparison
                (yyval.iValue) = result;

                // Compare the return values
                char tempBuffer1[8];
                if ((yyvsp[-2].fValue) == GLOBAL_NUMBER)
                    sprintf(tempBuffer1, "%.2f", globalNumber);
                else
                    sprintf(tempBuffer1, "%s", symbolTable[(int)(yyvsp[-2].fValue)].name);

                char tempBuffer2[8];
                if ((yyvsp[0].fValue) == GLOBAL_NUMBER)
                    sprintf(tempBuffer2, "%.2f", globalNumber);
                else
                    sprintf(tempBuffer2, "%s", symbolTable[(int)(yyvsp[0].fValue)].name);

                addQuadruple(CMPGE, tempBuffer1, tempBuffer2, "");
            }
        }
#line 3026 "y.tab.c"
    break;


#line 3030 "y.tab.c"

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

#line 1100 "yacc_file.y"


  
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
