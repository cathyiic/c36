#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int number;
    int i;

    printf("Please pick a number : ");
    scanf("%d", &number);
    for (i = 1; i <= number; ++i){
        printf("%d. Hello.\n", i);
    }
}