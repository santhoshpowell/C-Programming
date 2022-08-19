#include <stdio.h>
#include <stdlib.h>

int main()
{
    int limit,i,sum=0;
    printf("Enter the number of even numbers to be printed:");
    scanf("%d",&limit);

    printf("The even numbers are: ");
    for(i=1;i<=(limit*2);i++)
    {
        if (i%2==0)
        {
            printf("%d ",i);
            sum += i;
        }   
    }
    printf("\nThe sum of even Natual number upto %d terms: %d\n",limit,sum);

}