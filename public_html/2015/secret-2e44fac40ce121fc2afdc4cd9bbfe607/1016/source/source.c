#include <stdio.h>
#include <stdlib.h>

int gcd(int n, int m)
{
	int gcd, sisa;
 	while (n != 0)
	{
		sisa = m % n;
		m = n;
		n = sisa;
	}
	gcd = m;
	return gcd;
}

int main() {
	int n, a, b, na, nb;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		scanf("%d", &b);
		na = a / gcd(a, b);
		nb = b / gcd(a, b);
		printf("%d/%d\n", nb, na);
	}
	return 0;
}

