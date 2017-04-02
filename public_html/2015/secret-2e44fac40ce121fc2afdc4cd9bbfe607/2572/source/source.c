#include <stdio.h>

int fakto(int x) {
	return x > 1 ? x*fakto(x-1) : 1; }

int main() {
	int x, i, j;
	scanf("%d", &x);

	for (i = 0;i < x;i++) {
		for (j = 0; j <= i; j++) {
			printf("%d", fakto(i)/(fakto(j)*fakto(i-j))); 
			if (j != i) {
				printf(" "); }
			else {
				printf("\n"); } } }
	return 0; }
