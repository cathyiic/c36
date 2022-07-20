#include <stdio.h>
#include <string.h>

int stringLength(char* string){
    int length = 0;
    while (*string != '\0'){
        length++;
        string++;
    }
    return length;
}

int stringLength2(char string[]){
    int length = 0;
    while (string[length] != '\0'){
        length++;
        string++;
    }
    return length;
}

int stringLength3(char string[]){
    int length = 0;
    while (string[length] != '\0'){
        length++;
        string++;
    }
    return length;
}

int main(){
    char word1[10] = "hello";
    char word2[10] = "bye";
    char* cString = word1;

    printf("The length of %s is %d\n", word1, stringLength(word1));
    printf("The length of %s is %d\n", word2, stringLength(word2));
    printf("The length of %s is %d\n", cString, stringLength(cString));

    printf("The length of %s is %d %d %d\n", word1,stringLength(word1), stringLength2(word1), stringLength3(word1), strlen(word1));

    return 0;
}