#include <stdio.h>

int takesAnInteger(int parameter){
    printf("Give me a number bigger than: %d\n", parameter);
    int number;
    scanf("%d", &number);
    return number;
}

int main(){
    puts("Program Start");

    int second = takesAnInteger(takesAnInteger(0));
    return 0;
}