#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    if(N<=100)
        N=N*N*N;
    printf("%d\n",N);
    return 0;
}
