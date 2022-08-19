#include <stdio.h>
#include <stdlib.h>

int main()
{
    int characterAge = 29;
    char characterName[] = "Santhosh";
    int characterDesiredAge = 26;

    printf("Person name is %s\n",characterName);
    printf("%s age is %d\n",characterName,characterAge);
    printf("But %s didn't want to be %d and would like to go back to %d\n",characterName,characterAge,characterDesiredAge);
}