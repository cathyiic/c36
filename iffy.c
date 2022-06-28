/* define an int variable 
* prompt the user for a value and load that integer
* if the value is greater than 10, print 'large'
* if the value is less than 0, print 'negative'
* otherwise printt another message
*/
#include <stdio.h>

int main(){
    int val;
    printf("Enter in a value: ");
    scanf("%d", &val);

    if (val > 10){
        printf("Large\n");
    }
    else if(val < 0){
        printf("Negative\n");
    }
    else{
        printf("Another message idk lol\n");
    }
}
