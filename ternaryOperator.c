#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int x = 5;
    int y = 10;
    int result = x < y ? 1 : 2;
    //(expression) ? (evaluate if true) : (evaluate if false)

    printf("%d\n", result);

    result = x > y ? 1 : 2;
    printf("%d\n", result);

    //the following  can be rewritten
    //result = x > y ? 1 : 2;
    //to

    /* need the if statement here
    */
    return 0;
}