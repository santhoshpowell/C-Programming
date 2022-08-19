/* Write a program in C to make such a pattern like right angle triangle with number increased by 1 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,j=1,num = 0;
    for (i=1;i<5;i++)
    {
        for (j=1;j<=i;j++)
        {
            num++;
            printf(" %d",num);
        }
        printf("\n");
    }
}