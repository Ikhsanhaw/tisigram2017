#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    int K;
    int B;

    scanf("%d",&N);

    K = pow(N,N);
    B = K % 2;

    printf("%d\n",B);
    return 0;
}
