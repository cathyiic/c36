#include <stdio.h>


int function(); //function protoype
int function1(int x);
int function2(int);

int main(){
    function();
    notPrototype();
    function1(1);
    function2(2);
    return 0;
}

int function(){
    puts("function");
}

int notPrototype(){
    puts("not");
}
int function1(int x){
    puts("fun1");
    if (x)
        function2(x - 1);
}

int function2(int x){
    puts("funner");
    if (x)
        function1(x - 1);
}

int function1(int x);
int function2(int x);
