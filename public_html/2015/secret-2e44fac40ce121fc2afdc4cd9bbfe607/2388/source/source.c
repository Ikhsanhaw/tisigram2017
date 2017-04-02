#include<stdio.h>

int main()
{
    int n,kelahiran,kematian,temp1,temp2;
    
    scanf("%d%d%d",&n,&kelahiran,&kematian);
    printf("%d\n",n);
    
    if(n<=0 && kelahiran!=0)
    {    
     printf("mustahil!\n");
    }
    else
    {
        temp1=kelahiran+n;
        printf("%d\n",temp1);
    }
    if(n-kematian<0)
    { 
        printf("mustahil!\n");
    }
    else
    {
        temp2=n-kematian;
        printf("%d\n",temp2);
    }
    return 0;
}
