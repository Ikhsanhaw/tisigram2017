#include<stdio.h>

int main()
    {
        int i,N,M,C,hasil,nilai1=1,nilai2=1,nilai3=1,bilang;
        scanf("%d %d",&N,&M);
        C = N-M;
        for(i = 1; i <= N;i++)
            {
                if(i <= M)
                    {
                        nilai2 *= i;
                    }
                if(i <= C)
                    {
                        nilai3 *= i;
                    }
                nilai1 *= i;
            }
        hasil = 0;
        bilang = nilai2 * nilai3;
        if(bilang != 0)
            {
                hasil = nilai1 / (nilai2 * nilai3);
            }
        printf("%d\n",hasil);
        return 0;
    }
