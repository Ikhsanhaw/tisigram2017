#include<stdio.h>

int main(){
    /*Deklarasi*/
    float X[10];
    int T,Y[8],N;
    int i,j,jumlah;
    
    /*Proses*/
    scanf("%d", &T);
    
    for(i=0; i<T; i++){
       jumlah=0;
       scanf("%d", &N);       
       for(j=0; j<N; j++){
         scanf("%d", &Y[j]);
         jumlah = jumlah + Y[j];
       }
       X[i]=(float)jumlah/N;
    }
    
    for(i=0; i<T; i++){
       printf("%.2f\n", X[i]);
    }
    
    //system("pause");
    return 0;
}
