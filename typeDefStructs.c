#include <stdio.h>

typedef struct card{ //allows to create an alias - typedef
//no longer have to type struct card everywhere
    char suit;
    int face;
}CARD;

//ex
typedef int Integer;

void loadACard(CARD* theCard){
    printf("What's the face? (1-13)");
    scanf("%d", &theCard->face);

    printf("What suit? (1-4)");
    scanf("%d", &theCard->suit);
    theCard->suit += 2;

}

void printCard(CARD theCard){
    printf("%d of %c\n", theCard.face, theCard.suit);
}

int main(){
    CARD playingCard;
    loadACard(&playingCard);
    printCard(playingCard);

    return 0;
}


