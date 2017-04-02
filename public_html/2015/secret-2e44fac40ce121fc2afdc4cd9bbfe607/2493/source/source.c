#include <stdio.h>

int main(){
    long int N, hasil;
    long int i;
    scanf("%li", &N);
    hasil = N;
    for(i=0;i<N-1;i++){
        hasil = hasil * N; 
    }
    printf("%li",(hasil%2)*(hasil%2));
    
    return 0;
}
