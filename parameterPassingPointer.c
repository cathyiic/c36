#include <stdio.h>

int takesAnInteger(int* parameter){
    printf("Give me a number bigger than: %d\n", *parameter);
    int number;
    scanf("%d", &number);

    *parameter = number;

    return number;
}

void resetNumberViaPointer(int* pointer){
    //dereference to get the location of memory that has 
    //the integer
    *pointer = 0;

}

int main(){
    puts("Program Start");
    int firstValue = 12;
    takesAnInteger(&firstValue);

    int* pointer = &firstValue;
    resetNumberViaPointer(pointer);

    return 0;
}