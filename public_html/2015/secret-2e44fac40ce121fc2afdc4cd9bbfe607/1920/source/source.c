#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    if(N<=1000 && N>=0)
    {
    N=(N*2)*N;
    printf("%d",N);
    }

}
