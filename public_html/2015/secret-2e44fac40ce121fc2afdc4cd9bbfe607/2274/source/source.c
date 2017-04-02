#include<stdio.h>

int main()
{
int i,k,n;
long j;
scanf("%d",&n);
j=n;
for(i=1;i<n;i++)
{
 j=j*n;
}
k=j%2;
printf("%d",k);
}