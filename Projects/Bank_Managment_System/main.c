#include <stdio.h>
#include <time.h>

char user_response[3];

void main()
{
    printf("Welcome to the Central Bank Online Netbanking\n");
    time_t t = time(NULL);
    printf("\n     Time:%s",ctime(&t));
    user_management();
}

void user_management()
{
    printf("Are you the existing customer\n");
    scanf("%s", &user_response);
    printf("%s\n",user_response);
    if (user_response == "Yes" || "yes")
    {
        printf("Ok");
    }
}

