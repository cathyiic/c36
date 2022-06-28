#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int expressionResult = 0;
    expressionResult = 5 > 0;

    printf("5 > 0 is %d\n", expressionResult);
    if (expressionResult)
        puts("5 > 0 was true");

    expressionResult = 5 < 0;
    printf("5 < 0 is %d\n", expressionResult);
    if (expressionResult)
        puts("5 < 0 was true");

    // careful with the confusing assignment operatior and the equality operator
    // = assignment
    // == equality

    int testMe = 5;
    if (testMe == 5)
        puts("testMe is equal to 5");

    if (testMe == 2 )
        puts("testMe is equal to 2");
    
    return 0;
}