#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, nbres_imp;

    scanf("%d", &n);

    for (int i = 0; i < n / 2; i++){

    nbres_imp = 2 * i + 1;

    printf("%d\n", nbres_imp);
    }

    return 0;
}
