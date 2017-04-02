#include <stdio.h>

int main() {
	// freopen("M.in", "r", stdin);
	char a, b;
	scanf("%c%*c%c", &a, &b);
	if (a == b) {
		printf("\n");
		return 0;
	}
	for (a--; a != b; a--) {
		printf("%c\n", a);
	}
	return 0;
}