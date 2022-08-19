/* Program to print the vertical multiplication table upto the User Specified Integer */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int userInput = 0,i=1,j=1;
    printf("Enter the desired number of tables wanted: ");
    scanf("%d",&userInput);
    for (i=1;i<16;i++)
    {
        for (j=1;j<=userInput;j++)
        {
            printf("%d x %d = %d\t",i, j, i*j);
        }
        printf("\n");
    }

}