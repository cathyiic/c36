#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int switchOn = 5; 
    //integral base type 
    switch(switchOn){
        case 1:
        case 2:
            puts("1 or 2");
            break;
        case 3:
        case 4: 
            puts("3 or 4");
            break;
        case 5:
            puts("I didn't want 5 fingers");
            break;
    }
    puts("switch operation completed. brought to you by 'break'.");

    switch(switchOn){
        case 1: case 2: case 3: case 4:
            puts("1 or 2");
            puts("3 or 4");
            break;
        case 5: 
            puts("I didn't want 5 fingers");
            break;
    }
    return 0;

    }
