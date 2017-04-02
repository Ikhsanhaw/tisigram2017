#include <stdio.h>

int main()
{
    unsigned long int a,b,c,d,e,f,j;
    int i,t;

    scanf("%d",&t);
    unsigned long int s[t];
    for(i=0;i<t;i++)
    {
        scanf("%ld %ld %ld %ld %ld %ld",&a,&b,&c,&d,&e,&f);
        s[i]=a+b+c+d+e+f;
    }
    for(i=0;i<t;i++)
    {
        printf("%ld\n",s[i]);
    }
    return 0;
}
