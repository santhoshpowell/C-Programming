#include <stdio.h>

int main()
{
    for (int i=0;i<8;i++)
    {
        if (i==0)
        {
            printf("######\n");
        }
        else if (i==3)
        {
            printf("#####\n");
        }
        else
        {
            printf("#\n");
        }
        
    }
}