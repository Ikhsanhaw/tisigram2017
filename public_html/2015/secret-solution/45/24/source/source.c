#include <stdio.h>

int main() {
	int X, H;
	scanf("%d %d", &X, &H);

	if (X == 0) {
		printf("mustahil\n");
		return 0;
	}

	int res = H / X;
	if (H % X > 0) res++;

	printf("%d\n", res);
	return 0;
}