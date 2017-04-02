#include <stdio.h>
int main(){
 int N;
 scanf("%d", &N);
 if(N>=0 && N<=1000){
   N=(N*N)+(N*N);
   printf("%d", N);
 } 
 else{
  return 0;
 }
}
