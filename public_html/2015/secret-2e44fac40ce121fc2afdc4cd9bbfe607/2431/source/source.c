#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    long long int n;
    scanf("%d", &n);

    n=pow(n,n);
    n=n % 2;
    printf("%d\n", n);
    return 0;
}
