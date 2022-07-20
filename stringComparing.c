#include <stdio.h>
#include <string.h>

int compareString(char first[], char second[], int length){
    int areEqual = 1;
    for (int i = 0; i < 10; i++){
        if (first[i] != second[i]){
            areEqual = 0;
            printf("%c is different from %c\n", first[i], second[i]);
            return areEqual;
        }
    }
    return areEqual;
}
int main(){
    char firstString[10] = "hello";
    char secondString[10] = "hello";

    if (firstString == secondString){
        puts("Those are the same memory address, which they aren't, so you will not see this");
    }
    if (compareString(firstString, secondString, 10)){
        puts("They are the same character sequence");
    }

    firstString[0] = 'H';
    if (compareString(firstString, secondString, 10)){
        puts("They are the same character sequence");
    }

    int result =strcmp(firstString, secondString);
    result = strcmp(secondString, firstString);

    firstString[0] = 'h';
    result = strcmp(secondString, firstString);

    
    return 0;
}