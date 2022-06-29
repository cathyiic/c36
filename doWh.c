/*
* Define two integer variables.
* Ask the user for a value.
* Inside a do-while loop.
* Print out the first value.
* Ask for another value.
* Loop again if the second value is larger than the first.
*/
# include <stdio.h>

int main(){
    int num1, num2;

    do{
    printf("Please enter a value : ");
    scanf("%d", &num1);
    printf("This is the first value %d.\n", num1);

    printf("Please enter a second value : ");
    scanf("%d", &num2);
    }
    while (num2 > num1);

    printf("Your second value is NOT larger than the first value, so the loop ends :)\n");

    return 0;
}