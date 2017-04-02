#include <stdio.h>

int main() {
	// freopen("M.in", "r", stdin);
	char a, b;
	scanf("%c%*c%c", &a, &b);
	for (a--; a != b; a--) {
		printf("%c\n", a);
	}
	return 0;
}