#include <stdio.h>

int main(){
	long int x1, x2, y1, y2;
	scanf("%ld %ld %ld %ld", &x1, &y1, &x2, &y2);
	printf("%lld\n", abs(x1-x2) + abs(y1-y2));
	return 0;
}
