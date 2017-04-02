#include<stdio.h>

int main()
    {
        int i,j,T,N;
        scanf("%d",&T);
        float angka,value[T];
        for(i = 0; i<T;i++)
            {
               scanf("%d",&N);
               for(j = 0;j<N;j++)
                   {
                       scanf("%f",&angka);
                       value[i] += angka;
                   }
                value[i] = value[i]/N;
            }
        for(i = 0; i<T;i++)
            {
                printf("%.2f\n",value[i]);
            }
        return 0;
    }
