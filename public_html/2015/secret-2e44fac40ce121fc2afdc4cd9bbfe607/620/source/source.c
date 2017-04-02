#include <stdio.h>

int main() {
	// freopen("L.in", "r", stdin);
	int a, b;
	scanf("%d %d", &a, &b);
	int i;
	for (i = b; i > b-a; --i) {
		if (i != b)
			printf(" ");
		printf("%c", 'A'+i-1);
	}
	printf("\n");
	return 0;
}