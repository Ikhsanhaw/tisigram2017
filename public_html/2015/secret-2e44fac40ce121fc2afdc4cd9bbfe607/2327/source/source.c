#include <stdio.h>

int main(){
   int N,i;
   int A[1000];
   scanf("%d",&N);
   for(i=0;i<N;i++){
   scanf("%d",&A[i]);
   }
   for(i=0;i<N;i++){
   printf("%c",A[i]);                 
   }
   printf("\n");
   return 0;
}
