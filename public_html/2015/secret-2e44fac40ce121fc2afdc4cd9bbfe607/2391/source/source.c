#include<stdio.h>

int main(){
    int N;
    int i;
    scanf("%d",&N);
    for(N=0; N<=500; N++)
        i=N*2;
        N=N*i;
        printf("%d\n",N);
    return 0;
}
