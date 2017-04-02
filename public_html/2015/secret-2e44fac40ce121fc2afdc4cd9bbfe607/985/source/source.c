#include<stdio.h>

int main()
{
	int S, M;
	scanf("%d\n", &S);
	scanf("%d", &M);
	if(S>=1 && M>=1)
	{
	S=S*2;
	if(S>=M)
	{
		printf("PERANG");
	}
	if (S<M)
	{
		printf("MUNDUR");
	}
}
}

