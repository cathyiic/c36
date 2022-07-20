#include <stdio.h>

int stackFrame(int x){
    printf("x is %p\n", &x);
    int y = 2 * x;
    return 3 * x;
}

int main(){
    int localForAddress = stackFrame;
    printf("local is %p\n", &localForAddress);

    localForAddress = stackFrame(5);
    int values[25];

    int* pointer = &localForAddress;

    for (int i = 0; i < 25; i++){
        values[i] = *pointer;
        pointer++;
    }
    
    return 0;
}