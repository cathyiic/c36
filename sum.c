#include <stdio.h>
//
//Recursion 

int sum(short b){
    if (b == 0) //base case not paranoid enough
    return 0;

    printf("At %d", (int)b);

    return sum(b - 1) + b;
    // #1 rule about data
    //do not trust it. it may be corrupted, malicious.
}

int main(){

    short number = 5;
    printf("Sum of %d is %d\n", number, sum(number));

    number = -1;
    printf("Sum of %d is %d\n", number, sum(number));
    return 0;
}