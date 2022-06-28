//define a float variable, read a float value from ketboard into variable
//print the variables value
#include <stdio.h>

int main(){
    float num;

    printf("Enter in a float value: ");
    scanf("%f", &num);

    printf("Here is the float value that you have entered: %f\n", num);
    return 0;
}