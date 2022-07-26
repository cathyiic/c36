/* Program 3
* Adjust Program 2 to make use of functions.
* All the same rules from the previous program specifications still apply, 
* for example input gathering, output formatting and breaking on -1 still apply.
*
* Additional requirements:
* 1. Write a function that prompts the user for hours worked, rate and name. Use parameter passing, and pass by reference.
* 2. Write a function that calculates the gross, base and overtime pay, pass by reference.
* 3. Write a function that calculates tax, taking as input the gross pay, returning the tax owed.
* 4. Calculate the total amount paid (gross pay) for all 5 people. Use the return value from the function that calculates the gross pay.
* 5. Write a print function that generates the output, including the total amount paid, in addition to the data for each employee.
*/
#include <stdio.h>

//here are some function prototypes
int grossPay(double hours[], double grossPay[], double pay[], double hoursOt[], double ot[], double baseHours[], double basePay[]);
int totalPay(double totalPay[], double grossPay[]);
int printInf(char name[][20], double pay[], double hours[], double grossPay[], double basePay[], double ot[], double taxes[], double netPay[], double totalPay[]);
int taxes(double grossPay[]);
int userInf(char name[][20], double pay[], double hours[]);

//declarations in main
int main(){
    char name[5][20]; 
    double hours[20];
    double pay[20];
    double grossPay[20];
    double taxes[20];
    double hoursOt[20];
    double ot[20];
    double netPay[20];
    double basePay[20];
    double baseHours[20];
    double netmoney[20];
    double totalPay[20];
    
}

//function to get the user's info
int userInf(char name[][20], double pay[], double hours[]){

    int count = 0;
    for (int i = 0; i < 5; i++){

        printf("Please enter your name: ");
        scanf("%s", name[i],20);
        if (name[i][0] == '-' && name[i][1] == '1'){
            break;
        }

        printf("Please your hourly wage: ");
        scanf("%lf", &pay[i]);
        if (pay[i] == -1){

            break;
        }
        
        printf("Please enter the hours you work in a week : ");
        scanf("%lf", &hours[i]);
        if (hours[i] == -1){

            break;
        }

    count++;
}
}

//function to calculate the gross pay
int grossPay(double hours[], double grossPay[], double pay[], double hoursOt[], double ot[], double baseHours[], double basePay[]){

    for (int i = 0; i < 5; i++){

        if (hours[i] <= 40){

            grossPay[i] = pay[i] * hours[i];
        }

        else if (hours[i] > 40){

            hoursOt[i] = hours[i] - 40;
            ot[i] = hoursOt[i] * 1.5 * pay[i];
            grossPay[i] = (40 * pay[i]) + (((hours[i] - 40) * 1.5) * pay[i]);
            baseHours[i] = hours[i] - hoursOt[i];
            basePay[i] = baseHours[i] * pay[i];
        }
    }
}

//function to calculate the taxes   
int taxes(double grossPay[]){

    return grossPay[i] * .8;
}

//function to calculate the total pay
int totalPay(double totalPay[], double grossPay[]){

    for (int i = 0; i < 5; i++){
        totalPay[i] += grossPay[i];
    }
}

//function that prints all of the info out
int printInf(char name[][20], double pay[], double hours[], double grossPay[], double basePay[], double ot[], double taxes[], double netPay[], double totalPay[]){

    for (int i = 0; i < 5; i++){

        printf("Pay to : %s\n", name[i]);
        printf("The hourly rate is : $%lf\n", pay[i]);
        printf("The number of hours worked is :  %lf\n", hours[i]);
        printf("The weekly gross pay is : $ %lf\n", grossPay[i]);
        printf("The weekly base pay is : $%lf\n", basePay[i]);
        printf("The weekly overtime pay is : $%lf\n", ot[i] );
        printf("The taxes withehld is : $%lf\n", taxes[i] );
        printf("The weekly net pay is : $%lf\n", netPay[i] );
        printf("The weeky total pay is : $%lf\n", totalPay[i]);
    }

    
    return 0;
}

//sample input (used the same one given by prof)
/* Enter name: Glenn
Enter hourly rate: 2.00
Enter hours worked: 50

Enter name: -1

Pay to: Glenn
Hours worked: 50.0
Hourly rate: $2.00
Gross pay: $110.00
Base pay: $80.00
Overtime pay: $30.00
Taxes paid: $22.00
Net pay: $88.00
Total Paid to all employees = $110.00
*/
