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
#define _CRT_SECURE_NO_WARNINGS


int loading(int* num1, int* num2){
    printf("Please enter an integer: ");
    scanf("%d", &num1);

    printf("Please enter another integer: ");
    scanf("%d", &num2);

    char letter;
    printf("Please enter a character: ");
    scanf("%c", &letter);


}

int main(){
    int* num1, num2; //defining the vars again
    char letter;
    loading(); //call the function

    printf("Here is the first number : %d", num1); //print the value of the variables
    printf(""); 
    printf("");
    return 0;
}