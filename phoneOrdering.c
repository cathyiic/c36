#include <stdio.h>
/*
Order room service by phone.
Ask what meal of the day they want (b, l, d)
Ask them to choose an item from that corresponding menu
Ask them to choose a beverage
Ask if they want condiments
*/
int mainMenu(){
    int choice = 0;

    do{
        puts("What meal list do you want?");
        puts("1. Breakfast");
        puts("2. Lunch");
        puts("3. Dinner");
        puts("4. Exit");
        scanf("%d", &choice);
    }
    while (choice <= 0 || choice > 4);

}
int breakFastMenu(){
    
}

int main(){
    puts("Program start");
    int choice = mainMenu();
    switch(choice){
        choice = 0;
        case 1: //breakfast 
        do{
        puts("Which food item do you want?");
        puts("1. Ham and eggs");
        puts("2. Pancakes");
        puts("3. Waffles");
        puts("4. Cereal");
        puts("5. Nothing");
        }
        while (choice <= 0 || choice > 5);
        break;
        case 2: //lunch 
        break;
        case 3: //dinner
        break;
        default: //exit
        puts("Goodbye");
        break;
    }
    return 0;
    }
