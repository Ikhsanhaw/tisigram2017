#include <stdio.h>
#include <math.h>

int main(){
   int A,B,X,Y,x,y;
   float n1,n2;
   scanf("%d %d",&A,&B);
   scanf("%d %d",&X,&Y);
   n2 = ((X * A) - (Y)) / (A - B);
   n1 = -((X * B) - (Y)) / (A - B);
    x = n1;
    y = n2;
   if(n1==0 || n2==0 || n1<0 || n2<0
      || (((X * A) - (Y)) % (A - B))>0
      || (-((X * B) - (Y)) % (A - B))>0){
    printf("mustahil\n");
   }else{
    printf("%0.f %.0f\n",n1,n2);
   }
    return 0;
}
