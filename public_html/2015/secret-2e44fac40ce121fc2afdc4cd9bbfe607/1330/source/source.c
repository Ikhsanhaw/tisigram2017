#include<stdio.h>
#include<string.h>

void pola1(int N);
void pola2(int N);
void pola3(int N);
	
int main()
{
	int N,n[100], kata[100],i,j,m;
	
	scanf("%d", &N);
	
	if(N > 1)
	{
	pola1(N);
	pola2(N);
	pola3(N);
	pola1(N);
	pola2(N);
	}
	
	printf("*\n");
	
	return 0;
}
void pola1(int N)
{
	int i, j;
for (i=1; i<N-1; i++){
		printf("*\n");
		printf("*");
		for(j=0; j<i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

void pola2(int N)
{
	int i,j;
for (i=N-3; i>=1; i--){
		printf("*\n");
		printf("*");
		for(j=0; j<i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

void pola3(int N)
{
	int i;
printf("*\n");
	for (i=0; i<N; i++)
	{
		printf("*");
	}
	printf("\n");
}
