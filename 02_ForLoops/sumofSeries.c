/* Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...]. for n terms */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num,sum=0,series=9;
    printf("Enter the number of terms:");
    scanf("%d",&num);
    for (i=1;i<=num;i++)
    {
        printf("%d ",series);
        sum += series;
        series = (series*10)+9;
    }
    printf("\n");
    printf("Sum of the series is %d\n",sum);
}