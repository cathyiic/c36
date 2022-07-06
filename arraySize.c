#define ARRAY_SIZE 3

int main(void){

    int numbers[ARRAY_SIZE] = {5, 8, 9};
    float sum = 0.0f;

    for (int i =0; i < ARRAY_SIZE; i++){
        sum += numbers[i];
    }
    
    printf("The average of the numbers is %f\n", sum / ARRAY_SIZE)

    return 0;
}