#include <stdio.h>
                   
int main(){
    int  a, N, gelas, bonus;
    scanf("%d", &N);
    gelas=N*6;
    gelas=gelas+N;
    a=gelas;
    bonus=0;
    while(a>20){
    gelas=gelas+6;
    bonus=bonus+1;
    a=a-20;
    }
    gelas=gelas+bonus;
    
    printf("%d\n", gelas);
    return 0;
}
