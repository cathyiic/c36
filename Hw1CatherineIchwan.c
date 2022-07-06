/* 1. Write a program that reads in the first name, hourly rate and 
* number of hours worked for 5 people.
* 2. Print the following details for each employee.
*   1.-Name of employee
*   2.-The number of hours worked
*   3.-Their weekly gross pay
*       1.-This is calculated by multiplying hours worked times hourly rate.
*         1.-If hours worked per week is greater than 40, then overtime needs to also be included.
*              1.-Overtime pay is calculated as the number of hours worked beyond 40 * rate * 1.5
* 4. Taxes withheld
*   1.-Our tax system is simple, the government gets 20% of the gross pay.
* 5. Net paid
*   1.-The amount of the check issued to the employee.
*/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(){
    int count = 0;
    char name[50];
    double rate;
    double hours;
    double pay;
    double grossPay;

    do{
        printf("Please enter your name : ");
        scanf("%s", name);

        printf("Please enter your hourly rate : ");
        scanf("%lf", &rate);

        printf("Please enter the hours you work in a week : ");
        scanf("%lf", &hours);

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
        count += 1;
    }
    while (count < 5);

    return 0;
}

