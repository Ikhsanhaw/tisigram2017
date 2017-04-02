#include<stdio.h>

int main()
{
    int N,NM,C;
    scanf("%d",&N);
    if(N<=1000&&N>=0)
    {
    C=N*2;
    NM=N*C;
    printf("%d",NM);
    }
return 0;
}
