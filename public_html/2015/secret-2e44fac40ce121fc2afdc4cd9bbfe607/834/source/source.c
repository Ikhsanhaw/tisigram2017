#include<stdio.h>

int main()
{
	int S, M;
	scanf("%d", &S);
	scanf("%d", &M);
	if(M<=S*2)
	{	printf("PERANG\n");	}
	else if(M>S*2)
		{	printf("MUNDUR\n");	}
	return 0;
}
