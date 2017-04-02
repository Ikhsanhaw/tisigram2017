#include <stdio.h>

int main()
{
    int X;
    int B = 1;
    int C = 1;
    int D = C;
    int K = B;
    int test = 1;
    scanf("%d",&X);

    if (X >= 1 && X <=10000)
    {

    while (K<=X)
    {
        test = 0;
        if (X%K==0)
        {
            test = 1;
        }
        D=B+C;
        B=C;
        C=D;
        K = K + D;
    }
    if (test == 1)
    {
        printf("Angka Sempurna\n");
    }
    else
    {
        printf("Tidak Sempurna\n");
    }
    }
    return 0;
}
