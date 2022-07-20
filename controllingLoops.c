#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//will keep asking for a number until you
//input a -1
int main(){
    int numbers[10];
    int numbersEntered = 0;

    for (int i = 0; i < 10; numbersEntered++){
        puts("Give me a number : -1 to stop");
        scanf("%d", &numbers[i]);
        if (numbers[i] == -1)
            break;
    }
    for (int i = 0; i < numbersEntered; i++){
        printf("%d ", numbers [i]);
    }

}