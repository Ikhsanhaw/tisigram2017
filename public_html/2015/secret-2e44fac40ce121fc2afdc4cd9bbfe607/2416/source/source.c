#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    long int N;
    long int hasil,i;
    scanf("%lld",&N);
    hasil = pow(N,N) ;
    hasil = hasil%2;
    printf("%lld\n",abs(hasil));

    return 0;
}
