#include<stdio.h>
int main ()
{
 int TC,i, j,N;
 scanf("%d", &TC);
 float T[TC],rata,count;
 
 for(i=1; i<=TC; i++)
 {
          count=0;
          scanf("%d", &N);
          int A[N];
          for(j=1; j<=N; j++)
          {
             scanf("%d",&A[j]);         
          }
          
          for(j=1; j<=N; j++)
          {
             count=count+A[j];      
          }
          
          rata=count/N;
          T[i]=rata;  
 }
 
 for(i=1; i<=TC; i++)
 {
  printf("%.2f\n", T[i]);         
 }
 

return 0;
}
