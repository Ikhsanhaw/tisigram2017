#include <stdio.h>

int main (){
    int T, N, M, X[20000], Y[20000], h, i, j, k, bilminimal, jumlah, temp;
    
    scanf("%d", &T);
    
    for(h=1 ; h<=T ; h++){
       scanf("%d", &N);
       scanf("%d", &M);
       for(i=1 ; i<=N ; i++){
           scanf("%d", &X[i]);
       }
       for(i=1 ; i<=M ; i++){
           scanf("%d", &Y[i]);
       }
       if(N>M){
          printf("Muntu kalah\n");
       } else {
          for(j=1 ; j<=N ; j++){
              bilminimal=Y[j];
              for(k=1 ; k<=M ; k++){
                  if(Y[k]<bilminimal){
                     temp=bilminimal;
                     bilminimal=Y[k];
                     Y[k]=temp;
                  }
              }
              jumlah=jumlah+bilminimal;
          }
          printf("%d\n", jumlah);
       }
    }
    return 0;   
}
