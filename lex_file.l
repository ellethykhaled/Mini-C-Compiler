%{
    /* Definition section */
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "y.tab.h"

    void extern yyerror(const char*);

    int lineNumber = 0;
%}


/* ^(.)*\n                             { printf("%4d\t%s\n", ++lineNumber, yytext); return TESTY_TOKEN; } */
%%

[Ii]nt                              return INT_TYPE;
[Ff]loat                            return FLOAT_TYPE;
[Ss]tr(ing)?                        return STRING_TYPE;
[Bb]ool(ean)?                       return BOOLEAN_TYPE;

[Tt]rue                             return TRUE;
[Ff]alse                            return FALSE;

[+]                                 return M_OP_PLUS;
[-]                                 return M_OP_MINUS;
[*]                                 return M_OP_MULT;
[/]                                 return M_OP_DIV;
[%]                                 return M_OP_MOD;
\^                                  return M_OP_POWER;

[!]|([Nn](ot)|NOT)                  return L_OP_NOT;
[&][&]|([Aa](nd)|AND)               return L_OP_AND;
[|][|]|([Oo][Rr])                   return L_OP_OR;

=                                   return OP_ASSIGN;
==                                  return OP_EQUAL;
!=                                  return OP_NOT_EQUAL;
[<]=                                return OP_LESS_EQUAL;
[<]                                 return OP_LESS;
[>]=                                return OP_GREATER_EQUAL;
[>]                                 return OP_GREATER;

[;]                                 return TERMINATOR;

\(                                  return OPENING_BRACKET;
\)                                  return CLOSING_BRACKET;

\{                                  return CLOSING_BRACES;
\}                                  return OPENING_BRACES;

\n                                  lineNumber++;
[ \t]+                              /* Ignore whitespace */;

[_a-zA-Z][_a-zA-Z0-9]*              yylval=*yytext; return IDENTIFIER;

[\"][_a-zA-Z0-9]*[\"]               yylval=*yytext; return STRING;

-?[0-9]+                              yylval=atoi(yytext); return INTEGER_NUMBER;
-?[0-9]*\.[0-9]+([eE][+-]?[0-9]+)?    yylval=atof(yytext); return FLOAT_NUMBER;

%%

int yywrap(void) {
    return 1;
}

void yyerror(const char *str)
{
    fprintf(stderr, "%s\nLine: %d\n", str, lineNumber);
    
    exit(0);
}