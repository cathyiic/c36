#include <stdio.h>
//finding the average of arrays

float average(float numbers[][5], int rowCount){
    int count = 0;
    float total = 0;
    for (int row = 0; row < rowCount; row++){
        for (int col = 0; col < 5; col++){
            total += numbers[row][col];
            count++;
        }
    }
    return total / count;
}
float averageViaPointer(float* numbers, int count){
    float total = 0;
    for (int i = 0; i < count; i++){
        total += *numbers;
        numbers++;

    }
    return total / count;
}
int main(){
    float numbers[2][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float result = average(numbers, 2);
    printf("%f %f\n", result, averageViaPointer(numbers, 10));

    float numbers2[4][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    float result = average(numbers2, 4);
    printf("%f\n", result);
}