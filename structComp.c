#include <stdio.h>

typedef struct address{

    char street1[50];
    char street2[50];
    char city[50];
    char state[3];
}Address;

typedef struct name{
    char first[25];
    char initial;
    char last[25];
}Name;

typedef struct orderDetails{
    int quantity;
    float price;
    char description[100];
}orderDetails;

typedef struct order{
    Name person;
    Address shipToAddress;
    orderDetails orderedItems[10];
}Order;

void loadUserName(Name* name){
    puts("First name");
    scanf("%c", &name->first);
    puts("Initial");
    scanf("%c", &name->initial);
    puts("Last name");
    scanf("%c", &name->last);
}

void printOrder(Order* order){
    printf("Name : %s %c, %s\n:", order->person.first,
        order->person.initial, order->person.last);
        puts("Ships to:");
        printf("%s\n%s\n%s\n%s\n", order->shipToAddress.street1,
            order->shipToAddress.street2, order->shipToAddress.city, order->shipToAddress.state);
        
        puts("Order Details");
        for (int i = 0; i < 10; i++){
            printf("%s, %d @ %f per unit, line total is %f\n",
                order->orderedItems[i].description, order->orderedItems[i].quantity,
                order->orderedItems[i].price, order->orderedItems[i].quantity * order->orderedItems[i].price);
        }
}

int main(){
    Order theOrder = { ""};
    loadUserName(&theOrder.person);
    printOrder(&theOrder);

    return 0;
}




