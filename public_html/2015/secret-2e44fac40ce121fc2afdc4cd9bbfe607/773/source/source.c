#include<stdio.h>

int main()
{
	int S, M;
	
	scanf("%d",&S);
	scanf("%d",&M);
	S*2;
	if(1<=S && M<=50001)
	{
		if(M<=S)
		{
			printf("PERANG");
		}
		else
		{
			printf("MUNDUR\n");
		}
	}
	return 0;
}
