# include <stdio.h>

/*
Grade calculator
Purpose: have user enter current avg
Provide how much course work already graded.
Then show what they need to average on remaining work to get various letter grades

Sample input:
95% against 50% of the course being completed
A: 85%
B: 65%
...
*/
int main(void){
    float userAverage = 0.0f;
    float courseWorkCompleted = 0.0f;

    puts("What is your current average? ");
    scanf("%f", &userAverage);

    puts("How much of the course have you completed?");
    scanf("%f", &courseWorkCompleted);

    float overallWorkCompleted = userAverage * courseWorkCompleted / 100.0f;

    printf("Total overall points acquired %f\n", overallWorkCompleted);
    
    // 90 - 47.5 = 32.5 points needed out of 50 points that can be earned
    float pointsNeededForA = (90 - overallWorkCompleted) / courseWorkCompleted;
    if (pointsNeededForA){
        printf("%f needed to get an A\n", pointsNeededForA * 100.0f);
    }
    return 0;
}