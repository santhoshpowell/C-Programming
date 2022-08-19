/* Program to print the odd numbers and sum of the odd numbers upto user specified limit */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int userLimit, i, sum = 0;
    printf("Enter the limit to find the odd numbers: \n");
    scanf("%d",&userLimit);
    printf("The odd numbers are: \n");
    for (i=1;i<=userLimit;i++)
    {
        if (i%2 != 0)
        {
            printf("%d\n",i);
            sum += i;
        }
    }
    printf("\nThe sum of odd numbers upto %d is %d\n",userLimit,sum);
}