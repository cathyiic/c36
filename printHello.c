# include <stdio.h>

void printHello(){
    puts("Hello");
}

int main(){
    puts("Program Start");

    printHello();

    puts("Program middle");
    
    printHello();

    puts("Program end.");
    
    return 0;
}