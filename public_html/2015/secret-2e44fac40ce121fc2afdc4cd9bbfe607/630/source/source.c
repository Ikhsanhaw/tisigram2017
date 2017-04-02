#include <stdio.h>

int main() {
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
			puts("lulus");
		} else {
			puts("anda harus remedial");
		}
	}
	return 0;
}