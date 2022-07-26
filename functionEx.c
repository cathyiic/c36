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

char menu2(char* array, int count){ //passed a c string
    int isValid = 0;
    char input = 'x';
    do{
        for (int i = 0; i < count; i++){
            printf("%c\n", array[i]);
        }

        puts("Choice : ");
        scanf("% c", &input);

        for (int i = 0; i < count; i++){
            if (input == array[i]){
                isValid = 1;
                break;
            }
        }
    } while (isValid != 'e');
    return input;

}

int smallest(int* array, int count){
    int smallest = array[0];
    for (int i = 1; i < count; i++){
        if (array[i] < smallest){
            smallest = array[i];
        }
    }
    return smallest;
}

int main(){
    /*function1();
    function1();
    function1();

    printf("%d\n", function2());

    putchar(menu1());
    */

    putchar(menu2("abcde", 5));
    int num[5] = { 5, 2, 1, 3, 4};
    printf("%d", smallest(num, 5));
    return 0;
}