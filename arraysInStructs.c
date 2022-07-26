#include <stdio.h>

typedef struct grade{
    char studentName[25];
    int quizzes[5];
}GRADES;

/* 
typedef struct PayRoll{
    char name[5][25];
    char rates[5]; 
    char hours[5];
}DONTDO */

/*
typedef struct Accounting{
    char name[25];
    float hours;
    float rate;
}ACCT;
should do something like this instead
*/
void printStudent(GRADES student){
    printf("%s has the following quiz scores ", student.studentName);
    for (int i = 0; i < 5; i++){
        printf("%d ", student.quizzes[i]);
    }
    puts("");
}

void resetStudentQuizzes(GRADES student){
    for (int i = 0; i < 5; i++){
        student.quizzes[i] = 0; //copy manipulation here
    }
}

void trulyResetQuizScores(GRADES* student){
    for (int i = 0; i < 5; i++){
        student->quizzes[i] = 0; //dereference the pointer to the variable in main
    }
}

int main(){
    GRADES bob = {"Bob", 1, 2, 3, 4, 5 };
    printStudent(bob);
    resetStudentQuizzes(bob);
    printStudent(bob);
    trulyResetQuizScores(&bob); //resets the array to 0 0 0 0 0
    printStudent(bob);

    return 0;
}