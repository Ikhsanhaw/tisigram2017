#include <stdio.h>

int main()
{
    int M,N,T,B,K,I = 0;

    scanf("%d",&T);
    scanf("%d %d",&M,&N);

    K = N;
    B = N;
    I = (M-N)/T;
    while (K <= M)
    {
        B = K + I;
        printf ("%d - %d\n",K,B);
        K = B+1;
    }
    return 0;
}
