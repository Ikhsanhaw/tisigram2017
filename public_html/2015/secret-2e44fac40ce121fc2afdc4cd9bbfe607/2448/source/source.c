#include<stdio.h>


int main()
{
   int a,n,m, sb_1,b_1, syaratbonus2, bonusdua, bonuskedua, bonustotal; 
   scanf("%d",&n);   
   a=n*6;
   sb_1=1*n;
   b_1=sb_1+a;
   if (a>=20)
   {
         m=a/20;
         syaratbonus2=m*6;
         bonusdua=m*1;
         bonuskedua=syaratbonus2+bonusdua;
         bonustotal=b_1+bonuskedua;
   }

   printf("%d\n", bonustotal);
  
   return 0;
}
   
