#include<stdio.h>

int main()
{
	int i,x,y,z;
	
	y=0;
	scanf("%d",&x);
	for(i=0;i<x*x;i++)
	{
		scanf("%d",&z);
		if(z%2==0 && z%3==0)
		{
			y++;
		}
	}
	printf("%d\n",y);
	
	return 0;
}
