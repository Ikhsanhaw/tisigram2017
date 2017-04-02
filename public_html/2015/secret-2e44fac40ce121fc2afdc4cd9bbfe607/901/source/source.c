#include<stdio.h>

int main()
{
	unsigned int S, M;
	scanf("%u", &S);
	scanf("%u", &M);
	
	if((2*S)>=M)
	{
		printf("PERANG");
	}
	else
	{
		printf("MUNDUR");
	}
}

