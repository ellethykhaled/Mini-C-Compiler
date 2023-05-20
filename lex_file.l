%{
    /* Definition section */
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "yacc_file.tab.h"
    #include <stdbool.h>

    void extern yyerror(const char *str);
    void extern handleError(const int, const int, const char*);
    int extern getSymbolIndex(char* s);
    int extern deleteLatestScope();
    void extern destroySymbolTable();
    void extern destroyQuadruples();
    int extern createLabel();
    void extern addJump();
    void extern addUJump();
    void extern addPush();
    void extern addPop();
    int extern lineNumber, scopeLevel;
    bool extern globalInitializer;
    int extern UNEXPECTED_CHARACTER, ERROR_DECLARED, ERROR_UNDECLARED, ERROR_UNINITIALIZED, ERROR_TYPE_MISMATCH, ERROR_CONSTANT_REASSIGNMENT, TWO_NUMBERS_COMPARISON, ERROR_UNKNOWN, ALWAYS_TRUE_IF, ALWAYS_FALSE_IF, ERROR_MISSING_ARGUMENTS, ERROR_MORE_ARGUMENTS, PARAMETER_TYPE_MISMATCH, ERROR_SYMBOLS_EXCEEDED, ERROR_QUADRUPLES_EXCEEDED, SWITCH_TYPE_MISMATCH;
    extern FILE* symbolTableFile;
%}


%%

[Cc]onst(ant)?                      return CONSTANT;
[Ii]nt|INT                          return INT_TYPE;
[Ff]loat|FLOAT                      return FLOAT_TYPE;
[Ss]tr(ing)?                        return STRING_TYPE;
[Bb]ool(ean)?                       return BOOLEAN_TYPE;

[Tt]rue|TRUE                        return TRUE;
[Ff]alse|FALSE                      return FALSE;

[Ff]or|FOR                          createLabel(); return FOR;
[Ww]hile|[Uu]ntil|WHILE|UNTIL       createLabel(); return WHILE;
[Rr]epeat|REPEAT|[Dd]o|DO           createLabel(); return REPEAT;

[Ii]f|IF                            yylval.iValue=lineNumber; return IF;
[Tt]hen|THEN                        addJump(); return THEN;
[Ee]lse|ELSE                        addJump(); yylval.iValue=createLabel(); return ELSE;

[Ss]witch|SWITCH                    yylval.iValue=lineNumber; return SWITCH;
[Cc]ase|CASE                        createLabel(); yylval.iValue=lineNumber; return CASE;
[Dd]ef(ault)?|DEF(AULT)?            createLabel(); return DEFAULT;

[Ee]num|ENUM                        return ENUM;
[,]                                 return COMMA;

[Ff]un(c(tion)?)?|FUN(C(TION)?)?    createLabel(); globalInitializer = true; return FUNCTION;
([Cc]all|CALL):                     addPush(); return CALL;
([Rr]et(urn)?|RET(URN)?)            addPop(); return RETURN;
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
\)                                  globalInitializer = false; scopeLevel--; return CLOSING_BRACKET;

\{                                  scopeLevel++; return OPENING_BRACES;
\{\*                                scopeLevel++; return OPENING_BLOCK_BRACES;
\}                                  scopeLevel--; deleteLatestScope(); return CLOSING_BRACES;

\n                                  lineNumber++;
[ \t]+                              /* Ignore whitespace */;

[_a-zA-Z][_a-zA-Z0-9]*              yylval.sName=strdup(yytext); return IDENTIFIER;

[\"][_a-zA-Z0-9 ]*[\"]              yylval.cValue=strdup(yytext); return STRING;

-?[0-9]+                            yylval.iValue=atoi(yytext); return INTEGER_NUMBER;
-?[0-9]*\.[0-9]+([eE][+-]?[0-9]+)?  yylval.fValue=atof(yytext); return FLOAT_NUMBER;

%%

int yywrap(void) {
    return 1;
}

void yyerror(const char *str)
{
    printf("Lexical error at line %d\n", lineNumber);
    fprintf(symbolTableFile, "Lexical error at line %d\n", lineNumber);
    destroySymbolTable();
    destroyQuadruples();
}