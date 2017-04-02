#include<stdio.h>


int main(){
    int a, b, n, m;

    printf("Masukkan jumlah permen :"); scanf("%d", n);
    printf("Masukkan jumlah murid : "); scanf("%d", m);

    a = n / m;
    b = n % m;

    printf("%d", a);
    printf("%d", b);

    return 0;
}
