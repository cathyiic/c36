#include <stdio.h>

int getNumber(){
    puts("Give me a number : ");
    int number;
    scanf("%d", &number);
    return number;
}

//takes the two user inputs, if statement to see which number is 
//bigger between the two by using the getNumber() method/function above
int main(){
    puts("Program Start");

    int first = getNumber();
    int second = getNumber();

    if (first < second){
        puts("first is smaller"); 
    }
    else {
        puts("second is smaller");
    }
    
    return 0;
}