#include <stdio.h>

int main(){
    int M,N,T, i, kiri,kanan,p;
    scanf("%d", &T);
    scanf("%d %d", &M,&N);
    p=(M-N)/T;
    kiri =N;
    kanan = N+p;
    printf("%d - %d\n",kiri, kanan);
    for(i=1;i<T;i++){
        kiri = kanan + i;
        kanan = kanan +p;
        printf("%d - %d\n",kiri, kiri+p);        
    }
    
    return 0;
}
