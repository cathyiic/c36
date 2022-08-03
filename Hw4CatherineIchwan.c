#include <stdio.h>
//Program 4 Assignment

//struct implemented
struct employee{
    char name[5][20]; 
    float hours[20];
    float rate[20];
    float grossPay[20];
    float taxes[20];
    float ot[20];
    float netPay[20];
    float grossPay2[20];
    float grossPay3[20];
    float totalPay;
};

//load function 
void load(struct employee addition, int count){
    puts("Please enter your name : ");
    scanf("%s", addition.name[count], 20);
    if (addition.name[count][0] == '-' && addition.name[count][1] == '1'){
        return;
    }

    puts("Please enter your hourly rate : ");
    scanf("%f", &addition.name[count]);
    if (addition.hours[count] == -1){
        return;
    }

    puts("Please enter total hours worked : ");
    scanf("%f", &addition.name[count]);
    if (addition.rate[count == -1]){
        return;
    }
}

//menu portion of the program 
void menu(struct employee addition){
    puts("Please choose one of the following options\n");
    puts("1. Update existing record.\n");
    puts("2. Print a single record.\n");
    puts("3. Print all records.\n");
    puts("4. Exit.\n");

    int option;
    scanf("%d", &option);

    if (option == 1){
        puts("Who do you want to edit?\n");
        for (int i = 0; i < 5; i++){
            printf("%d: %s\n", i + 1, addition.name[i]);
        }

        int option1;
        scanf("%d", &option1);

        switch(option1){
            case 1:
                edit(addition, 0);
                break;
            case 2:
                edit(addition, 1);
                break;
            case 3:
                edit(addition, 2);
                break;
            case 4: 
                edit(addition, 3);
                break;
            case 5:
                edit(addition, 4);
                break;
        }
    }

    if (option == 2){
        printInf(addition);
    }

    if (option == 3){
        for (int i = 0; i < 5; i++){
            showInf(addition, i);
        }
    }
    if (option == 4){
        return; 
    }

}

void printInf(struct employee addition){
    int nameChoice;
    puts("Who do you want to print?\n");

    printf("1. %s\n", addition.name[0]);
    printf("2. %s\n", addition.name[1]);
    printf("3. %s\n", addition.name[2]);
    printf("4. %s\n", addition.name[3]);
    printf("5. %s\n", addition.name[4]);

    scanf("%d", &nameChoice);
    switch (nameChoice){
        case 1:
            showInf(addition, 0);
            break;
        case 2:
            showInf(addition, 1);
            break;
        case 3:
            showInf(addition, 2);
            break;
        case 4:
            showInf(addition, 3);
            break;
        case 5:
            showInf(addition, 4);
            break;
    }
}

void calculate(struct employee addition, int count){
    if (addition.hours[count] > 40){
        addition.grossPay[count] = addition.hours[count] * addition.rate[count];
        addition.grossPay2[count] = 40 * addition.rate[count];
        addition.ot[count] = (addition.hours[count] - (40 * addition.rate[count] * 1.5));
        addition.grossPay3[count] = addition.grossPay2[count] + addition.ot[count];
        addition.totalPay += addition.grossPay3[count];
    }
    else{
        addition.grossPay[count] = addition.hours[count] * addition.rate[count];
        addition.grossPay2[count] = addition.grossPay[count];
        addition.ot[count] = 0;
        addition.grossPay3[count] = addition.grossPay[count] + addition.ot[count];
        addition.totalPay += addition.grossPay[count];
    }
}

float taxInf(struct employee addition, int count){
    float moreTax;

    if (*addition.hours > 40){
        moreTax = addition.grossPay3[count] * .2;
    }
    else{
        moreTax = addition.grossPay[count] * .2;
    }

    return moreTax;
}

int showInf(struct employee addition, int count){
    printf("Pay to: %s\n", addition.name[count]);
    printf("Hours that were worked : %f\n", addition.hours[count]);
    printf("Hourly rate is : %f\n", addition.rate[count]);

    if(*addition.hours > 40){
        printf("Gross Pay : $%f\n", addition.grossPay3[count]);
        printf("Base Pay : $%f\n", addition.grossPay2[count]);
        printf("Overtime Pay : $%f\n", addition.ot[count]);
        printf("Tax paid : $%f\n", addition.taxes[count]);
        printf("Net pay : $%f\n", addition.grossPay3[count]);
    }
    else{
        printf("Gross Pay : $%f\n", addition.grossPay[count]);
        printf("Base Pay : $%f\n", addition.grossPay[count]);
        printf("No overtime pay.\n");
        printf("Taxes paid : $%f\n", addition.taxes[count]);
        printf("Net pay : $%f\n", addition.grossPay[count] - addition.taxes[count]);
    }

    printf("Total amount paid to all employees = $%f\n", addition.totalPay);
    menu(addition);
}

int edit(struct employee addition, int count){
    int option;
    puts("What do you want to change\n");
    puts("1. Name\n");
    puts("2. Hours worked\n");
    puts("3. Hourly rate\n");

    scanf("%d", &option);

    if (option == 1){
        char newName[20];
        puts("Please type the new name you want: ");
        scanf("%s", newName);
        *addition.name[count] = *newName;
    }
    if (option == 2){
        float newHours;
        puts("Please type the new hours worked: ");
        scanf("%f", &newHours);
        addition.hours[count] = newHours;
    }
    if (option == 3){
        float newRate;
        puts("Please type the new hourly rate: ");
        scanf("%f", &newRate);
        addition.rate[count] = newRate;
    }
    menu(addition);
}


int main(){
    struct employee addition;
    int count = 0;

    for (int i = 0; i < 5; i++){
        load(addition, i);
        if (addition.name[i][0] == '-' && addition.name[i][1] == '1'){
            break;
        }
        if (addition.rate[i] == -1){
            break;
        }
        if (addition.hours[count] == -1){
            break;
        }
        count ++;
        }

    for (int k = 0; k < count; k++){
        calculate(addition, k);
        addition.taxes[k] = taxInf(addition, k);
    }

    menu(addition);

    return 0;
}