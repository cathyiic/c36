#include <stdio.h>
//
//Recursion

//bad bad use to of recursion
int fibonacci(int position){
    if (position <= 0)
    return 0;

    if (position <= 2) //base case -> stop making recursive calls
    return 1;

    //production rule(s) position - 2 and position -1, causes us to move
    //towards the base case
    return fibonacci(position - 2) + fibonacci(position - 1);
    //above we have the actual recursive calls
}

int summation(int position){
    if (position <= 0) //base case
        return 0;
    return summation(position - 1) + position;

}

int nonRecursiveSum(int position){
    if (position <= 0) //base case
        return 0;
    int total = 1;
    for (int i = 0; i < position; i++){
        total +=i;
    }
    return total;
}

//
//k = lower bound 
//m = upper bound 
void permutate(int list[], int k, int m){
    int i;
    if (k == m){
        for (i = 0; i <=m; i++){
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
    for (int i = 0; i < 10; i++){
        printf("Fib of %d is %d\n", i, fibonacci(i));
    }
    for (int i = 0; i < 10; i++){
        printf("Sum of %d is %d\n", i, summation(i));
        printf("Sum of %d is %d\n", i, nonRecursiveSum(i));
    }

    return 0;
}

/* Output: 
Fib of 0 is 0
Fib of 1 is 1
Fib of 2 is 1
Fib of 3 is 2
Fib of 4 is 3
Fib of 5 is 5
Fib of 6 is 8
Fib of 7 is 13
Fib of 8 is 21
Fib of 9 is 34
*/