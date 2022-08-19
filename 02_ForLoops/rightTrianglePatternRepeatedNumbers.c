/* Write a program in C to make such a pattern like right angle triangle with a number which will repeat a number in a row. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,j=1;
    for (i=1;i<6;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}