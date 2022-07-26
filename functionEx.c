#include <stdio.h>
#include <string.h>

//function 1
void function1(void){
    int num1;
    puts("Please enter a number\n");
    scanf("%d", &num1);
    printf("%d\n", num1);
}

//function 2
int function2(void){
    int num2;
    puts("Please enter a number\n");
    scanf("%d", &num2);
    return num2;
}

char menu1(){
    char input = 'x';
    do{
        puts("a) abort");
        puts("b) abort");
        puts("c) abort");
        puts("d) abort");
        puts("e) abort");
        scanf(" %c", &input);
    } while (input < 'e'); 

    return input;

}
int main(){
    function1();
    function1();
    function1();

    printf("%d\n", function2());

    menu1();

    return 0;
}