#include <stdio.h>

int main() {
	int n, total;
	
	scanf("%d", &n);
	
	total = ceil(n/2) + ceil(n/3) + ceil(n/4);
	
	printf("%d\n", total);
	
	return 0;
}
