#include<stdio.h>

int main()
{
	int n,kelahiran,kematian;
	
	scanf("%d%d%d",&n,&kelahiran,&kematian);
	
	printf("%d\n",n);
	
	if(n==0 && kelahiran!=0)
	{
		printf("mustahil!\n");
	}
	else
	{
		printf("%d\n",n+kelahiran);
	}
	
	if(n-kematian<=0)
	{
		printf("mustahil!\n");
	}
	else
	{
		printf("%d\n",n-kematian);
	}
	return 0;
}
