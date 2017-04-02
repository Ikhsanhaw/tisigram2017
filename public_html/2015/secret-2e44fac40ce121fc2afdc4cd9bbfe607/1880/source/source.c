#include<stdio.h>

int faktorial(int A);

int main()
    {
        int N,M, hasil = 0;
        scanf("%d %d",&N,&M);
        hasil = faktorial(N) / (faktorial(N-M) * faktorial(M));
        printf("%d\n",hasil);
        return 0;

    }

int faktorial(int A)
    {
        int nilai = 1;
        while(A > 0)
            {
                nilai = nilai*A;
                A--;
            }
        return nilai;
    }

