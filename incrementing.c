#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int expressionResult = 0;

    //increment operator ++
    expressionResult++;

    int postFixResult = expressionResult++;

    expressionResult++;

    int preFixResult = ++expressionResult;

    return 0;
}