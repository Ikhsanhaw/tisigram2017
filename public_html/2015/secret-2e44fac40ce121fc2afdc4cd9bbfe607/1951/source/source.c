#include<stdio.h>

int main()
{
    int x,y,z, m;
    
    scanf("%d" , &x);
    scanf("%d" , &y);
    scanf("%d" , &z);
    
    m=x+y+z;
    if (m<10000 || m>0)
    {
    printf("%d", m);
    }
}
   
  
