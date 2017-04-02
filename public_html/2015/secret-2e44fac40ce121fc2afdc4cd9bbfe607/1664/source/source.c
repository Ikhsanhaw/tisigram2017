#include<stdio.h>
int main ()
{
 int TC, A[6],i, j, count;
 scanf("%d", &TC);
 int T[TC];
 
 for(i=1; i<=TC; i++)
 {
          count=0;
          for(j=1; j<=6; j++)
          {
             scanf("%d",&A[j]);         
          }
          
          for(j=1; j<=6; j++)
          {
             count=count+A[j];      
          }
          T[i]=count;  
 }
 
 for(i=1; i<=TC; i++)
 {
  printf("%d\n", T[i]);         
 }
 
return 0;
}
