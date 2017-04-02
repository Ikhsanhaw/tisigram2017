#include<stdio.h>

int main()
{
int k,l,m, n, o, p, q;
scanf("%d\n",&k);
scanf("%d %d",&l,&m);

n=(l-m)/k;
for(o=0;o<k;o++)
{
q=m+n;
printf("%d - %d\n",m,q);
m=q+1;
}


return 0;
}

