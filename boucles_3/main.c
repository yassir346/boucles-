#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum = 0;

    scanf("%d", &n);

    for(int i = 0; i <= n; i++){
        sum += i;
    }
    printf("la somme est : %d", sum);

    return 0;
}
