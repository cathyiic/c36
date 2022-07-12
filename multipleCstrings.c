#include <stdio.h>

int main(){
    char months[5][25] = {"april", "May", "june"};

    for (int row = 0; row < 5; row++){
        printf("[%d] is %s\n", row, months[row]);
    }

    /*
    puts("Memory addresses");
    printf("%x\n", matrix);
    printf("%x\n", matrix[0]);
    printf("%x\n", matrix[1]);
    printf("%x\n", matrix[2]);
    printf("%x\n", &matrix[0][0]);

    */
   return 0;
}