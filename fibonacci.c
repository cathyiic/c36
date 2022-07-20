#include <stdio.h>
#include <string.h>

//1, 1, 2, 3 5, 8, 13...
int fibonacci(int position){
    if (position <= 0){
        return 0;
    }

    if (position <= 2){
        return 1;
    }

    int older = 1, old = 1;
    int current;

    for (int i = 3; i < position; i++){
        current = older + old;
        older = old;
        old = current;
    }
    return current;
}

int main(){
    for (int i = 0; i < 10; i++){
        printf("The fib of %i is %i\n", i, fibonacci(i));
    }
    
    return 0;
}