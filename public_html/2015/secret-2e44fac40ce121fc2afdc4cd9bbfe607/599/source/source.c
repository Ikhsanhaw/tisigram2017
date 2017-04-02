#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		char s[50];
		scanf("%20s", s);
		puts(s);
	}
	return 0;
}