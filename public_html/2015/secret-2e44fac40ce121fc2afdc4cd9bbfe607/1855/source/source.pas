#include<stdio.h>
int main ()
{
    int N, K, komb,sel;
    int Ni, Ki, seli;
    int i, count;
    
    scanf("%d %d", &N, &K);
    sel=N-K;
    
    count=1;
    for(i=1; i<=N; i++)
    {
         count=count*i;
    }
    Ni=count;
    
    count=1;
    for(i=1; i<=K; i++)
    {
         count=count*i;
    }
    Ki=count;
    
    count=1;
    for(i=1; i<=sel; i++)
    {
         count=count*i;
    }
    Ki=count;
    seli=count;
    
    komb=Ni/(Ki*seli);
    printf("%d\n", komb);


return 0;
}
