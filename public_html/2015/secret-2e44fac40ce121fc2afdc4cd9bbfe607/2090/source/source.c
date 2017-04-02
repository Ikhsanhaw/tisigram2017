#include <stdio.h>

int main(){
    int i, a, N, gelas;
    scanf ("%d", &N);
    
    gelas=0;
    for (i=0;i<N;i++){
        gelas=gelas+6;
        }
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
