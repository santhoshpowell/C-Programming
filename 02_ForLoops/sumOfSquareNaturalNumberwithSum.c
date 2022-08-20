#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num,sum=0,square;
    printf("Enter the number to find the square of sum:");
    scanf("%d",&num);
    printf("The square natural upto %d terms are:",num);
    for (i=1;i<=num;i++)
    {
        square = (i*i);
        printf("%d\n",square);
        sum += square;
    }
    printf("The Sum of Square Natural Number upto %d terms is %d\n",num,sum);
}