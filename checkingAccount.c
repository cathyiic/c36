#include <stdio.h>
// checking account program 
//deposit function was never written for this
int mainMenu(){
    puts("Choose a menu option.");
    puts("1. Open Account");
    puts("2. Withdrawal");
    puts("3. Write a check");
    puts("4. Deposit");
    puts("5. Log out");

    int option;
    scanf("%d", &option);

    return option;
}

float openAccount(){
    puts("How much are you opening your account with?");
    float amount;
    scanf("%f", &amount);
    return amount;
}
float withdrawal(float balance){
    puts("How much do you want to withdraw?");
    float amount;
    scanf("%f", &amount);
    if (amount > balance){
        puts("Insuffient funds.");
        return balance;
    }
    return balance - amount;
}
void writeCheck(float* balance){
    puts("Who is the check for?");
    char name[20];
    scanf("%s", name);
    puts("How much is the check for?");
    float amount;
    scanf("%f", &amount);

    *balance -= amount;

    printf("Pay to %s the amount of $%0.2f\n", name, amount);
}

int main(){
    int choice;
    float accountBalance = 0;
    do{
        choice = mainMenu();
        switch (choice){
            case 1:
                accountBalance = openAccount();
                printf("Thanks for opening an account for $%0.2f\n", accountBalance);
                break;
            case 2:
                accountBalance = withdrawal(accountBalance);
                printf("Your new balance $%0.2f\n", accountBalance);
                break;
            case 3:
                writeCheck(&accountBalance);
                printf("Your new balance $%0.2f\n", accountBalance);
                break;
            case 4:
                break;
        }
    } while (choice < 5);
}

