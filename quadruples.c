#include "quadruples_header.h"

void addQuadruple(char* op, char* op1, char* op2, char* res) {
    if (quadrupleCount >= MAX_QUADRUPLE_COUNT) {
        printf("Exceeded maximum number of quadruples.\n");
        exit(1);
    }
    quadruples[quadrupleCount].op = op;
    quadruples[quadrupleCount].operand1 = strdup(op1);
    quadruples[quadrupleCount].operand2 = strdup(op2);
    quadruples[quadrupleCount].result = strdup(res);
    quadrupleCount++;
}

void resetRegisters() {
    currentRegister = 0;
    instructionsConsidered = 0;
}

void printQuadruples() {
    for (int i = 0; i < quadrupleCount; i++)
    {
        if (quadruples[i].op == MOV || quadruples[i].op == STR || quadruples[i].op == LOAD || quadruples[i].op == CMPEQ || quadruples[i].op == CMPGE || quadruples[i].op == CMPGT || quadruples[i].op == CMPLE || quadruples[i].op == CMPLT || quadruples[i].op == CMPNEQ)
            fprintf(quadruplesFile, "%s %s, %s\n", quadruples[i].op, quadruples[i].operand1, quadruples[i].operand2);
        else
            fprintf(quadruplesFile, "%s %s, %s, %s\n", quadruples[i].op, quadruples[i].operand1, quadruples[i].operand2, quadruples[i].result);
    }
}

void destroyQuadruples() {
    for (int i = 0; i < MAX_QUADRUPLE_COUNT; i++)
    {
        free(quadruples[quadrupleCount].op);
        free(quadruples[quadrupleCount].operand1);
        free(quadruples[quadrupleCount].operand2);
        free(quadruples[quadrupleCount].result);
    }
}