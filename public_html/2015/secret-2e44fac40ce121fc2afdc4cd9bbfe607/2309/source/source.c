#include<stdio.h>


int main()
{
    int x,y,n;
    
    scanf("%d",&x);
    
    y=1;
    if(y<x)
    {
           x%y==0;
           for(n=0;n<x;n++)
           {
            y+(y+n)==x;
            }
           printf("Angka Sempurna\n");
    }else{
          printf("Angka Tidak Sempurna\n");
          }
return 0;
}
