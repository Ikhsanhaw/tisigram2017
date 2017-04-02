#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
	long x1, y1, x2, y2;
	scanf("%ld %ld %ld %ld",&x1,&y1,&x2,&y2);
	unsigned long  distance = labs(x1-x2) + labs(y1-y2);
	printf("%lu\n",distance);
	return 0;
}