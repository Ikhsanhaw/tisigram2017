#include<stdio.h>


int main()
{
    int x,i,y;
    
    scanf("%d",&x);
    i=1;
    y=0;
    while(i<=100 && i<x)
    {
                 if(x%i==0)
                 {y=y+i;}
                 i++;
    }
    if(x==y)
    {printf("Angka Sempurna\n");}
    else
    {printf("Bukan Angka Sempurna\n");}

    return 0;
}
