#include <stdio.h>
#include <string.h>

int main() {
	// freopen("B.in", "r", stdin);
	char c[1000];
	scanf("%10s", c);
	int i = 0, j = strlen(c)-1;
	while (i < j) {
		char temp = c[i];
		c[i] = c[j];
		c[j] = temp;
		++i, --j;
	}
	printf("%s\n", c);
}