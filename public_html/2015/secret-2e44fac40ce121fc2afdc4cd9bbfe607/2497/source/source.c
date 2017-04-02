#include <stdio.h>
#include <stdlib.h>
typedef enum {false, true} bool;

int cmpfunc(const void *a, const void *b) {
	return (*(int*)a - *(int*)b);
}

/*
void bubblesort(long int T[], int n) {
	int i, pass, temp;
	bool tukar;
	
	pass = 0;
	tukar = true;
	while (pass < n-1 && tukar) {
		tukar = false;
		for (int k = n-1; k > pass; k--) {
			if(T[k] < T[k-1]) {
				temp = T[k];
				T[k] = T[k-1];
				T[k-1]= temp;
				tukar = true;
			}
		}
	}
}
*/
int main() {
	int n, m, x;
	long long sum;
	scanf("%d", &x);
	for (int i = 0; i < x; i++) {
		scanf("%d %d", &n, &m);
		long int tab1[n]; long int tab2[m];
		for (int j = 0; j < n; j++) scanf("%ld", &tab1[j]);
		for (int k = 0; k < m; k++) scanf("%ld", &tab2[k]);
		if (m < n) printf("Muntu kalah\n");
		else {
			//bubblesort(tab1, n);
			//bubblesort(tab2, m);
			qsort(tab1, n, sizeof(long int), cmpfunc);
			qsort(tab2, m, sizeof(long int), cmpfunc);
			sum = 0;
			int b = 0;
			for (int it = 0; it < m; it++) {
				if (tab2[it] >= tab1[b]) {
					sum+= tab2[it];
					b++;
				}
			}
			if (b < n) printf("Muntu kalah\n");
			else printf("%lld\n", sum);	
		}
	}	
	return 0;
}