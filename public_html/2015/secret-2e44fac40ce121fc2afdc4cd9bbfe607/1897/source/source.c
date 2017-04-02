#include <stdio.h>

int main()
{
    int n,m,i,a,b,c;

    scanf("%d %d", &n, &m);

    a=n;
    b=m;
    c=n-m;
    for(i=n-1;i>0;i--)
    {
        a = a*i;
    }
    for(i=m-1;i>0;i--)
    {
        b=b*i;
    }
    for(i=c-1;i>0;i--)
    {
        c=c*i;
    }

    printf("%d\n",a/(b*c));
    return 0;
}
