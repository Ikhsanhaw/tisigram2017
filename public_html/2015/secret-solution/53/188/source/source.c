/* Wisuda Bulan April - Solusi
 * Author: Muhammad Saiful Islam
 * Date: 06/04/2016
 * Version: 00
 */
 
#include <stdio.h>
#include <stdlib.h>
 
int compare(const void *a, const void *b) {
	return *(long long int *)a - *(long long int *)b;
}
 
int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n, m;
		scanf("%d %d", &n, &m);

		long long int charles[n], muntu[m];
 
		int i;
		for (i = 0; i < n; i++) scanf("%lld", &charles[i]);
		for (i = 0; i < m; i++) scanf("%lld", &muntu[i]);
 
		if (n > m) {
			printf("Muntu kalah\n");
			continue;
		}
 
		qsort(charles, n, sizeof(long long int), compare);
		qsort(muntu, m, sizeof(long long int), compare);
 
		long long int count = 0LL;
		int j;
 
		i = 0;
		for (j = 0; j < m && i < n; j++) {
			if (charles[i] <= muntu[j]) {
				count += muntu[j];
				i++;
			}
		}
 
		if (i == n) {
			printf("%lld\n", count);
		} else {
			printf("Muntu kalah\n");
		}
	}
	return 0;
}