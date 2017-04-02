#include <stdio.h>
                   
int main(){
    int  a, N, gelas;
    scanf ("%d", &N);
    gelas=N*6;
    a=gelas;
    while (a>20){
    gelas=gelas+6;
    N=N+1;
    a=a-20;
    }
    gelas=gelas+N;
    
    printf("%d\n", gelas);
    return 0;
}
