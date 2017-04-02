#include <stdio.h>

int main() {
	int P, K, N;
	scanf("%d %d %d", &P, &K, &N);
	printf("%d\n", (P + N) % (K + 1));
	return 0;
}