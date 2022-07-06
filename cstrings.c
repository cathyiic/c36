#include <stdio.h>

int main(void){
    char firstName[10] = "bob";
    //am arry is an arry that being a collection of elements,
    //all have same data type
    char lastName[10] = {'s', 'm', 'd', 'f', 'g', 'h'};

    for (int i = 0; i < 10; i++){
        putchar(firstName[i]);
    }

    puts("");
    puts(firstName); //you may find some garbage here
    puts(lastName);
    
    return 0;
}