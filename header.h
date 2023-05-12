#include <stdio.h>
#include <stdlib.h>

#include <string.h>

struct symbolItem {
    char* type;

    char *name;
    float value;
    char* stringValue;

    bool isFunction;
    bool isConstant;
    bool isInitialized;
};