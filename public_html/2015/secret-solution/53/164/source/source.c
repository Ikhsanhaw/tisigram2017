/* Wisuda Bulan April - Solusi
 * Author: Muhammad Saiful Islam
 * Date: 06/04/2016
 * Version: 00
 */

#include <stdio.h>
#include <stdlib.h>

int charles[20005], muntu[20005];

void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

void bSort1(int N){
	int i,j;
	for ( i = 0 ; i < N-1 ; i++){
		for ( j = i + 1 ; j < N ;j++){
			if (charles[i] > charles[j]) swap(&charles[i],&charles[j]);
		}
	}
}
void bSort2(int N){
	int i,j;
	for ( i = 0 ; i < N-1 ; i++){
		for ( j = i + 1 ; j < N ;j++){
			if (muntu[i] > muntu[j]) swap(&muntu[i],&muntu[j]);
		}
	}
}

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n, m;
		scanf("%d %d", &n, &m);

		int i;
		for (i = 0; i < n; i++) scanf("%d", &charles[i]);
		for (i = 0; i < m; i++) scanf("%d", &muntu[i]);

		if (n > m) {
			printf("Muntu kalah\n");
			continue;
		}

		bSort1(n);
		bSort2(m);

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