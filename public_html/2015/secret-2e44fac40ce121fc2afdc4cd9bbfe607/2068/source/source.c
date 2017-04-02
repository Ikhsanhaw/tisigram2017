#include<stdio.h>

int main()
    {
        int i,j,T,angka;
        scanf("%d",&T);

        float value[T];
        int N[T];

        for(i = 0; i<T;i++)
            {
               scanf("%d",&N[i]);
               for(j = 0;j<N[i];j++)
                   {
                       scanf("%d",&angka);
                       value[i] += angka;
                   }
            }
        for(i = 0; i<T;i++)
            {
                printf("%.2f\n",value[i]/N[i]);
            }
        return 0;
    }
