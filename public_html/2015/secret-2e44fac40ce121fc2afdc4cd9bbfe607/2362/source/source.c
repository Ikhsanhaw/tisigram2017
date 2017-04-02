#include <stdio.h>

int main(){
    int N, hasil, i;
    scanf("%d", &N);
    hasil = N;
    for(i=0;i<N-1;i++){
        hasil = hasil * N; 
    }
    printf("%d", abs(hasil%2));
    
    return 0;
}
