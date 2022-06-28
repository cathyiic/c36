#include <stdio.h>
//defining an int variable then reading variable using scanf, and then printing that variable 

int main(){
  int x;

  printf("Enter an int value: ");
  scanf("%d", &x);
  
  printf("Here is your int variable : %d \n", x);
  return 0;
}
