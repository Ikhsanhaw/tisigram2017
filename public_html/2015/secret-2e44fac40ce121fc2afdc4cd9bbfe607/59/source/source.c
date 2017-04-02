#include <stdio.h>
#include <string.h>

int main() {
	char kata[10];
	int i;

	for (i = strlen(kata)-1; i >= 0, i--) {
		printf("%c", kata[i]); }
	printf("\n");

	return 0; }