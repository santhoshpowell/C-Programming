/*Find the sum of 1 to 10*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 0;
    int sumofIntegers = 0;

    for (i=0;i<11;i++)
    {
        sumofIntegers += i;
    }
    printf("The sum of 0 to 10 Integers is %d\n",sumofIntegers);
}