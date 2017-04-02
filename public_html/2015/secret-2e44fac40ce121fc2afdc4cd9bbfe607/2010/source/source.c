#include<stdio.h>

int main()
{
	int x,j,i;
	scanf("%d", &x);
	i = 0;
	i = 2*x;
	
	if (i%2 == 0)
	{
		j = x*i;
		printf("%d", j);
	}
	i++;
	printf("\n");
	return 0;
}
