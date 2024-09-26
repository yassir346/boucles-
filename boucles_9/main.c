#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int i = 1;

    scanf("%d", &x);

    for(i = 1; (x/10) > 1; i++)
    {
        x /= 10;

    }
    printf("nombre de chiffres est : %d\n", i + 1);

    return 0;
}
