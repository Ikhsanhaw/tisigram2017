#include <stdio.h>

int main() {
	// freopen("J.in", "r", stdin);
	int a, b;
	scanf("%d %d", &a, &b);
	if (a >= 50000) {
		int potongan = a*b/100;
		printf("%d\n", a-potongan);
	} else
		printf("%d\n", a);
	return 0;
}