#include <stdio.h>

int main ()
{
    int a, temp, i;
    int x[a];
    scanf("%d",&a);
for (i=1;i<=a;i++)
{
        scanf("%d",&x[i]);
        }
for (i=1;i<=a;i++)
{
      if(x[i]>x[i+1])
      {
                     x[a/2+i]=temp;
                     x[a/2+i]=x[i];
                     x[i]=temp;
                     }
      }
      
for (i=1;i<=a;i++)
{
        printf("%d\n",x[i]);
        }
        
                   return 0;
                   }
         
