#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x;
    
    scanf("%d",&x);
    if(x%1==0 && x%2==0 && x%3==0)
    {printf("Angka Sempurna\n");}
    else
    {printf("Bukan Angka Sempurna\n");}

    return 0;
}
