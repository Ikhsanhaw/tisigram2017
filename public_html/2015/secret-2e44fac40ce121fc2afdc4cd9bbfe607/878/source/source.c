#include<stdio.h>

int main()
{
int S, M;
scanf("%d", &S);
scanf("%d", &M);
if(S<=1 && M<=1)
{
if((2*M)<=S)
{
	printf("PERANG");
}
else
{
	printf("MUNDUR");
}
}
}
