#include <stdio.h>
#include <math.h>

int main() {
	int n, total;
	
	scanf("%d", &n);
	
	total = floor( ((float)n/2) + ((float) n/3) + ((float)n/4) );
	
	printf("%d\n", total);
	
	return 0;
}
