#include <stdio.h>

int main (){
    int T, N, nilai[10], i, j;
    float rata[10], jumlah[10];
    
    scanf("%d", &T);
    for(i=1 ; i<=T ; i++){
       scanf("%d", &N);
       jumlah[i]=0;
       for(j=1 ; j<=N ; j++){
           scanf("%d", &nilai[j]);
           jumlah[i]=jumlah[i]+nilai[j];
       }
       rata[i]=jumlah[i]/N;
    }
    for(j=1 ; j<=T ; j++){
        printf("%0.2f\n", rata[j]);
    }
    return 0;   
}
