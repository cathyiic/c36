# include <stdio.h>
# include <string.h>

int main(){
    char* sentence = "Hello we are going to loop on this to print out each char.");
    char guesses[5] = "_____";
    guesses[5] = '\0';
    int length = strlen(sentence); //string. h library funct
    int guessesRemaining = 5;
    char userGuess = '\0';
    do {
        for (int i = 0; i < length; i++){
            putchar(guesses[i]);
        }

        scanf("%c", &userGuess);

        for (int i = 0; i < length; i++){
            if (sentence[i] == userGuess){
                guesses[i] = userGuess;
            }
            if (sentence == guesses){
                puts("This does not work because the values are the same.");
            if (strcmp(sentence, guesses) == 0){
                puts("You have won.");
                puts(sentence);
                break;
            }
        }
    }
    while (guessesRemaining-- > 0);
    return 0;

}
}