#include "header.h"

void addQuadruple(char* op, char* op1, char* op2, char* res) {
    if (quadrupleCount >= MAX_QUADRUPLE_COUNT) {
        printf("Exceeded maximum number of quadruples.\n");
        exit(1);
    }
    quadruples[quadrupleCount].operator = op;
    quadruples[quadrupleCount].operand1 = op1;
    quadruples[quadrupleCount].operand2 = op2;
    quadruples[quadrupleCount].result = res;
    quadrupleCount++;
}