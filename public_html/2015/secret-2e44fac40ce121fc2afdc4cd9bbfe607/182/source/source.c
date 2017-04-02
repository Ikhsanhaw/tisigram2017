#include <stdio.h>

int main() {
	char h1, h2;
	int i, j, k;

    scanf("%c %c", &h1, &h2);

    for (i = h1-1; i > h2; i--) {
        printf("%c\n", i); }

	return 0; }
