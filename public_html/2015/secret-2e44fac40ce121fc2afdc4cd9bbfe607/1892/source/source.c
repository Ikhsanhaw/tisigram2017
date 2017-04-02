#include<stdio.h>

int main()
{
    int X,H,hari;
    
    scanf("%d%d",&X,&H);
    
    if(X!=0)
    {
     hari=H/X;
     printf("%d\n",hari);       
    }
    else
    {
        printf("mustahil\n");
    }
    return 0;
}
