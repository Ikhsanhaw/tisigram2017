#include<stdio.h>

int main()
{
    int X,H;
    int hari;
    
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
    getch();
    return 0;
}
