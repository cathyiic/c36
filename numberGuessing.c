#include <stdio.h>

int main(){
    int hiddenNum = 17;
    int lowerBound = 1;
    int upperBound = 100;
    int userGuess;
    int guessesRemaining = 5;

    printf("Guess a num from %d to %d ", lowerBound, upperBound);
    scanf("%d", &userGuess);

do {
    if (userGuess < hiddenNum){
        lowerBound = userGuess + 1;
    }
    else if (userGuess > hiddenNum){
        upperBound = userGuess - 1;
    }
    else{
        puts("You guessed the number.");
        break;
    }
}
while (guessesRemaining -- > 0)
    puts("You have lost the game, better luck next time.";)


return 0;
}
