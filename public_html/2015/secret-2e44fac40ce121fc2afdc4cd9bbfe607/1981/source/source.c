#include<stdio.h>

int main(){
    int N, bekas, gelas, total, jml;
    
    scanf("%d", &N);
    bekas=0;
    gelas=0;
    total=0;
    jml=0;
    
    total=N*6;
    while(total>=20){
                     gelas=gelas+6;
                     total=total-20;
                     bekas++;
    }
    bekas=bekas+N;
    jml=bekas+gelas+(N*6);
    printf("%d\n", jml);
    return 0;
    }
