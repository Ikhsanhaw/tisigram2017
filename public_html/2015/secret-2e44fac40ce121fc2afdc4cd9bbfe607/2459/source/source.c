#include<stdio.h>

int main()
{
    int p,k,n,i,temp1,temp2;
    
    scanf("%d%d%d",&p,&k,&n);
    int A[k];
    
    for(i=0;i<=k;i++)
    {
     A[i]=i;
    }
    
    temp1=A[p];
    temp2=n-k;
    printf("%d",A[temp2-1]);
    
    return 0;    
}
