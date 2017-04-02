#include <stdio.h>

int main(){
    int a,b,x,y,t1,t2,i=1,ketemu=0,p;
    scanf("%d %d",&a,&b);
    scanf("%d %d",&x,&y);
    p = x - 1;
    if (a<b){
       while (i<x && ketemu == 0){
       t1 = a * p;
       t2 = b * i;
       if ((t1 + t2) == y){
               ketemu = 1;
       } else {
              p--;
              i++;
       }
       }
       if (ketemu == 1){
          printf("%d %d\n",p,i);
       } else {
          printf("mustahil\n");
       }    
    }
    return 0;
}
