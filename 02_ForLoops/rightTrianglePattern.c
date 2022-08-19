/* Write a program in C to display the pattern like right angle triangle using an asterisk */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j=0;
    for (i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}