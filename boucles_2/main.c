#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int factorial = 1;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        factorial *= i;
    }
    printf("%d", factorial);
    return 0;
}
