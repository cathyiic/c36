#include <stdio.h>
#include <string.h>

int main(){
    char fileNames[10];
    char fileExten[10];
    char words[10];

    printf("Please enter the name of a text file : ");
    scanf("%s", fileNames);

    strncat(fileNames, fileExten, 10);

    FILE *files;
    files = fopen(fileNames, "w");

    puts("Write the text file & write that on its own line to the text file ");
    puts("Enter 0 to end loop");

    while (strcmp(words, "0") != 0){
        scanf("%s", words);
        fprintf(files, "%s", words);
    }
    fclose(files);
}