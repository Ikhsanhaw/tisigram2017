#include <stdio.h>

int main()
{
int N,a,i,j,k;
scanf("%i", &N);
N=N-1;
for (i=0; i<=N; i++){
    for (k=0; k<=((2*N)-(2*i)); k++){
        printf("");
        }
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
