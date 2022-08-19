/* Program to print the numbers upto the user specified Integer and find the sum of Integers */

#include <stdio.h>
#include <stdlib.h>

int userInput,sumofInteger = 0;
int i;

int main()
{
    printf("Enter the number for finding the Sum of Integers");
    scanf("%d",&userInput);

    for (i=0;i<=userInput;i++)
    {
        printf("%d\n",i);
        sumofInteger += i;
    }
    printf("The sum of Integer is %d\n", sumofInteger);
}