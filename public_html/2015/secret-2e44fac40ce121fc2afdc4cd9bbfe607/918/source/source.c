#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int n;
	scanf("%d",&n);
	int it;
	for (it=0; it<n; it++) {
		int a, b;
		scanf("%d %d",&a, &b);
		int gcd;
		int x = a;
		int y = b;
		while (x!=0 && y!=0) {
			if (x>=y) x %= y;
			else y%=x;
		}
		if (x==0) gcd = y;
		else gcd = x;

		a /= gcd;
		b /= gcd;
		printf("%d/%d\n",b,a);
	}
	return 0;
}