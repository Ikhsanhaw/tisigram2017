#include <stdio.h>
#include <stdlib.h>

int main() {
	long x1, x2, y1, y2;

	scanf("%ld %ld %ld %ld", &x1, &y1, &x2, &y2);

	printf("%ld\n", abs(x1-x2)+abs(y1-y2));

	return 0; }

