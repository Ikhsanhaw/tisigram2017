#include <stdio.h>

int main(){
	int n, j, s;
	scanf("%d", &n);
	scanf("%d", &j);
	s=n%j;
	n=n/j;
	printf("%d %d\n", n, s);
	return 0;
}
