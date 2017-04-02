#include <stdio.h>

int main(){
	int n, j;
	scanf("%d", &n);
	scanf("%d", &j);
	printf("%d %d\n", n/j, mod(n,j));
	
	return 0;
}
