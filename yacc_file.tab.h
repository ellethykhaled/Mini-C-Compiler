
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
#line 50 "yacc_file.y"

    struct symbolItem *sValue;

    int sIndex;
    char * sName;

    float fValue;
    int iValue;
    char * cValue;



/* Line 1676 of yacc.c  */
#line 117 "yacc_file.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


