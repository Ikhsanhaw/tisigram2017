#include <stdio.h>
 
int main() {
	int x;
	scanf("%d", &x);
 
	printf("%d\n", x + x*6 + (x*6)/20 + ((x*6)/20)*6);
	return 0; }