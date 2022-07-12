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
/* Sample Output (Just took Professor's examples)
Pay to : Glenn
The hourly rate is : $4.000000
The number of hours worked is : $20.000000
The weekly gross pay is : $80.000000
The taxes withehld is : $16.000000
The net paid, amount of the check issued is : $64.000000

Pay to : Stephanie
The hourly rate is : $49.750000
The number of hours worked is : $60.500000
The weekly gross pay is : $3519.812500
The taxes withehld is : $703.962500
The net paid, amount of the check issued is : $2815.850000

Pay to : Lumine
The hourly rate is : $2.000000
The number of hours worked is : $50.000000
The weekly gross pay is : $110.000000
The taxes withehld is : $22.000000
The net paid, amount of the check issued is : $88.000000

Pay to : Hutao
The hourly rate is : $50.000000
The number of hours worked is : $20.000000
The weekly gross pay is : $1000.000000
The taxes withehld is : $200.000000
The net paid, amount of the check issued is : $800.000000

The hourly rate is : $100200.000000
The number of hours worked is : $30.000000
The weekly gross pay is : $3006000.000000
The taxes withehld is : $601200.000000
The net paid, amount of the check issued is : $2404800.000000

-end of the loop since five users have already been looped
*/

