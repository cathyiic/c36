#include <stdio.h>
#include <string.h>

/*void Example()
{
  static int x = 2;
  printf("%d\n", x++);
}

int main()
{
  Example();
  Example();
  Example();
  Example();
  return 0;
}
*/


typedef struct info{
    int age;
    char month[12];
    int day;
    int year;
    char first[20];
} Cal;

Cal Calendar(){
    Cal info;
    printf("Day : \n");
    scanf("%d", &info->day);
    printf("Year : \n");
    scanf("%d", &info->year);
    printf("Month : \n");
    scanf("%d", &info->month);
    return info;

    
}



#include <stdlib.h>

void setAge(Cal* date){
    int daytoday = 27;
    int monthtoday = 7;
    int yeartoday = 22;
    puts("Please enter your day of birth");
    scanf("%d", &date.day);
    puts("Please enter your month of birth");
    scanf("%d", &date->month);
    puts("Please enter your year of birth");
    scanf("%d", &date->year);
    int newDay = abs(date.day - daytoday);
    int newMonth = abs(date.month - monthtoday);
    int newYear = abs(date.year - yeartoday);

    int daysOfLiving = newDay + (newMonth*12) + (newYear*360);
    int result = daysOfLiving;
    return result;
}

void buildDeck(CARD* cards){
    for (int suit = 0; suit < 7; suit++){
        for (int face = 0; face <= 13; face++){
            cards->suit = suit;
            cards->face = face;
            cards++;
        }
    }
}




int main(){
    Cal element1[5] = {1, 2, 3, 6, 7};
    int count = 0;
    for (int i = 0; i < count; count++){
        int val;
        setAge(val);
        int age = val;
        printf("The person age is : %d", age);
    }
}




