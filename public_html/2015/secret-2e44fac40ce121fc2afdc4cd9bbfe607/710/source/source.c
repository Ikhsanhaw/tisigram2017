#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
	int x1, y1, x2, y2;
	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	int distance = abs(x1-x2) + abs(y1-y2);
	printf("%d\n",distance);
	return 0;
}