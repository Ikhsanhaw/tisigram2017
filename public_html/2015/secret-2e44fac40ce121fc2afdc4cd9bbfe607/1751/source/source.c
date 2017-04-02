#include <stdio.h>

int main() {
	int n,x;
	float sum;
	int a[101];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &x);
		sum = 0;
		for (int j = 0; j < x; j++) {
			scanf("%d", &a[j]);
			sum+= a[j];
		}
		printf("%.2f\n", sum/3); 
	}
	return 0;
}