#include <stdio.h>

int main(){
    char matrix[5][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    for (int row = 0; row < 5; row++){
        for (int col = 0; col < 5; col++)
            printf("[%d, %d] is %d\n", row, col, matrix[row][col]);
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