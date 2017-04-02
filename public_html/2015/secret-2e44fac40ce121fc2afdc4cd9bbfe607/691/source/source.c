#include <stdio.h>
#include <string.h>

int main()
{
	char a[11];
	fgets(a, 11, stdin);
	int b = strlen(a);
	char c[11];
	int i = 0;
	while(i <= b){
		c[i] = a[b-i-1];
		i++;
	}
	c[b] = '\0';
	printf("%s\n", c);
	return 0;
}