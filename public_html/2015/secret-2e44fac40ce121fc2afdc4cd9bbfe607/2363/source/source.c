#include <stdio.h>

int main(){

    int N,M,i,j;
    double x1,x2,x3;
    x1 = 1;
    x2 = 1;
    x3 = 1;
    scanf("%d %d",&N,&M);
    for(i = N; i > 1; i--){
        x1 *= i;
        if(i<=N-M){
            x3 *= i;
        }
        if(i<=M){
            x2 *= i;
        }
    }
    printf("%.0f\n",(x1/(x2*x3)));
    return 0;
}
