#include<stdio.h>

int main(){
    int N;
    int i;
    scanf("%d",&N);
    for(i=0; N<=500; i++)
        i=N*2;
        N=N*i;
        printf("%d\n",N);
    return 0;
}
