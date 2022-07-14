#include <stdio.h>

int main(){
    /*
    *Jump statements
    *Break
    *Return
    *Continue
    *Goto
    */
   //continue: jumps to the next iteration
   for (int i = 0; i < 10; i++){
    if (i == 5)
    continue; //break means we would go to 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4
    //return would 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 0 1 2 3 4

    printf("%d ", i);
   }
   return 0;

}
/* prints out 0 1 2 3 4 5 6 7 8 9
*/