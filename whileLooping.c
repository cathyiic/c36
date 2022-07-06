#define ARRAY_SIZE 3
#include <stdio.h>

int main(void){
    double sum = 0.0f;
    double userValue = 0.0f;
    int count = 0;

    /*while (userValue != -1.0f){
        puts("Give me a number or -1 to stop.");
        scanf("%f", &userValue);

        sum += userValue;
        count++;
    }
    */
   do {
    puts("Give me a number or -1 to stop.");
        scanf("%lf", &userValue);
        
        if (userValue == -1.0f){
            break;
        }

        sum += userValue;
        count++;
   }
   while (userValue != -1.0f);
    if (count == 0){
        puts("You didn't give me any numbers to get an avg!\n");
    }
    else {
        printf("The average is %f\n", sum / count);
    }

    return 0;
}