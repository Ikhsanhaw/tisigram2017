#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//bismillah
int main()
{
    int x,i,z,p,u;
    
    scanf("%d", &x);
    
    int A[x];
    
    i=1;
    z=0;
    p=0;
    u=1;
    
    
    while (i<=x)
    {
          if (x != i)
          {
           if (x%i==0)
           {
             z = z+1;                
             A[u] = i;
           }
           else
           {
               A[u] = 0;
           }
          }
       
          i=i+1;
          
          p=p+A[u];
          
    }  
    
    

    
    if (p==x)
    {
             printf("Angka Sempurna\n");
    }        
    else
    {
             printf("Bukan Angka Sempurna\n");
    }
//akhirnya bisa juga

    getch();
    return 0;
}
