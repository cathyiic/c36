/* define a char variable
* ask the user for a char 
* switch on the char
* if the char is a vowel, print 'vowel,' if it is the y character 
* then print sometimes, otherwise print consonant
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    char letter;
    printf("Please enter a char : ");
    scanf("%c", &letter);

    switch(letter){
        case 'a':
            printf("Vowel\n");
            break;
        case 'e':
            printf("Vowel\n");
            break;
        case 'i':
            printf("Vowel\n");
            break;
        case '0':
            printf("Vowel\n");
            break;
        case 'u':
            printf("Vowel\n");
            break;
        case 'A':
            printf("Vowel\n");
            break;
        case 'E':
            printf("Vowel\n");
            break;
        case 'I':
            printf("Vowel\n");
            break;
        case 'O':
            printf("Vowel\n");
            break;
        case 'U':
            printf("Vowel\n");
            break;
        case 'Y':
            printf("Sometimes\n");
            break;
        case 'y':
            printf("Sometimes\n");
            break;
        default:
            printf("Consonant\n");
            break;
        
    }
    return 0;
}