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
         printf("%d\n",a);
         a=a+2;   
       }
     }
     else
     {
         a=1;
         while(a<=X)
         {
          printf("%d\n",a);
          a=a+2;
         }
     }
     printf("\n");
    return 0;
}
