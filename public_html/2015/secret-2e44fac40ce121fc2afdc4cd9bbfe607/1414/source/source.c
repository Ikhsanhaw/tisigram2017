#include<stdio.h>

int main()
{
	int N, M;
	int B, Mo;
	scanf("%d", &N);
	scanf("%d", &M);
	B=N/M; 
	Mo=N%M;
	printf("%d %d\n", B, Mo);
	return 0;
}
