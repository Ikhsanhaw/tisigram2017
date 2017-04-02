#include<stdio.h>

int main()
{
	long S, M;
	
	scanf("%d",&S);
	scanf("%d",&M);
		
		if(M<=S*2)
		{
			printf("PERANG");
		}
		else
		{
			printf("MUNDUR\n");
		}
	return 0;
}
