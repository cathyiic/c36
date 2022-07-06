/* Create a function that returns an int and takes an int parameter.
* Inside the function,
* Create an integer variable.
* Print "Guess the number"
* Load the user's guess into your variable.
* If the user's guess is less than the paramter, return -1.
* If the user's guess is greater than the paramter, return 1.
* If the guess is the same, return 0.
* Call your function from main, print the result.
*/
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int guess(int rando){
    int num;
    printf("Guess the number : ");
    scanf("%d", &num);
    if (num < rando){
        return -1;
    }
    else if (num > rando){
        return 1;
    }
    else if (num == rando){
        return 0;
    }
    return 2;
}

int main(){
    int ret;
    int a = 2;
    ret = guess(a);
    printf("Here is the result : %d\n", ret);
}
