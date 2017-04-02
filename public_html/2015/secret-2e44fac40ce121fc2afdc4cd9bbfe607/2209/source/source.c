#include<stdio.h>
 int main(){
     int i,a;
     scanf("%d", &i);
     int N[i];
     for(a=0;a<i;a++){
       scanf("%d", &N[a]);       
     }
     for(a=0;a<i;a++){
       printf("%c", N[a]);
     }
}
