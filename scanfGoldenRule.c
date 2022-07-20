#include <stdio.h>

void scanfwithreferenceparameter(int* loadMe){
    puts("Load what number");
    scanf("%d", loadMe); //no ampersand
}

void brokenLoadManipulatingThePointer(int* loadMe){
    puts("Load what number?");
    scanf("%d", loadMe); 
    //explode on use
}

void avoidTheWrinkesWithTheGoldenRuleUseAMiddleMan(int* byReference){
    int localVar;
    puts("#");
    scanf("%d", &localVar);
    *byReference = localVar;
}

int main(){
    char name[120];
    scanf("%s", name); //not using the addy of operator, because it 
    //does not change the value of what we are sending to scanf
    puts(name);
    
    int loadme;
    scanfwithreferenceparameter(&loadme);
    printf("%d was loaded\n", loadme);

    brokenLoadManipulatingThePointer(&loadme);
    printf("%d was not changed.", loadme);

    avoidTheWrinkesWithTheGoldenRuleUseAMiddleMan(&loadme);
    printf("%d was changed with the middle man", loadme);
}