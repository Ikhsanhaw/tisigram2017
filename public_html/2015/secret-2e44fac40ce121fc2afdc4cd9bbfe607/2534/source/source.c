#include<stdio.h>

int main()
{
	int p,k,n,i,j;
	
	scanf("%d%d%d",&p,&k,&n);
	
	j=p;
	
	while(n--)
	{
		p++;
		
		if(p==k+1)
		{
			p=0;
		}
	}
	printf("%d\n",p);
	
	return 0;
}
