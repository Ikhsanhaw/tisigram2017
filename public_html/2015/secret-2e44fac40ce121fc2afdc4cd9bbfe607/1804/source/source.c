#include <stdio.h>

int faktorial(int bil1);
int main(){
    int N, M, kombinasi;
    scanf("%d %d", &N, &M);
    kombinasi = (faktorial(N))/(faktorial(N-M)*faktorial(M));
   // printf("%d\n", faktorial(N));
   // printf("%d\n", faktorial(N-M)*faktorial(M));
    printf("%d\n", kombinasi);
    //getch();
   return 0;
}

int faktorial(int bil){
    int i, hasil=1;
    for (i = 2; i <= bil; i++){
        hasil = hasil*i;
    }
    return hasil;
}
