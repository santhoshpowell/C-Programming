#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,rows;
    printf("Enter the number of rows:");
    scanf("%d",&rows);
    for (i=1;i<=rows;i++)
    {
        for(j=i;j<=rows;j++)
        printf("* ");

        printf("\n");
    }
}