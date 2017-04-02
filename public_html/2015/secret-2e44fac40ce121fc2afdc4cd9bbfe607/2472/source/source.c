#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <limits.h>

int main() {
	int n;
	unsigned long long x;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%u", &x);
		if (x < ULONG_MAX) {
			printf("true\n");
		} else printf("false\n");
	}
	/*
	unsigned int t;
	char[] s;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%I64_t", &t);
		if (t > 65535) {
			printf("false\n");
		}
		else printf("true\n");
	}
*/	return 0;
}

/*
ulong
stdint.h
ull
*/