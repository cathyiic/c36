#include <stdio.h>

int printHello(){
    puts("Give me a number : ");
    int number;
    scanf("%d", &number);
    return number;
}

int main(){
    puts("Program Start");

    printHello();

    puts("Program middle");
    
    printHello();

    puts("Program end.");
    
    return 0;
}