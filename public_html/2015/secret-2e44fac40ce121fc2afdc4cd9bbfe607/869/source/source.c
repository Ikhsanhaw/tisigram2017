#include<stdio.h>

int main()
{
	int st;
	int ms;
	
	scanf("%d", &st);
	scanf("%d", &ms);
	
	if(st*2 > ms)
	{
		printf("PERANG\n");
	}
	else
	{
		printf("MUNDUR\n");
	}
}
