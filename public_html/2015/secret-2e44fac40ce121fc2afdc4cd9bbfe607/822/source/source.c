#include<stdio.h>

int A,B;

void penjumlahan()
{
	A=A+B;
	printf("%d\n",A);
}

void pengurangan()
{
	A=A-B;
	A=A-B;
	printf("%d\n",A);
}

void perkalian()
{
	A=A+B;
	A=A*B;
	printf("%d\n",A);
}

int main()
{
	
	scanf("%d",&A);
	scanf("%d",&B);
	
	penjumlahan();
	pengurangan();
	perkalian();
	
	return 0;
}
