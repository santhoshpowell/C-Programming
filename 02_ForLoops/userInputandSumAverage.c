/* Program to get 10 numbers from user and find the sum and average */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, userInput, sumofIntger=0;
    float sumofAverage = 0;
    printf("Enter the 10 numbers to find the Sum and Average\n");
    for (i=1;i<11;i++)
    {
        scanf("%d",&userInput);
        sumofIntger += userInput;
    }

    sumofAverage = sumofIntger/10.0;
    printf("The sum of Intgers is %d and the avaerage is %f\n", sumofIntger, sumofAverage);
}