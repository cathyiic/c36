#include <stdio.h>

int main(){
    int hourOfTheDay = 0;
    printf("What hour of the day do you want your meal? ");
    scanf("%d", &hourOfTheDay);

    if (hourOfTheDay <0 || hourOfTheDay >= 24){
        printf("Sorry we're closed at that time, good bye!\n");
    }
    else if (hourOfTheDay <= 10){
        printf("We will bring your breakfast at %d, thank you\n", hourOfTheDay);
    }
    else if (hourOfTheDay <=15){
        printf("We will bring your lunch at %d, thank you\n", hourOfTheDay);
    }
    else{
        printf("we will bring your dinner at %d, thank you\n", hourOfTheDay);
    }

    return 0;
}