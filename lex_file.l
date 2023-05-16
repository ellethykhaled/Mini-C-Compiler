%{
    /* Definition section */
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "y.tab.h"
    #include <stdbool.h>

    void extern yyerror(const char*);
    int extern getSymbolIndex(char* s);
    int extern deleteLatestScope();
    int extern lineNumber, scopeLevel;
%}


/* ^(.)*\n                             { printf("%4d\t%s\n", ++lineNumber, yytext); return TESTY_TOKEN; } */
%%

[Cc]onst(ant)?                      return CONSTANT;
[Ii]nt|INT                          return INT_TYPE;
[Ff]loat|FLOAT                      return FLOAT_TYPE;
[Ss]tr(ing)?                        return STRING_TYPE;
[Bb]ool(ean)?                       return BOOLEAN_TYPE;

[Tt]rue|TRUE                        return TRUE;
[Ff]alse|FALSE                      return FALSE;

[Ff]or|FOR                          return FOR;
[Ww]hile|[Uu]ntil|WHILE|UNTIL       return WHILE;
[Rr]epeat|REPEAT|[Dd]o|DO           return REPEAT;

[Ii]f|IF                            return IF;
[Tt]hen|THEN                        return THEN;
[Ee]lse|ELSE                        return ELSE;

[Ss]witch|SWITCH                    return SWITCH;
[Cc]ase|CASE                        return CASE;
[Dd]ef(ault)?|DEF(AULT)?            return DEFAULT;

[Ee]num|ENUM                        return ENUM;
[,]                                 return COMMA;

[Ff]un(c(tion)?)?|FUN(C(TION)?)?    return FUNCTION;
([Cc]all|CALL):                     return CALL;
([Rr]et(urn)?|RET(URN)?)            return RETURN;
[Vv]oid|VOID                        return VOID_TYPE;

[+]                                 return M_OP_PLUS;
[-]                                 return M_OP_MINUS;
[*]                                 return M_OP_MULT;
[/]                                 return M_OP_DIV;
[%]                                 return M_OP_MOD;
\^                                  return M_OP_POWER;

[!]|([Nn](ot)|NOT)                  return L_OP_NOT;
[Ee]x(act)?|EX(ACT)?                return L_OP_EXACT;
[&][&]|([Aa](nd)|AND)               return L_OP_AND;
[|][|]|([Oo][Rr])                   return L_OP_OR;

=                                   return OP_ASSIGN;
==                                  return OP_EQUAL;
!=                                  return OP_NOT_EQUAL;
"<="                                return OP_LESS_EQUAL;
"<"                                 return OP_LESS;
[>]=                                return OP_GREATER_EQUAL;
[>]                                 return OP_GREATER;

[;]                                 return TERMINATOR;

\(                                  scopeLevel++; return OPENING_BRACKET;
\)                                  scopeLevel--; return CLOSING_BRACKET;

\{                                  scopeLevel++; return OPENING_BRACES;
\{\*                                scopeLevel++; return OPENING_BLOCK_BRACES;
\}                                  deleteLatestScope(); scopeLevel--; return CLOSING_BRACES;

\n                                  lineNumber++;
[ \t]+                              /* Ignore whitespace */;

[_a-zA-Z][_a-zA-Z0-9]*              yylval.sName=strdup(yytext); return IDENTIFIER;

[\"][_a-zA-Z0-9]*[\"]               yylval.cValue=strdup(yytext); return STRING;

-?[0-9]+                            yylval.iValue=atoi(yytext); return INTEGER_NUMBER;
-?[0-9]*\.[0-9]+([eE][+-]?[0-9]+)?  yylval.fValue=atof(yytext); return FLOAT_NUMBER;

%%

int yywrap(void) {
    return 1;
}

void yyerror(const char *str)
{
    fprintf(stderr, "%s\nLine: %d\n", str, lineNumber);
    
    exit(0);
}