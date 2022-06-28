#include <stdio.h>

int main(){
    int x = 5;
    printf("x = %d\n", x);

    x += 1;
    printf("x += 1 = %d\n", x);

    x += 3;
    printf("x += 3 = %d\n", x);

    x -= 3;
    printf("x -= 3 = %d\n", x);

    x *= 3;
    printf("x *= 3 = %d\n", x);

    x = 4;
    x *= 5 + 3;
    printf("x *= 5 + 3 = %d\n", x);

    x = 10;
    printf("x *= 5 + 3 = %d\n", x *= 5 + 3);

    int y = 3;
    x = 10;
    x *= y++;
    
    x *= y;
    y++;

    x = x * y;
    y++;

    //print out even numbers from 2 to 10 inclusive 
    for (int i = 0; i <= 10; i+=2){
        printf("%d\n", i);
    }
    return 0;
}