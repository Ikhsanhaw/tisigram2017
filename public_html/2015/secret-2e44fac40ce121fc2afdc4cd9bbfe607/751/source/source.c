#include <stdio.h>
#include <stdlib.h>

int main() {
	// freopen("D.in", "r", stdin);
	
	int nt;
	scanf("%d", &nt);
	while (nt--) {
		int k, p;
		scanf("%d %d", &k, &p);
		int *count = (int *)malloc(sizeof(int)*k);
		int idx;
		for (idx = 0; idx < k; ++idx) {
			count[idx] = 0;
		}
		while (p--) {
			int it;
			for (it = 0; it < k; ++it) {
				int val;
				scanf("%d", &val);
				count[it] += val;
			}
		}
		int win = -1;
		int win_val = -1;
		for (idx = 0; idx < k; ++idx) {
			// printf("%d\n", count[idx]);
			if (win_val < count[idx]) {
				win = idx;
				win_val = count[idx];
			}
		}
		printf("%d\n", win+1);
		free(count);
		// return 0;
	}
	return 0;
}