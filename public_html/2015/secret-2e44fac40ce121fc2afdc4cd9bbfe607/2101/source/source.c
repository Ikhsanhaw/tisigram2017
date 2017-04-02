#include<stdio.h>

int faktor( int A);

int main()
    {
        int i,N,M,C,hasil,nilai1=1,nilai2=1,nilai3=1;
        scanf("%d %d",&N,&M);
        hasil = 0;
        hasil = faktor(N) / (faktor(N-M) * faktor(M));
        printf("%d\n",hasil);
        return 0;
    }

int faktor(int A)
    {
        int i,nilai = 1;
        for(i = 1;i<=A;i++)
            {
                nilai *= i;
            }
        return nilai;
    }
