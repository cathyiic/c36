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

int main(void){
    char name[5][50];
    double rate[10];
    double hours[10];
    double pay[10];
    double grossPay[10];
    double taxes[10];
    double netAmount[10];
    int count = 0;


    for (int i = 0 ; i < 6; i++){
        printf("Please enter your name : ");
        scanf("%s", &name[i]);
        //if user enters -1, break (for all entered fields)
        if (name[i][0] = '-' && name[i][1] == '1'){
            break;
        }

        printf("Please enter your hourly rate : ");
        scanf("%lf", &rate[i]);
        if (rate[i] == -1){
            break;
        }

        printf("Please enter the hours you work in a week : ");
        scanf("%lf", &hours[i]);
        if (hours[i] == -1){
            break;
        }

        if (hours > 40){
            grossPay[i] = (40 * rate[i]) + (hours[i] - 40) * rate[i] * 1.5;
        }
        else {
            grossPay[i] = hours[i] * rate[i];
        }

        taxes[i] = grossPay[i] * 0.2;
        netAmount[i] = grossPay[i] - taxes[i];
        count++;

    }

    for (int i = 0; i < count; i++){
        printf("Pay to : %s\n", name[i]); 
        printf("The hourly rate is : $%lf\n", rate[i]);
        printf("The number of hours worked is : %lf\n", hours[i]);
        printf("The weekly gross pay is : $%lf\n", grossPay[i]);
        printf("The taxes withehld is : $%lf\n", taxes[i]);
        printf("The net paid, amount of the check issued is : $%lf\n", netAmount[i]);
    }

    return 0;
}

//sample input and output (used example from professor)
/*Name: Glenn
Rate: 2.00
Hours: 50

Name: Yelan 
Rate: 40 
Hours: -1

Output: Pay to: Glenn
Hours worked: 50.0
Hourly rate: $2
Gross pay: $110.00
Taxes witheld: $22.00
Net paid amount:$88.00

Does not print anything for Yelan because loop breaks bc of -1 input
*/