#include<stdio.h>
//#include<conio.h>

int main(){
 int interval,banyakkelas,max,min,a,b;
 scanf("%d",&banyakkelas);
 scanf("%d %d",&max,&min);
 
 interval= (max-min)/banyakkelas;
 for(int i=0; i<=banyakkelas; i++){
         a=min;
         b=min+interval;
         printf ("%d - %d\n",a,b);
         }

 //getch();  
}
