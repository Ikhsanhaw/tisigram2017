#include <stdio.h>

int main()
{
	int jl, bil, i;
	
	scanf("%d", &jl);
	scanf("%d", &bil);
	
	if(bil%2==0)
	{
		i=2;
		while(i<=jl)
		{
			printf("%d\n", i);
			i=i+2;
		}	
	}
	else if(bil%2==1)
	{
		i=1;
		while(i<=jl)
		{
			printf("%d\n", i);
			i=i+2;
		}
	}
	return 0;
}
