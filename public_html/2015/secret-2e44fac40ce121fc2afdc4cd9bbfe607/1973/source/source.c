#include<stdio.h>
#include<stdlib.h>


int main(){
    int X;
    int A;
    int B;
    int C;
    int H;
    int P;
    
    scanf("%d",&X);
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);
    
    H = A * B * C;
    if (H >= X)
    {
          P = H/2;
          printf("%d %d",P,H);
    }
    else
    {
        P = H*2;
        printf("%d %d",H ,P);
    }   
    
    printf("\n");
    return 0;
}
