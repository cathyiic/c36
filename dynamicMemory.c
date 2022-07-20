#include <stdio.h>
#include <stdlib.h>
//for some reason memory addy dont like running on my macbook

int returnAddressofLocalVariable(int x){
    int y = x;
    printf("Location of y is %p\n", &y);
    return &y; //not so good
}

int dynamicallyAllocated(int x){
    int* allocated = malloc(sizeof(int)); //allocate memory as needed
    *allocated = x;

    printf("allocated address %p, and value %p and value at %d\n", &allocated, allocated, *allocated);

    return allocated;
}

int main(){

    int x = 5;
    int* pointer = returnAddressofLocalVariable(x);
    printf("Value of pointer %p, value at pointer %d\n", pointer, *pointer);
    printf("Value of pointer %p, value at pointer %d\n", pointer, *pointer);

    pointer = dynamicallyAllocated(x);
    printf("Value of pointer %p, value at pointer %d\n", pointer, *pointer);
    printf("Value of pointer %p, value at pointer %d\n", pointer, *pointer);
}