#include <stdio.h>

int main(){
    int i, a, N, gelas, total;
    scanf ("%d", &N);
    gelas=N*6;
    a=gelas;
    while (a>20){
          gelas=gelas+6;
          N=N+1;
          a=a-20;
          }
    total=gelas+N;
    
    printf("%d\n", total);
    return 0;
}
