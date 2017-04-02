#include<stdio.h>

int main()
    {
        int i,j,N,angka;
        scanf("%d",&N);
        int value[N];
        for(i = 0; i<N;i++)
            {
                value[i] = 0;
                for(j = 0; j<6;j++)
                    {
                        scanf("%d",&angka);
                        value[i] += angka;
                    }
            }
        for(i = 0; i<N;i++)
            {
                printf("%d\n",value[i]);
            }
        return 0;
    }
