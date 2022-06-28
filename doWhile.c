# include <stdio.h>

int main(){
    do{
        puts("in the body of the do while.");
    } 
    while (0);

    //the test is false we dont enter body of loop
    while (0){
        puts("in the body of the while");
    }
    for (int i=0; i <3; i++){
        puts("hello");
    }
    //Init:
    //type name = value
    //type name = value, name = value
    //same structure as a variable declaration statement
    //
    //conditional is a 0 or non zero expression 
    //
    //inc dec
    //i++; ==i, i--, i+=2
    for (
        /*initialization of variables*/ ; 
        /*conditional expression*/ ; 
        /*inc / dec*/)
        break;
    int x=0;
    for (;;)
    printf("%d", x++);
    return 0;
    }