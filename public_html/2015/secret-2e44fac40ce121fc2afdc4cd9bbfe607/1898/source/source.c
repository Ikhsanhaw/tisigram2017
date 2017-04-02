#include <stdio.h>

int main(){
   int a,b,c;
   
   scanf("%d %d %d", &a, &b, &c);
   if(a>b && (c > a && c > b)){
      printf("%d\n",c/a);
   }
   else{
      printf("mustahil\n");
   }
   //scanf("%s",c);
}
