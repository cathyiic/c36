#include <stdio.h>

int main(){
    //bubble sort
    int numbers[5] = {5, 2, 4, 3, 1};
    printf("Your numbers are: ");
    for (int i = 0; i <5; i++){
        printf("%d ", numbers[i]);
    }

    //linear search
    int searchFor = -1;
    puts("Search for what?");
    scanf("%d", &searchFor);
    
    for (int i = 0; i < 5; i++){
        if (numbers[i] == searchFor){
            printf("Found %d at index %d\n", searchFor, i);
        }

    }

    //bubble sort 
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 4; j++){
            if (numbers[j] > numbers[j + 1]){
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    printf("Your numbers are: ");
    for (int i = 0; i < 5; i++){
        printf("%d ", numbers[i]);
    }

    //binary search 
    int leftEnd = 0;
    int rightEnd = 4;
    while (leftEnd <= rightEnd){
        int middle = (leftEnd + rightEnd ) / 2;
        if (numbers[middle] == searchFor){
            printf("Found %d at index %d\n", searchFor, middle);
            break;
        }
        else if (numbers[middle] < searchFor){
            leftEnd = middle + 1;
        }
        else 
            rightEnd = middle - 1;
    }

    return 0;
}