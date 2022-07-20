#include <stdio.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
//
//k = lower bound 
//m = upper bound 
void permutate(int list[], int k, int m){
    int i;
    if (k == m){
        for (i = 0; i <= m; i++){
            printf("%d", list[i]);
        puts("");
        }
    }
    else{
        for (i = k; i <= m; i++){
            swap(&list[k], &list[i]);
            permutate(list, k + 1, m);
            swap(&list[k], &list[i]);
        
    }
    }
}

int main(){
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    permutate(numbers, 0, 9);

    return 0;
}