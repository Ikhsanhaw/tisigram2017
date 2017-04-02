#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
	char input;
	scanf("%c",&input);
	char lower = tolower(input);
	if (lower=='a' || lower=='i' || lower=='u' || lower=='e' || lower=='o') {
		printf("True\n");
	}
	else printf("False\n");
	return 0;
}