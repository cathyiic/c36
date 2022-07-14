#include <stdio.h>

void takesACharAndaNumber(char x, int number){
    printf("Your letter %c\n", x);
    printf("Your number %d\n", number);
}

void takesAFewNumbers(int a, int b, int c){
    a = b = c = 0;
}

int main(){
    puts("Program start");
    int number = 97, number1 = 100, number2 = 200;
    takesAFewNumbers(number, number1, number2);

    printf("%d %d %d\n", number, number1, number2);

    int a = number;
    int b = number1;
    int c = number2;

    a = b = c = 0;
    printf("%d %d %d\n", number, number1, number2);
    
    return 0;
}