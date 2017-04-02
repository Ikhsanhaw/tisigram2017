#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X;
    int B = 1;
    int C = 1;
    int D = 1;
    int K = 1;
    int test = 1;
    scanf("%d",&X);
    while (K<=X)
    {
        test = 1;
        if (X%K!=0)
        {
            test = 0;
        }
        D=B+C;
        B=C;
        C=D;
        K = K + D;
    }
    printf("%d",K);
    if (test == 1)
    {
        printf("Angka Sempurna\n");
    }
    else
    {
        printf("Tidak Sempurna\n");
    }

    return 0;
}
