#include <stdio.h>

int main() {
	int x,y,cek,i;
	scanf("%d %d", &x, &y);
	cek = y % 2;
	
	for (i = 1; i <= x; i++) {
		if (i % 2 == cek) {
			printf("%d\n", i); } }
	return 0; }
