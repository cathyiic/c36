#include <stdio.h>


struct card{
    char suit;
    int value;
};


int main(){
    struct card card = { (char)3, 1}; //initialization list
    printf("%d of %c", card.value, card.suit);

    struct card* pointer = &card;
    printf("%d of %c", pointer->value, pointer->suit);
    //another syntax if you dont use arrows
    printf("%d of %c", (*pointer).value, (*pointer).suit);

    struct card copy = card;
    copy.suit = (char)4;
    printf("%d of %c\n", copy.value, copy.suit);
    printf("%d of %c\n", copy.value, copy.suit);

    //just like 
    int x = 4;
    int y = x;
    x = 5;
    //y is still 4

    return 0;
}