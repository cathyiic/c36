/* Create a function 
* return type: char
* parameters: int*, int*
* Inside the function, ask for two integers. Set the user responses to the 
* int* parameters.
* prompt the user for a character
* get their response as a single character and return that from the function 
*
* in main
* -define 3 variables and call your function 
* - print values of your variables
*/


#include <stdio.h>

char loading(int* num1, int* num2){
    int x;
    printf("Please enter an integer: \n");
    scanf("%d", &x);
    *num1 = x;

    int y;
    printf("Please enter another integer: \n");
    scanf("%d", &y);
    *num2 = y;

    char letter;
    printf("Please enter a character: \n");
    scanf("%s", &letter);

    return letter;


}

int main(){
    int first;
    int second;
    char load = loading(&first, &second);

    printf("Here is the first number : %d\n", first); //print the value of the variables
    printf("Here is the second number : %d\n", second);
    printf("Here is the character: %c\n", load);
}