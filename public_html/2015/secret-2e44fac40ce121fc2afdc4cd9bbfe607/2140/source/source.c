#include <stdio.h>
int main(){
    int a,b,x,y,c,d,z;
    scanf("%d",&a); 
    scanf("%d",&b);

    c=1; 
    for(x = 1;x<=a;x++){
         c*=x; 
          } 
    d=1; 
    for(x = 1;x<=b;x++){
         d*=x; 
          } 
    y=1; 
    for(x = 1;x<=(a-b);x++){
         y*=x; 
          } 
          z=c/(y*d);
    printf("%d\n",z);
    return 0;
}
