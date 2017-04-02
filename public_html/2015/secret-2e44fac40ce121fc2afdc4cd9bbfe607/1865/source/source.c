#include <stdio.h>

int main()
{
    int i=1, n, hasil=0;
    scanf("%d", &n);
    while (i<=3)
    {
     hasil=hasil+(n*n);
     i++;
    }
    hasil=hasil%2;
    printf("%d", hasil);
    return 0;
}
