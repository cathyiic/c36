#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    double lhs = 0, rhs = 0;

    puts("Welcome to our calculator!");

    puts("What is the left hand side operator? ");
    scanf("%lf", &lhs);

    puts("What is the rifht hand side operator? ");
    scanf("%lf", &rhs);

    puts("What operator? ");

    char operation = 'x';
    scanf(" %c", &operation); 
    //scanf("%c", &operation); this version will read a \n (new line) bc it's
    //still in the buffer

    printf("%lf %c %lf = ", lhs, operation, rhs);

    switch(operation){
        case '+':
            printf("%lf\n", lhs + rhs);
            break;
        case '-':
            printf("%lf\n", lhs - rhs);
            break;
        case '*':
            printf("%lf\n", lhs * rhs);
            break;
        case '/':
            printf("%lf\n", lhs / rhs);
            break;
        /*case '%':
            printf("%d\n", lhs % rhs);
            break;
            */
    }
    puts("switch operation completed. brought to u by 'break'");
    return 0;
}