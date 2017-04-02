#include <stdio.h>

int main() {
	int x,count=0,i; 
	long y;
	scanf("%d", &x);
	
	for (i = 0; i < x*x; i++) {
		scanf("%ld", &y);
		if (y % 2 == 0 && y % 3 == 0) {
			 count++; } }
	printf("%d\n", count);
	return 0; }
