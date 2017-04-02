/* Wisuda Bulan April - Solusi
 * Author: Muhammad Saiful Islam
 * Date: 06/04/2016
 * Version: 00
 */

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
	return *(int *)a - *(int *)b;
}

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n, m;
		scanf("%d %d", &n, &m);

		int charles[n], muntu[m];

		int i;
		for (i = 0; i < n; i++) scanf("%d", &charles[i]);
		for (i = 0; i < m; i++) scanf("%d", &muntu[i]);

		if (n > m) {
			printf("Muntu kalah\n");
			continue;
		}

		qsort(charles, n, sizeof(int), compare);
		qsort(muntu, m, sizeof(int), compare);

		int count = 0;
		int j;

		i = 0;
		for (j = 0; j < m && i < n; j++) {
			if (charles[i] <= muntu[j]) {
				count += muntu[j];
				i++;
			}
		}

		if (i == n) {
			printf("%d\n", count);
		} else {
			printf("Muntu kalah\n");
		}
	}
	return 0;
}