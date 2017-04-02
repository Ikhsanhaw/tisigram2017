#include <stdio.h>

int main(){
   int i, s;
   scanf("%d",&i);
   float j[i];
   for(int n=0; n<i; n++) {
      scanf("%d",&s);
      int x[s];
      j[n] = 0;
      for(int e = 0; e<s; e++){
         scanf("%d",&x[e]);
         j[n] = j[n] + x[e];
      }
      j[n] = j[n]/s;
   }
   for(int a = 0; a<i; a++) {
           printf("%.2f\n",j[a]);
   }
   scanf("%s",i);
}
