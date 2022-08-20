/*Perfect number is a positive integer that is equal to the sum of all its proper positive divisors excluding the number itself
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,sum=0,startingRange,endingRange;
    printf("Enter the starting range to find the perfect number:");
    scanf("%d",&startingRange);
    printf("Enter the ending range to find the perfect number:");
    scanf("%d",&endingRange);

    for(i=startingRange;i<=endingRange;i++)
    {
        j =1;
        sum =0;
        while(j<i)
        {
        if (i%j == 0)
            sum += j;
           j++;
        }
        if (sum==i)
        {
            printf("%d ",i);
        }
    }
    printf("\n");
}