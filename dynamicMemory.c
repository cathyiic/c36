#include <stdio.h>
#include <stdlib.h>

int returnAddressofLocalVariable(int x){
    int y = x;
    return &y; //not so good
}

int main(){
    int x = 5;
    int* pointer = returnAddressofLocalVariable(x);
    printf("%d\n")

    return 0;
}