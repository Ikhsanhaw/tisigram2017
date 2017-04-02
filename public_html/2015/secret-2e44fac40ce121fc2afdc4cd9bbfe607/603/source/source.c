#include <stdio.h>
#include <math.h>

long long absl(long long a) {
	if (a < 0)
		return -a;
	return a;
}

int main() {
	// freopen("H.in", "r", stdin);
	long long x1, y1, x2, y2;
	scanf("%lld %lld %lld %lld", &x1, &y1, &x2, &y2);
	long long ans = absl(x1-x2)+absl(y1-y2);
	printf("%lld\n", ans);
	return 0;
}