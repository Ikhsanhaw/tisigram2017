#include <stdio.h>

int main(){
   int a,b, h=0;
   scanf("%d %d", &a, &b);
   for(int i=a-1; i>=1; i--){
      for(int j = i; j>=1; j--){
        h++;
      }
   }
   printf("%d\n",h);
   scanf("%s",h);
}
