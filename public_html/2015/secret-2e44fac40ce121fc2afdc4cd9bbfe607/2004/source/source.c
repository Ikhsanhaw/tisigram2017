#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int N,hasil,i;

    scanf("%d",&N);

    for(i=0;i<N;i++){
        N = N * N;
    }
    hasil =abs(N%2);
    printf("%d\n",hasil);
    return 0;
}
