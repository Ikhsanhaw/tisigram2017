#include<stdio.h>
int main()
{
	int S,M;
	scanf("%d",&S);
	scanf("%d",&M);
	if(M<=S*2)
	{
		printf("PERANG");
	}
	else
	{
		printf("MUNDUR");
	}
	printf("\n");
	return 0;
}