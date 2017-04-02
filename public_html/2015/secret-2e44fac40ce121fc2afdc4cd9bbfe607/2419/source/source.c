#include <stdio.h>
   int main(){
       int A;
       int B;
       int H;
       scanf("%d" "%d" "%d", &A, &B ,&H);
       while(H>0){
          H =(H-A)+B;
          if (A<B){
             printf("mustahil\n");
          } 
          else{
             printf("%d\n", H);
          }
       }
       return 0;
   }
