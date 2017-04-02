#include <stdio.h>

int main (){
	int x, y;
	
	scanf("%d%d", &x, &y);
	if (y == 0) {
		printf("%d %d\n", y, x); }
	else {	
		printf("%d %d\n", x/y, x%y); }
	
	return 0; }

