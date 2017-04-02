#include <stdio.h>

int main ()
{
    int a, temp, i;
    int x[a];
    scanf("%d\n",&a);
for (i=0;i<a;i++)
{
        scanf("%d\n",x[i]);
        }
i = 0;
while (x[i]>x[i+1])
{
x[a/2+i]=temp;
x[a/2+i]=x[i];
x[i]=temp;
      i++;
      }
      
for (i=0;i<a;i++)
{
        printf("%d\n",x[i]);
        }
        
                   return 0;
                   }
         
