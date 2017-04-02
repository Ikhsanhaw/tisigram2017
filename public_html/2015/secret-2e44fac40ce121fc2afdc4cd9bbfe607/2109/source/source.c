#include<stdio.h>

int main()
    {
        int i,j,T,angka,N;
        float value[10];

        scanf("%d",&T);
        for(i = 0; i<T;i++)
            {
               scanf("%d",&N);

               for(j = 0;j<N;j++)
                   {
                       scanf("%d",&angka);
                       value[i] += angka;
                   }
                value[i] /= N;
            }
        for(i = 0; i<T;i++)
            {
                printf("%.2f\n",value[i]);
            }
        return 0;
    }
