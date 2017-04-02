#include <stdio.h>
#include <stdlib.h>

int main() {
	unsigned int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	if ((2*a) >= b) printf("PERANG\n");
	else printf("MUNDUR\n");
	return 0;
}