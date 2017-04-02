#include <stdio.h>
#include <math.h>

int __gcd(int a, int b) {
	if (a >= b) {
		if (b == 0)
			return a;
		return __gcd(b, a%b);
	}
	return __gcd(b, a);
}

int main() {
	// freopen("E.in", "r", stdin);
	
	int n;
	scanf("%d", &n);
	while (n--) {
		int a, b;
		scanf("%d %d", &a, &b);
		int div = __gcd(a, b);
		printf("%d/%d\n", b/div, a/div);
	}
	return 0;
}