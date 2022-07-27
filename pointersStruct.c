#include <stdio.h>
#include <string.h>

typedef struct name{
    char* first;
    char initial;
    char* last;
}Name;

void printName(Name* name){
    printf("%s %c %s", name->first, name->initial, name->last);

}

typedef struct bottom{
    int num;
    float floatty;
}Bottom;

typedef struct top{
    Bottom* beg;
    Bottom* end;
}Top;

void printTop(Top* theTopOfTheWorld){
    printf("Top %d %f, bottom %d %f\n",
        theTopOfTheWorld->beg->num, theTopOfTheWorld->beg->floatty,
        theTopOfTheWorld->end->num, theTopOfTheWorld->end->floatty);

}

void resetTop(Top* theTopOfTheWorld){
    theTopOfTheWorld->beg->floatty = 0;
    theTopOfTheWorld->beg->num = 0;
    theTopOfTheWorld->end->floatty = 0;
    theTopOfTheWorld->end->num = 0;

}

void resetCopy(Top theTopOfTheWorld){
    theTopOfTheWorld.beg->floatty = 2;
    theTopOfTheWorld.beg->num = 2;
    theTopOfTheWorld.end->floatty = 2;
    theTopOfTheWorld.end->num = 2;

}

void newCopy(Top theTopOfTheWorld){
    Bottom bot = {5,6};
    theTopOfTheWorld.beg = &bot;
    theTopOfTheWorld.end = &bot;

}

int main(){
    Name bob;
    bob.first = "Bob";
    bob.initial = 'a';
    bob.last = "Smith";

    printName(&bob);

    Bottom alpha = { 1, 2};
    Bottom omega = { 3, 4};

    Top top;
    top.beg = &alpha;
    top.end = &omega;

    printTop(&top);
    resetTop(&top);
    printTop(&top);
    resetCopy(top);
    printTop(&top);
    newCopy(top);
    printTop(&top);

    return 0;
}