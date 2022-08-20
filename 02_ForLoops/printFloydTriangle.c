/*Write a program in C to print the Floyd's Triangle using 1 and 0 like below example
1 
01
101 
0101 
10101

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,rows;
    printf("Enter the number of rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            if((i%2 == j%2)) 
            printf("1");
            else
            printf("0");
        }
        printf("\n");
    }

}

/*

Note: When row and column's reminder is same, it's 1 in the pattern. else 0 in the pattern

      12345

row:1 1 
row:2 01
row:3 101 
row:4 0101 
row:5 10101

*/