#include <stdio.h>

int main(){

    int N,M,x1,x2,i,j;
    x1 = 1;
    x2 = 1;
    scanf("%d %d",&N,&M);
    for(i = N; i > 1; i--){
        x1 *= i;
    }
    for(j = M; j > 1; j--){
        x2 *= j;
    }
    printf("%d\n",(x1/(x2*x2)));
    return 0;
}
