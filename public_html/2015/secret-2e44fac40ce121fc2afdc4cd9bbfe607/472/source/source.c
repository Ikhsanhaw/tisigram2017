#include <stdio.h>

int main ()
{
	char huruf;
	scanf("%c",&huruf);
	
	if (huruf=='A' || huruf=='I' || huruf=='U' || huruf=='E' || huruf=='O' || huruf=='a'|| huruf=='i'|| huruf=='u'|| huruf=='e'|| huruf=='o')
	{
		printf("True\n");
	}
	else
	{
		printf("False\n");
	}
	return 0;
}
