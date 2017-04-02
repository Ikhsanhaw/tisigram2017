#include <stdio.h>

int main() {
	long x,y,z,i;
	scanf("%ld%ld%ld", &x, &y, &z);
		for (i = 0; i < z; i++) {
			x++;
			if (x > y) {
				x = 0; } }
	printf("%ld\n", x);
	return 0; }
