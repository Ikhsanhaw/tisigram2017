#include <cstdio>

int main() {
	// freopen("C.in", "r", stdin);
	char c;
	scanf("%c", &c);
	if (c >= 97)
		c -= 32;
	if ((c == 'A') || (c == 'E') || (c == 'I') || (c == 'O') || (c == 'U')) {
		puts("True");
	} else {
		puts("False");
	}
	return 0;
}