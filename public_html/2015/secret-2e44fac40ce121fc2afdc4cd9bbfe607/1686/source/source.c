#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int N,hasil=0,i;

    scanf("%d",&N);
    for (i=1;i<N;i++){
        if( N % i == 0 ){
            hasil=hasil+i;
        }
    }
    if(hasil == N ){
        printf("Angka Sempurna\n");
    }else{
        printf("Bukan Angka Sempurna\n");
    }
   // getch();
    return 0;
}
