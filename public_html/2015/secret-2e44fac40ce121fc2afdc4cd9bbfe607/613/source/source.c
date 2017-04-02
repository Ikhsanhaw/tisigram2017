#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if (a >= 50000)
		printf("%d\n", a*b/100);
	else
		printf("%d\n", a);
	return 0;
}