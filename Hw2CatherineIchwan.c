/* Payroll 2.0
* Use for loops to process the data for 5 employees.
* One loop to load the data
* One loop to print the output. 
* In for loops, if any of the entered fields are –1, break out of the loop immediately after getting -1
* Update the output as shown in the sample data.
* Use arrays to store the user input. 
*/

/*
* Used code from Hw1CatherineIchwan.c to write this program
*/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(){
    int i; //variable for the for loop
    char name[50];
    double rate;
    double hours;
    double pay;
    double grossPay;

    for (i = 0 ; i < 6; i++){
        printf("Please enter your name : ");
        scanf("%s", name);
        //if user enters -1, break (for all entered fields)
        if (name == -1){
            break;
        }

        printf("Please enter your hourly rate : ");
        scanf("%lf", &rate);
        if (rate == -1){
            break;
        }

        printf("Please enter the hours you work in a week : ");
        scanf("%lf", &hours);
        if (hours == -1){
            break;
        }

        if (hours > 40){
            grossPay = (40 * rate) + (hours - 40) * rate * 1.5;
        }
        else {
            grossPay = hours * rate;
        }

        double taxes = grossPay * 0.2;
        double netAmount = grossPay - taxes;

        printf("Pay to : %s\n", name);
        printf("The hourly rate is : $%lf\n", rate);
        printf("The number of hours worked is : $%lf\n", hours);
        printf("The weekly gross pay is : $%lf\n", grossPay);
        printf("The taxes withehld is : $%lf\n", taxes);
        printf("The net paid, amount of the check issued is : $%lf\n", netAmount);
    }


    return 0;
}