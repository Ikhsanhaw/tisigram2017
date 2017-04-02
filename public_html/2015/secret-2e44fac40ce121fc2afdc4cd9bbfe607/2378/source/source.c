#include <stdio.h>

int main(){
   int a,b,c,j=0;
   
   scanf("%d %d %d", &a, &b, &c);
   if(c > a && c > b && (a>=0 && b >= 0)){
     if(a == 0 && b == 0){
         printf("mustahil\n");
     }
     else{
         if(a == 1 && b > a) printf("mustahil\n");
         else{
             int i=0;
                 while(j<c){
                   i++;
                   if(i%3 == 0)
                      j = j+(a*3);
                   else if(i%5 == 0)
                      j = j-(b*2);
                   if(i%3 != 0 && i%5 != 0){
                      j = j+(a-b);
                   }
                 }
                 printf("%d\n",i);
         }
     }
   }
   else printf("mustahil\n");
   scanf("%s",c);
}
