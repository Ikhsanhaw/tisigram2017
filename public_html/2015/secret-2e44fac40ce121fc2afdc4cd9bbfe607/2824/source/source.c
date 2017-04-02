#include<stdio.h>
int main()
{
	int a,b,c,n,d;
	b=6;
	d=20;
	scanf("%d", &a);
	n=a*b;
	if (n/d>0)
	{
	c=n/d;
	n=n+c;
	c=c*b;
	n=n+c;}
	
	n=n+a; 
	printf("%d\n", n);
	return 0;
}

