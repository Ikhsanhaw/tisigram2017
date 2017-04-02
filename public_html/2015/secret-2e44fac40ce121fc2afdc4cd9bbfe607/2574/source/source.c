#include <stdio.h>

long fakto(long x) {
	return x > 1 ? x*fakto(x-1) : 1; }

int main() {
	long x, i, j;
	scanf("%ld", &x);

	for (i = 0;i < x;i++) {
		for (j = 0; j <= i; j++) {
			printf("%ld", fakto(i)/(fakto(j)*fakto(i-j))); 
			if (j != i) {
				printf(" "); }
			else {
				printf("\n"); } } }
	return 0; }
