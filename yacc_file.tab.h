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
#line 48 "yacc_file.y"

    struct symbolItem *sValue;

    int sIndex;
    char * sName;

    float fValue;
    int iValue;
    char * cValue;

#line 180 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
