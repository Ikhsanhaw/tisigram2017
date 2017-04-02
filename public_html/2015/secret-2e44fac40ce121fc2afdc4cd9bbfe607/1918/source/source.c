#include<stdio.h>

int main()
{
    int X,H,hari,temp;
    
    scanf("%d%d",&X,&H);
    
    if(X!=0)
    {
     hari=H/X;
     temp=X*hari;
     hari=hari+(H-temp);
     printf("%d\n",hari);       
    }
    else
    {
        printf("mustahil\n");
    }
    return 0;
}
