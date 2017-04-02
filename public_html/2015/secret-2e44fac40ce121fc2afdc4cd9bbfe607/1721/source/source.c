#include<stdio.h>

int main()
    {
        int i,j,N,angka,value;
        scanf("%d",&N);

        for(i = 0; i<N;i++)
            {
                value = 0;
                for(j = 0; j<6;j++)
                    {
                        scanf("%d",&angka);
                        value += angka;
                    }
                printf("%d",value);
            }

        return 0;
    }
