#include <stdio.h>

int main()
{
int N,a,i,j,k;
scanf("%i", &N);
N=N-1;
for (i=0; i<=N; i++){
        for (j=0; j<=i; j++){
            if (j==0||i==j){
               a=1;
               }
            else{
                 a=a*(i+1-j)/j;
                 }
            printf("%i ", a);
            }
        printf("\n");
        }
    return 0;
}
