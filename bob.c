#include <stdio.h>

int main(){
    /*
    *Jump statements
    *Break
    *Return
    *Continue
    *Goto - one of the jump statements basically lol
    */

int i = 0;
bob: 
    puts("Hello");

    if (++i < 10)
        goto bob;

    //the only legitmate place a goto should be used is in a switch 

    switch(i){
        case 10:
            puts("whatever");
            break;
        case 11:
            //goto 10;
    }

    return 0;
}