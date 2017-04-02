#include<stdio.h>

int main()
{
	int s,m;
	
	scanf("%d", &s);
	scanf("%d", &m);
	
	
if (m>=s)
{
	s =s*2;
}
if (s>=m)
{
	printf("PERANG");
}
else
{
	printf("MUNDUR");
}
		
	return 0;
}
	
	
