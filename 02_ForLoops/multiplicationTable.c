/* Program to write a multiplication table of a User specified Integer upto 15 times */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int userInput = 0, i;
    printf("Enter the desired multiplication table to be generated:");
    scanf("%d",&userInput);
    for(i =1;i<16;i++)
    {
        printf("%d x %d = %d\n",userInput, i, userInput*i);
    }
}