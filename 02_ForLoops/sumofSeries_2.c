#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,t,sum=0,num=1;
    printf("Enter the number of terms:");
    scanf("%d",&t);
    for (i=1;i<=t;i++)
    {
        printf("%d ",num);
        num = (num*10)+1;
        sum += num;
    }
    printf("\nThe sum is %d\n",sum);
}