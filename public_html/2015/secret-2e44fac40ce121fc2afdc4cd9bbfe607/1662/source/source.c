#include <stdio.h>

int main(){
    
    int i, tc;
    scanf("%d", &tc);
    long long int A[tc];
    for(i = 0 ; i < tc ; i++){
          scanf("%lld", &A[i]);
          }
    
    for(i = 0 ; i < tc ; i++){
          if(A[i] <= range()) printf("false\n");
          else printf("true\n"); 
          }
    
    //getch();
    return 0;
}

int range(){
    int i;
    long long int r = 1;
    for(i = 1 ; i <= 64 ; i++){
          r = r* 2;
          }
    r--;
    return r;
}
