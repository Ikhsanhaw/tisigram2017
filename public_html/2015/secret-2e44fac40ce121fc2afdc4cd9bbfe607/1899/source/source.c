#include<stdio.h>

int main()
{
    int N,NM;
    scanf("%d",&N);
    if(N<=1000 && N>=0)
    {
    NM=(N*2)*N;
    printf("%d",NM);
    }

}