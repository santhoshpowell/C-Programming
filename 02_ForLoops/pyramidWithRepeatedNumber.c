#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,space,rows,num=1;
    printf ("Enter the number of rows:");
    scanf ("%d",&rows);

    for (i=1;i<=rows;i++)
    {
        for (space =1;space<=(rows-i);space++)
        printf(" ");

        for (j=1;j<=i;j++)
        printf("%d ",num);

        printf("\n");
        num++;
    }
}