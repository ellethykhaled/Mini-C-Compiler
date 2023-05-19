#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

/* Quadruples definitions section */
#define MAX_QUADRUPLE_COUNT 2000

int quadrupleCount = 0;

int currentRegister = 0;

FILE* quadruplesFile;

// Main operations
#define LOAD "LOAD"
#define STR "STR"
#define MOV "MOV"

#define JMP "JMP"
#define CJMP "CJMP"

#define PUSH "PUSH"
#define POP "POP"

#define ADD "ADD"
#define SUB "SUB"
#define MUL "MUL"
#define DIV "DIV"
#define SUB "SUB"

// Data structure for quadruples
struct Quadruple {
    char* op;
    char* operand1;
    char* operand2;
    char* result;
} quadruples[MAX_QUADRUPLE_COUNT];

void addQuadruple(char* op, char* op1, char* op2, char* res);

void resetRegisters();

void printQuadruples();

void destroyQuadruples();