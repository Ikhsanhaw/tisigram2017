#include<stdio.h>

int main()
{
   int a,n, sb_1,b_1, syaratbonus2, bonusdua, bonuskedua, bonustotal; 
   scanf("%d",&n);
   
   a=n*6;
   sb_1=1*n;
   b_1=sb_1+a;
   if (a>=20)
   {
         syaratbonus2=a/20;
         syaratbonus2=syaratbonus2*6;
         bonusdua=syaratbonus2*1;
   }
   bonuskedua=syaratbonus2+bonusdua;
   bonustotal=a+bonuskedua;
   printf("%d\n", bonustotal);

   return 0;

}
   
