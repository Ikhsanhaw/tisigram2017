#include<stdio.h>
int main(){
    int T;
    int A[6];
    scanf("%d",&T);
    if(T <= 10){
        int S[T];
        int v,w,x;
        for(v = 1; v<=T; v++){
              scanf("%d %d %d %d %d %d",&A[1], &A[2], &A[3], &A[4], &A[5], &A[6]);
              S[v] = 0;
              for(w = 1; w<=6; w++){
                    if(A[w]<= 10000){S[v] = S[v]+A[w];}
                    
              }
        }
        for(x = 1; x<=T; x++){
              printf("%d\n", S[x]);      
        }
    }    
    return 0;
}
