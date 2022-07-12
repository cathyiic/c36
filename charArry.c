#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(){
    char firstName[10];

    puts("Name?");
    scanf("%s", firstName);
    //read until we find whitespace
    puts(firstName);
    //if the name were billy bob we would only see billy

    int a, b, c;
    int result = scanf("%d%d%d", &a, &b, &c);
    //result will match number of variables loaded or 0 if none

    puts("Enter full name ");
    char fullName[80];
    gets(fullName);
    puts(fullName);
    

    return 0;
}