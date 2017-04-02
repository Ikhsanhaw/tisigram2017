#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, n, max, idxmax, maks, idxmaks;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		scanf("%d", &b);
		int arr[a+2][b+1];
		for (int l = 1; l <= b; l++)
			arr[a+1][l] = 0;
		for (int j = 1; j <= a; j++) {
			maks = arr[j][1];
			for (int k = 1; k <= b; k++) {
				scanf("%d", &arr[j][k]);
				if (maks < arr[j][k]) {
					maks = arr[j][k];
					idxmaks = k;
				}
			}
			arr[a+1][idxmaks] += 1;
		}

		max = arr[a+1][1];
		idxmax = 1;
		for (int m = 2; m <= a; m++) {
			if (arr[a+1][m] > max) {
				max = arr[a+1][m];
				idxmax = m;
			}
		}
		printf("%d\n",  idxmax);
	}

	return 0;
}