#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num,fact=1;
    printf("Enter the number to find the factorial:");
    scanf("%d",&num);

    for (i=1;i<=num;i++)
    fact *= i;

    printf("The Factorial of %d is %d\n",num,fact);
}