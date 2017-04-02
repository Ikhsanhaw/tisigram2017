#include <stdio.h>

int main(){

    int N,M,x1,x2,i;
    x1 = 1;
    x2 = 1;
    scanf("%d %d",&N,&M);
    for(i = N; i > 1; i--){
        x1 *= i;
    }
    for(i = M; i > 1; i--){
        x2 *= i;
    }
    printf("%d\n",(x1/(x2*x2)));
    return 0;
}
