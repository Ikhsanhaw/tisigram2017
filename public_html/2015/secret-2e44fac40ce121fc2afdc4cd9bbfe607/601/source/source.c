#include <stdio.h>
#include <math.h>

int main() {
	long long x1, y1, x2, y2;
	scanf("%lld %lld %lld %lld", &x1, &y1, &x2, &y2);
	long long ans = abs(x1-x2)+abs(x2-y2);
	printf("%lld\n", ans);
	return 0;
}