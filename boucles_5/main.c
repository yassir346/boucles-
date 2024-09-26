#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Base, Expo, Result = 1, i;

    printf("la base = ");
    scanf("%d", &Base);
    printf("\nl'expo = ");
    scanf("%d", &Expo);

    for (i = 1;i <= Expo; i++)
    {
        Result = (Result*Base);
    }

    printf("la puissance est : %d", Result);

    return 0;
}
