#include <stdio.h>
#include <conio.h>
int main(){
    int a,b,x,z;
    double c,d,y;
    scanf("%d",&a); 
    scanf("%d",&b);

    c=1.0; 
    for(x = 1;x<=a;x++){
         c*=x; 
          } 
    d=1.0; 
    for(x = 1;x<=b;x++){
         d*=x; 
          } 
    y=1.0; 
    for(x = 1;x<=(a-b);x++){
         y*=x; 
          } 
    z=c/(y*d);
    printf("%d\n",z);
    getch();
    return 0;
}
