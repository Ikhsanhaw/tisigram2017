#include<stdio.h>

int main()
{
	int i,m,n;
	
	scanf("%d%d",&m,&n);
	
	if(n%2==0)
	{
		for(i=2;i<=m;i=i+2)
		{
			printf("%d\n",i);
		}
	
	}
	else
	{
		for(i=1;i<=m;i=i+2)
		{
			printf("%d\n",i);
		}
	}
	
	return 0;
}
