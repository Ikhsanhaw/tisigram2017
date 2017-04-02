#include <stdio.h>

int main() {
	// freopen("N.in", "r", stdin);
	int nt;
	scanf("%d", &nt);
	while (nt--) {
		int n;
		scanf("%d", &n);
		int remed = 0;
		while (n--) {
			int val;
			scanf("%d", &val);
			if (val < 60) {
				remed = 1;
			}
		}
		if (remed) {
			puts("anda harus remedial");
		} else {
			puts("lulus");
		}
	}
	return 0;
}