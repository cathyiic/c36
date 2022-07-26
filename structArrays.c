#include <stdio.h>

typedef struct card{
    char suit;
    int face;
}CARD;

void buildDeck(CARD* cards){
    for (int suit = 0; suit < 7; suit++){
        for (int face = 0; face <= 13; face++){
            cards->suit = suit;
            cards->face = face;
            cards++;
        }
    }
}

void printDeck(CARD cards[], int count){
    for (int i = 0; i < count; i++){
        printf("%d of %c, ", cards[i].face, cards[i].suit);
    }
}
int main(){
    CARD joker = { 2, 0 };
    CARD playingCards[5] = {{ 4, 3}, { 4, 4}, { 4, 5}, { 4, 6}, { 4, 7}};

    for (int i = 0; i < 5; i++){
        printf("%d of %c\n", playingCards[i].face, playingCards[i].suit);
    }

    CARD deckOfCards[52];
    buildDeck(deckOfCards);
    printDeck(deckOfCards, 52);

    return 0;
}