#include<stdio.h>
int main(){
    int T; // Jumlah Semester
    int N;
    int X[8];
    int b,c;
    scanf("%d", &T);
    float C[T];
    if(1<= T && T<= 10){
        for(b=1; b<=T; b++){
          C[b] = 0;
          scanf("%d",&N);
          if(1 <= N && N <= 8){
          for(c=1;c<=N;c++){
            scanf("%d",&X[c]);
            if(1 <= X[c] && X[c]<= 100){
            C[b] = C[b] + X[c];         
            }        
          }
          C[b] = C[b]/N;
          }               
        }
        for(b=1;b<=T;b++){
          printf("%.2f\n",C[b]);
        }
    }
    return 0;
    }
