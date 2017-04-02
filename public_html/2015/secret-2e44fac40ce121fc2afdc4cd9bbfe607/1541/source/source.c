#include <stdio.h>
int main ()
{
    int a,i;
    scanf("%d",&a); 
    if ((a>=1) && (a<=100))
    {
               for (i=1;i<=a;i++)
               {
                 printf ("Halo, Indah!\n");
               }
    }
    return 0;
    }
