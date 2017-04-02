#include <stdio.h>
#include <limits.h>

int main() {
	int n;
	scanf("%d", &n);
	int ans = INT_MIN;
	while (n--) {
		int val;
		scanf("%d", &val);
		if (ans < val) {
			ans = val;
		}
	}
	printf("%d\n", ans);
}