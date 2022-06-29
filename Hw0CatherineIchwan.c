/* 1. write a program that prints out your name, then course ID of this class
* what programming and computer courses you have taken
* 2. ask the user for 2 numbers
* 3. load the user numbers into variables
* 4. show the sum of the two numbers, the difference, the product, and quotient
* - for the difference subtract the second num from the first
* - for the quotient, use the first num as the numerator (dividend) and the second num
* as the denominator(divisor)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(){

    printf("Hi! My name is Catherine Ichwan. I am in course CS 36 - 60000.");
    printf("\nI have taken these programming courses:\nJava\nPython\nUnix(does this count?)\n"); 

    int num1, num2;
    printf("Please enter a number: ");
    scanf("%d", &num1);
    printf("Please enter another number: ");
    scanf("%d", &num2);
    

    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    int quotient = num1 / num2;
    

    printf("The sum is %d\n", sum);
    printf("The difference is %d\n", difference);
    printf("The product is %d\n", product);
    printf("The quotient is %d\n", quotient);
    
    return 0;
}