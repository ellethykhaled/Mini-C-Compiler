/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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
    OPENING_BRACES = 287,          /* OPENING_BRACES  */
    FOR = 288,                     /* FOR  */
    WHILE = 289,                   /* WHILE  */
    REPEAT = 290,                  /* REPEAT  */
    RETURN = 291,                  /* RETURN  */
    ENUM = 292,                    /* ENUM  */
    COMMA = 293,                   /* COMMA  */
    THEN = 294,                    /* THEN  */
    DEFAULT = 295,                 /* DEFAULT  */
    FUNCTION = 296,                /* FUNCTION  */
    CALL = 297,                    /* CALL  */
    VOID_TYPE = 298,               /* VOID_TYPE  */
    IDENTIFIER = 299,              /* IDENTIFIER  */
    INTEGER_NUMBER = 300,          /* INTEGER_NUMBER  */
    IF = 301,                      /* IF  */
    SWITCH = 302,                  /* SWITCH  */
    CASE = 303,                    /* CASE  */
    ELSE = 304,                    /* ELSE  */
    CLOSING_BRACES = 305,          /* CLOSING_BRACES  */
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
#define OPENING_BRACES 287
#define FOR 288
#define WHILE 289
#define REPEAT 290
#define RETURN 291
#define ENUM 292
#define COMMA 293
#define THEN 294
#define DEFAULT 295
#define FUNCTION 296
#define CALL 297
#define VOID_TYPE 298
#define IDENTIFIER 299
#define INTEGER_NUMBER 300
#define IF 301
#define SWITCH 302
#define CASE 303
#define ELSE 304
#define CLOSING_BRACES 305
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

#line 182 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
