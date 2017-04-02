#include <stdio.h>
#include <stdlib.h>

int arr[100005];
int u_arr[100005];
int c_arr[100005];

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main() {
	// freopen("F.in", "r", stdin);
	
	int n;
	scanf("%d", &n);
	int idx = 0;
	for (idx = 0; idx < n; ++idx) {
		scanf("%d", arr+idx);
		u_arr[idx] = -1;
		c_arr[idx] = 0;
	}

	qsort(arr, n, sizeof(int), cmpfunc);

	// create an unique array;
	int i, j = 0;
	u_arr[0] = arr[0];
	c_arr[0] = 1;
	for (i = 1; i < n; ++i) {
		if (u_arr[j] != arr[i]) {
			++j;
		}
		c_arr[j]++;
		u_arr[j] = arr[i];
	}

	for (i = 0; i <= j; ++i) {
		if (c_arr[i] > u_arr[i]) {
			puts("-1");
			return 0;
		}
	}
	long long max_val = u_arr[j];
	long long ans = 0;
	ans = max_val*(max_val+1)/2;
	printf("%lld\n", ans);


	return 0;
}