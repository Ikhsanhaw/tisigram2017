#include<stdio.h>

int main()
{
	int N, j=0, Bilangan;
	int X[100];
	scanf("%d", &N);
	while(j<N)
	{	scanf("%d", &X[j]);
		j++;	}
	Bilangan=X[0];
	j=1;
	while(j<N)
	{	if(X[j]>Bilangan)
		{	Bilangan=X[j];	}
		j++;	}
	printf("%d\n", Bilangan);
	return 0;
}
