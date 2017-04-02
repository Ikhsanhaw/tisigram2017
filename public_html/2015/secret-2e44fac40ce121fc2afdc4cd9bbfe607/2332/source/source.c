#include <stdio.h>

int main(){
    int a,b,x,z;
    double c,d,y;
    scanf("%d",&a); 
    scanf("%d",&b);

    c=1.0; 
    for(x = b+1;x<=a;x++){
         c*=x; 
          } 
    y=1.0; 
    for(x = 1;x<=(a-b);x++){
         y*=x; 
          } 
    z=c/(y);
    printf("%d\n",z);
    
    return 0;
}
