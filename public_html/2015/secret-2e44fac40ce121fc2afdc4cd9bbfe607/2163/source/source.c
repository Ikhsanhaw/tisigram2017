#include<stdio.h>

int main()
    {
        int i,N,M,C,hasil,nilai1,nilai2,nilai3,bilang;
        nilai1 = 1;
        nilai2 = 1;
        nilai3 = 1;
        scanf("%d %d",&N,&M);
        C = N-M;
        for(i = 0; i < N;i++)
            {
                if(i < M)
                    {
                        nilai2 *= (i+1);
                    }
                if(i < C)
                    {
                        nilai3 *= (i+1);
                    }
                nilai1 *= (i+1);
            }
        bilang = nilai2 * nilai3;
        if(bilang != 0)
            {
                hasil = nilai1 / bilang;
            }
        printf("%d\n",hasil);
        return 0;
    }
