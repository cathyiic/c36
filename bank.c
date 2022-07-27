#include <stdio.h>
#include <string.h>

void loadOwnerName(char* name){
    printf("Current account owner name is %s\n", name);
    puts("New name: ");
    //while (strcmp(name, ""))
        //gets(name);
    scanf("%s", name);
}

float setOpeningBalance(){
    puts("How much do you want to start the account with?");
    float amount;
    scanf("%f", &amount);
    return amount;
}

float creditAccount(float balance){

}

char GeneralPurposeMenu(char* options, char* prompts[], int count){
    for (int i = 0; i < count; i++){
        printf("%c) %s\n", options[i], prompts[i]);
    }

    char choice, dummy;
    scanf(" %c", &choice, &dummy);
    return choice;

}
int main(){
    //banking are us 
    char accountOwner[50] = "";
    float balance = 0.0f;
    char selection = 0.0f;
    char* generalMenuOptions[4] = 
    {
        "Open Account",
        "Debit Account",
        "Credit Account",
        "Exit"
    };

    do{
        selection = GeneralPurposeMenu("odcx", generalMenuOptions, 4);
        switch(selection){
            case 'o':
                loadOwnerName(accountOwner);
                balance = setOpeningBalance();
                break;
            case 'c':
                balance = creditAccount(balance);
                break;
            case 'd':
                break;
            default:
                puts("Good bye");
                break;
        }
    } while (selection != 'x');

    return 0;
}