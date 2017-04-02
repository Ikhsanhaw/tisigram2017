#include <stdio.h>

int main() {
	int n;
	long int sum;
	int a[6];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		sum = 0;
		for (int j = 0; j < 6; j++) {
			scanf("%d", &a[j]);
			sum+= a[j];
		}
		printf("%ld\n", sum);
	}
	return 0;
}