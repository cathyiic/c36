#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int x = 4;
    int y = 5;
    x = y > x ? 3 : 4;
    printf("%d", x);
}