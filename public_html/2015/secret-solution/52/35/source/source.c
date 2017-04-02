#include <stdio.h>

int max(int n, int k){
    return n > k ? n : k;
}

int min(int n, int k){
    return n < k ? n : k;
}

unsigned long long int combination(int n, int k);

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    printf("%lld\n",combination(n,m));
	return 0;
}

/*  this algorithm is a natural algoritm to calculate combination ...
    IF - March, 28th 2016
*/

unsigned long long int combination(int n, int k){
    int sisa = n - k;
    unsigned long long int hasil = 1;
    int batas = 2;
    int batasAtas = min(sisa,k);
    int batasBawah = max(sisa,k);

    /*Cara SMA */
    for (int i = n ; i > batasBawah ; i--){
        hasil = hasil * i;
        if (hasil % batas == 0 && batas <= batasAtas){ //algoritma "coret"
            hasil = hasil / batas;
            batas++;
        }
    }
    return hasil;
}
