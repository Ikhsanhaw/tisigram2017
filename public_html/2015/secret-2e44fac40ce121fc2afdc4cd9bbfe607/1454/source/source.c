#include <stdio.h>

int main() {
	
	int n, m, o, p;
	
	scanf("%d\n%d", &n, &m);
	
	o = n / m;
	p = n % m;
	
	printf("%d %d\n", o, p);
	
	return 0;
}
