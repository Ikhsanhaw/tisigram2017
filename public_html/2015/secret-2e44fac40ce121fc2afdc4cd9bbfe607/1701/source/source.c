#include <stdio.h>

int main(){
    int tc, i,  j, d;
    scanf("%d", &tc);
    int A[tc];
    
    for(i = 0 ; i < tc ; i ++){
          A[i] = 0;
          for(j = 1 ; j <= 6 ; j++){
                scanf("%d", &d); 
                A[i] = A[i] + d;
                }
          }
    for(i = 0 ; i < tc ; i++){
          printf("%d\n", A[i]); 
          }
          
    
    //getch();
    return 0;
}
