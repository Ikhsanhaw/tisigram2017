#include <stdio.h>


int main ()
{
	unsigned int S, M;
	scanf("%d\n%d", &S, &M);
	if (M<=2*S)
	{
		printf("PERANG\n");	
	}
	else
	{
		printf("MUNDUR\n");
	}
	
	return 0;
}
