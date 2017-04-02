#include<stdio.h>

int main()
    {
        int i,N,M,C,hasil,bilang;
        scanf("%d %d",&N,&M);
        hasil = 0;
        bilang = (N-M) * M;
        hasil = N / bilang;
        printf("%d\n",hasil);
        return 0;
    }
