#include <stdio.h>

int main(){
   int i, x[5];
   scanf("%d",&i);
   int j[i];
   for(int n=0; n<i; n++) {
      scanf("%d %d %d %d %d %d",&x[0],&x[1],&x[2],&x[3],&x[4],&x[5]);
      j[n] = x[0]+x[1]+x[2]+x[3]+x[4]+x[5];
   }
   for(int a = 0; a<i; a++) {
           printf("%d\n",j[a]);
   }
   scanf("%s",i);
}
