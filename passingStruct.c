#include <stdio.h>

struct card{
    char suit;
    int face;
};

void passingAStructByACopy(struct card theCard){
    printf("%d of %c\n", theCard.face, theCard.suit);
    theCard.face = 2; //this does not stick
    printf("%d of %c\n", theCard.face, theCard.suit);
}

void loadACard(struct card* theCard){
    puts("Whats the face? (1-13");
    scanf("%d", theCard->face);
    //need ampersand to get the address of where the face is

    printf("what suit (1-4)");
    scanf("%d", &theCard->suit);
    theCard->suit +=4;
}

void printCard(struct card theCard){
    printf("%d of %c\n", theCard.face, theCard.suit);
}

int main(){
    struct card playingCard = { (char)3, 1};
    passingAStructByACopy(playingCard);
    printf("%d of %c\n", playingCard.face, playingCard.suit);

    loadACard(&playingCard);
    printCard(playingCard);

    return 0;
}
