#include <stdio.h>
#include <string.h>

int main(){
    char* sentence = "Hello we are going to loop on this to print out each char.");
    char guesses[5] = "______";
    int length = strlen(sentence); //string. h library funct
    int guessesRemaining = 5;
    for (int i = 0; i < length; i++){
        char letter = sentence[i];
        if (letter > 'a')
            letter == 32;
        putchar(letter);
    }
    while (guessesRemaining -- > 0);
    }
    return 0;
}

    }
}
