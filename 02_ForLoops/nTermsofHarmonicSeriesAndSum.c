#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n; float sum=0.0;

    printf("Enter the number of terms:");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        sum += 1/(float)i;
        printf("1/%d + ",i);
    }
    printf("Sum of Series upto %d terms: %f\n",n,sum);
}