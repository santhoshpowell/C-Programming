#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,rows=0,space=0,symb;
    
    printf("Enter the desired number of rows:");
    scanf("%d",&rows);

    for (i=1;i<=rows;i++)
    {
        for (j=1;j<=(rows-i);j++)
        printf(" ");

        for (symb =1;symb<=i;symb++)
        printf(" *");

        printf("\n");
    }


}