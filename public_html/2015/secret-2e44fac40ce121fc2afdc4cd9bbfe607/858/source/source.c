#include <stdio.h>
#include <string.h>

int main() {
	char kata[50];
	int count;

	scanf("%d", &count);

	while (count--) {
		scanf("%s", &kata);
		for (int j = 0; j < strlen(kata); j++) {
			int x = kata[j];
			if (x % 2 == 0) {
				printf("%c", kata[j]); } }
		printf("\n"); }

		return 0; }
			
