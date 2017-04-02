#include<stdio.h>

int main()
{
    int N,A;
    scanf("%d",&N);
    
    if(N<3)
    {N=N*7;}
    else if(N<6)
    {N=N*7+7;}
    else if(N<9)
    {N=N*7+7+7;}
    else if(N<12)
    {N=N*7+7+7+7;}
    else if(N<15)
    {N=N*7+7+7+7+7;}
    
printf("%d",N);

  
return 0;
}

