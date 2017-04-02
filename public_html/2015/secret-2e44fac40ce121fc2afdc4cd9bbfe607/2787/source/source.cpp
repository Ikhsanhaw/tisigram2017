#include <stdio.h>

int main()
{
	int A=0,N,i;
	scanf("%d", &N);
	for(i=0;i<N;i++)
	{
		A=A+2;
	}
	N=N*A;
	printf("%d\n", N);
	return 0;
}
