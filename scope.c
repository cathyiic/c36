#include <stdio.h>
//lol dont use global variables
//if u do, make sure the variables are named
//differently so no mess up 
int globalScopeThatWeShouldBeAvoiding = 25;

int localScope(){
    int localVariableThatOnlyExistHere = 2;
    printf("Local : %d, Global %d", localVariableThatOnlyExistHere,
        globalScopeThatWeShouldBeAvoiding);
}

int alterGlobal(){
    globalScopeThatWeShouldBeAvoiding = 19;
}

int localParamters(int x){
    //int x = 5; cant have 2 bobs in the same room
    //as we cant differ between the two
    int localVariableThatOnlyExistHere = x;
}

int globalLocalParty(){
    int globalScopeThatWeShouldBeAvoiding= 22;
    printf("Local var with gloval name is %d\n", globalScopeThatWeShouldBeAvoiding);
}

int staticLifeTime(){
    static int localVariable = 2;
    printf("Static is %d\n", localVariable++);
}

//stack addy
int memoryAddress(int parameter){
    int local;
    static int staticLocal;
    printf("%pParameter \n%pLocal \n%p Static \n%p Global \n", &parameter, &local, &staticLocal, &globalScopeThatWeShouldBeAvoiding);
}

void subScopes(){
    for (int i = 0; i < 2; i++){
        int y = i;
        //i and y are in a sub scope
    }
    /* not in scope any more
    i = 5;
    y = 1;
    */
   for (int i = 0; i < 2; i++){
    int y = i;
    //i and y are in a sub scope again
   }
   
   {
    //arbitrary scope
    int x =5;
   }
   // x = 2; not in scope so cant use x
}


int main(){

    localScope();

    printf("Global %d\n", globalScopeThatWeShouldBeAvoiding);
    
    alterGlobal();

    printf("Global %d\n", globalScopeThatWeShouldBeAvoiding);

    int x = 2;

    localParamters(x);

    globalLocalParty();

    for (int i = 0; i < 3; i++){
        staticLifeTime();
    }

    memoryAddress();
}