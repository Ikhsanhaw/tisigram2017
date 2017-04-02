#include <stdio.h>

int main(){
    
    int i, tc, d, j;
    scanf("%d", &tc);
    float A[tc], k;
    for(i = 0 ; i < tc ; i++){
          A[i] = 0;
          scanf("%d", &d);
          for(j = 1 ; j <= d ; j++){
                scanf("%f", &k);
                A[i] = A[i] + k;
                }
          A[i] = A[i] / d; 
          }
    for(i = 0 ; i < tc ; i++){
          printf("%.2f\n", A[i]);
          }
    //getch();
    return 0;
}
