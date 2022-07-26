#include <stdio.h>

/*int returnInt(int x){
    int num;
    puts("Please enter how many players");
    scanf("%d", &num);
    return num;
}

int main(){
    int count = 0;
    printf("Here is how many players is in count %d\n", returnInt(count));
}
*/

int maximumInd(int[] arry, int count){
    int maxInd;
    int max = arry[0];
    if (count < 1){
        return 0;
    }
    for (int i = 0; i < count; i++){
        if(arry[i] > max){
            maxInd = i;
            max = arry[i];
        }
    }
    return maxInd;
}

int main(){
    int arry[5] = {1,2,3,4};
    printf("Here is result %d\n", maximumInd(arry[5]));
}

