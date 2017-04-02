#include <stdio.h>

long int fact(int n) {
	if (n == 0) return 1;
	else if (n == 1) return 1;
	else return (n*fact(n-1));
}

int main() {
	int n, m;
	scanf("%d %d", &m, &n);
	long int a = fact(4) / (long int) (fact(n) * fact(m-n));
	printf("%ld", a);
	return 0;
}