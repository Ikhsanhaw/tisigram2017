#include <stdio.h>

int main() {
	int i, baca, big=0;

	scanf("%d", &i);

	while(i--) {
		scanf("%d",&baca);
		if (baca > big) {
			big = baca; } }

	printf("%d\n", big);

	return 0; }

