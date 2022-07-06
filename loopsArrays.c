#include <stdio.h>

int main(void){

    int numbers[3];
    int a, b, c;

    for (int i = 0; i < 3; i++){
        numbers[i] = i;
    }

    for (int i = 0; i < 3; i++){
        printf("The number is %d\n", numbers[i]);
    }

    //show where things are floating around in memory
    a = 2;
    b = 4;
    c = 6;

    printf("The address of a is %p\n", a);
    printf("The address of b is %p\n", b);
    printf("The address of b is %p\n", c);

    printf("The array is %p\n", numbers);

    for (int i = 0; i < 3; i++){
        printf("TThe array element %d is %p\n", numbers[i], &numbers[i])
    }
    return 0;
}