#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, n, max, idxmax;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		scanf("%d", &b);
		int arr[a+2][b+1];
		for (int l = 1; l <= a; l++)
			arr[4][l] = 0;
		for (int j = 1; j <= a; j++) {
			for (int k = 1; k <= b; k++) {
				scanf("%d", &arr[j][k]);
				arr[4][j] += arr[k][j];
			}
		}
		max = arr[4][1];
		idxmax = 1;
		for (int m = 2; m <= a; m++)
			if (arr[4][m] > max) {
				max = arr[4][m];
				idxmax = m;
			}
		printf("%d\n",  idxmax);

	}
	return 0;
}