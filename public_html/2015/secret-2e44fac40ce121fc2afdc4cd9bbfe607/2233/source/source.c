#include<stdio.h>
int main ()
{
  int Ka, Kb;
  int JP, TotK,Ja,Jb, des=0;
  int sel,kali,seli;
 
  scanf("%d %d",&Ka, &Kb);
  scanf("%d %d",&JP, &TotK);
  sel= (-1*Ka)+Kb;
  kali=Ka*JP;
  seli=TotK-kali;
  
  if( seli % sel != 0)
  {
      des=1;
  }
  else
  {
      des=0; 
      Jb=seli/sel;   
  }
                
  Ja=JP-Jb;
  
  if(Ja==0 || Jb==0 || Ja < 0 || Jb < 0 ||des==1)
  {
           printf("mustahil\n");
  }
  else
  {
   printf("%d %d\n", Ja, Jb);    
  }
  
  
return 0;
}