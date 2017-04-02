#include <stdio.h>

int main()
{
    int n;
    int i;
    int m;
    scanf("%d", &n);
    m=n*6;
    if(m>=20)
    {
             i=m/20;
             n=n+i;
             i=i*6;
             m=m+i;
             m=m+n;
             }
    printf("%d\n", m);
    return 0;
}
