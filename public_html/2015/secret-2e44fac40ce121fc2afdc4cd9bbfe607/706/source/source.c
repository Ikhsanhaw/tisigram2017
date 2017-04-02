#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
	int N;
	scanf("%d",&N);
	double fahrenheit = (9.0/5.0)*(double)N + 32.0;
	printf("%.2lf\n",fahrenheit);
	return 0;
}