#include <stdio.h>

int takesAnInteger(int parameter){
    printf("Give me a number bigger than: %d\n", parameter);
    int number;
    scanf("%d", &number);
    return number;
}

int main(){
    puts("Program start.");
    
    int first = takesAnInteger(0);
    int second = takesAnInteger(first);

    if (first < second){
        puts("first is smaller");
    }
    else{
        puts("second is smaller");
    }
    return 0;
    }
