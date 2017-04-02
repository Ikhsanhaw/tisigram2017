#include <stdio.h>

int main() {
	// freopen("J.in", "r", stdin);

	int s, m;
	scanf("%d %d", &s, &m);
	s <<= 1;

	if (s >= m) {
		puts("PERANG");
	} else {
		puts("MUNDUR");
	}

	return 0;
}