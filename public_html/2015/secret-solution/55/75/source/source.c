#include <stdio.h>

int main()
{
	int N,M,L,jmlLahir,jmlMati;
	
	scanf("%d",&N);
	scanf("%d",&L);
	scanf("%d",&M);
	
	jmlLahir=N+L;
	jmlMati = N-M;
	
	
	printf("%d\n",N);
	printf("%d\n",jmlLahir);
	
	if(N-M==0)
	{
		printf("mustahil!");
	}
	else if(N-M>0)
	{
		printf("%d\n",jmlMati);
	}
	
}
