#include <stdio.h>

int main(){
    int someNumberThatIsAValueType = 22;
    int* pointsToSomeNumber = &someNumberThatIsAValueType;

    printf("Mem address of our variables. The int %x, the pointer %x", 
            &someNumberThatIsAValueType, &pointsToSomeNumber);

    printf("Our value is in the int %d, the value in the int via the pointer %d\n",
            someNumberThatIsAValueType, *pointsToSomeNumber);



    int arrrayOfInts[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int* pointsToArrayOfInts = arrrayOfInts;

    for (int i =0; i < 10; i++){
        printf("Element value via [] is %d\n", arrrayOfInts[i]);
        printf("Element value via [] is %d\n", pointsToArrayOfInts);
        pointsToSomeNumber++;
    }

    return 0;
}