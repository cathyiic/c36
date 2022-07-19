//altering the getInput program
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define _CRT_SECURE_NO_WARNINGS

int f(int x){
    int guess;
    printf("guess the number : ");
    scanf("%d", &guess);
    if (guess < x){
        return -1;
    }
    else if (guess > x){
        return 1;
    }
    return 0;
}

int main(){
    srand(unsigned)time(NULL);

    int guessMe = rand() % 100;
    int result = f(guessMe);

    while (result != 0){
        if (result == -1)
            puts("too small");
        else 
            puts("too big");
        result = f(10);
    }
    puts("You guessed it.");
}

//on lecture 7/13 at 9;23
