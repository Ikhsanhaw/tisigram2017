#include<stdio.h>

int main()
{
	int a,b,c,d;
	scanf("%d", &a);
	scanf("%d", &b);
	if (b % 2 == 0)
	{
		for (c=2;c<=a;c++)
		printf("%d\n", c);
	}
	else if (b % 2 == 1){
		for(c=1;c<=a;c=c+2)
		printf("%d\n",c);
	}
	
	return 0;	
}
