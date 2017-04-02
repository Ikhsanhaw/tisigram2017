#include<stdio.h>

int main()
{
	unsigned int S, M;
	scanf("%u\n", &S);
	scanf("%u", &M);
	S=S*2;
	if(S>=M)
	{
		printf("PERANG");
	}
	else
	{
		printf("MUNDUR");
	}
	return 0;
}

