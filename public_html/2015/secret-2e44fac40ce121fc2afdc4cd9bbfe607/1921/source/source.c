#include<stdio.h>

int main()
    {
        int N,M,C,hasil,nilai1=1,nilai2=1,nilai3=1;
        scanf("%d",&N);
        scanf("%d",&M);
        C = N - M;
        while(N > 0)
            {
                nilai1 *= N;
                N--;
            }
        while(M > 0)
            {
                nilai2 *= M;
                M--;
            }
        while(C > 0)
            {
                nilai3 *= C;
                C--;
            }
        hasil = 0;
        hasil = nilai1 / (nilai3 * nilai2);
        printf("%d\n",hasil);
        return 0;
    }

