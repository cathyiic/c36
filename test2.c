#include <stdio.h>

//prints the first ten even numbers
/*int main(){
for (int i = 1; i < 11; i++){
    printf("%d\n", 2 * i);
}
}
*/
/*
//Write a program to get a number from a user, 
//if that number is less than 5, keep asking for a number greater than 5.
int main(){
    int num;
    int count = 0;
    
    puts("Enter a number less than 5");
    scanf("%d", &num);
    
    if (num > 5){
        do{
        puts("Enter a number less than 5");
        scanf("%d", &num);
        } while (num >5);
    }
    else{
        return 0;
    }
}
*/

//ask user for a word and num, prints out word num times
/*int main(){
    char word[20];
    int num;
    int count = 0;
    printf("Please enter a word\n");
    scanf(" %s", word);

    printf("Please enter a num\n");
    scanf("%d", &num);

    for (int i = 0; i < num; i += 1){
        printf("%s\n", word);
    }
}
*/

/*
#include <stdio.h>

int main(){
    int posNum;
    int negNum;
    int count = 0;
    puts("Please enter a positive number : ");
    scanf("%d", &posNum);
    if (posNum < 0){
        while (posNum < 0){
            puts("Please enter a positive number : ");
            scanf("%d", &posNum);
        }
    }

    puts("Please enter a negative number now :");
    scanf("%d", &negNum);
    if (negNum > 0){
        while (negNum > 0){
            puts("Please enter a negative number : ");
            scanf("%d", &negNum);
        }
    }

    for (int i = negNum; i < posNum; i++){
        count++;
        if (count > 0){
        printf("Here is the counter : %d\n", count);
        }
        else{
            return 0;// will not print loop counter if it zero 
            //or less but that doesn't make sense if count < 0 LOL
        }
    }

}
*/

int main(void){
    int x = 0;
    while (x < 8){
        printf("%d", x);
        x++;
    }
}






