#include <stdio.h>

int main() {
	int i,j, k;

    scanf("%d %d", &i, &j);

    for (k = j; k > i; k--) {
        printf("%c", 64+k);
        if (k != i) {
            printf(" "); }
        else {
            printf("\n"); } }

	return 0; }
