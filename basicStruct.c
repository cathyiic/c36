/*
Define a structure that has the following fields:
3 floats to represent use input.
1 float to represent the average.

In Main:
Create a struct variable.
Populate the 3 user entered fields.
Calculate the average of those 3 and store them in the 
average field of your struct.
*/
#include <stdio.h>

struct calculateAvg{
    float mori;
    float mori1;
    float mori2;

    float avg;
};

int main(){
    struct calculateAvg cow;

    printf("Enter the first number : ");
    scanf("%f", &cow.mori);
    
    printf("Enter the second number : ");
    scanf("%f", &cow.mori1);

    printf("Enter the third number : ");
    scanf("%f", &cow.mori2);

    float avg = (cow.mori + cow.mori1 + cow.mori2) / 3;

    printf("The average of the three fields is %f\n", avg);


    return 0;
}