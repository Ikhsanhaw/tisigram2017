#include<stdio.h>

int main()
{
    int a,X,Y;
    
    scanf("%d%d",&X,&Y);
    
     if(Y%2==0)
     {
       a=2;         
       while(a<=X)
       {
         printf("%d",a);
         a=a+2;
         if(a<=X)
          {
                  printf("\n");
          }   
       }
     }
     else
     {
         a=1;
         while(a<=X)
         {
          printf("%d",a);
          a=a+2;
          if(a-1<X)
          {
                  printf("\n");
          }
         }
     }
     printf("\n");

    return 0;
}
