#include<stdio.h>
 int main(){
     int i,a;
     int N[2];
     scanf("%d", &i);
     for(a=0;a<i;a++){
       scanf("%d\n", &N[a]);               
     }
     for(a=0;a<i;a++){
       printf("%c", N[a]);
     }
     return 0;
}