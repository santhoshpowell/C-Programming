/* Write a program in C to make such a pattern like a pyramid with numbers increased by 1. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,j=1,space,rows,num=0,sum=1;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    for (i=1;i<=rows;i++) //Number of rows
    {
        for (j=1;j<=(rows-i);j++) // Calculating the number of spaces to be printed
        printf(" ");

        for (num=1;num<=i;num++)  // condition to print the numbers
        {
            printf(" %d",sum);
            sum++;
        }

        printf("\n");

    }
}