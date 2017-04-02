#include <stdio.h>
#include <string.h>

int max(int a, int b) {
	return a > b ? a : b;
}

int main() {
	int x, y;

	scanf("%d %d", &x, &y);
	printf("%d\n", x + y);

	int res;
	int carry = 0;
	while (x || y || carry) {
		res = (x % 10) + (y % 10) + (carry % 10);

		printf("%d %d\n", res % 10, res / 10);

		x = x / 10;
		y = y / 10;
		carry = res / 10;
	}

	return 0;
}