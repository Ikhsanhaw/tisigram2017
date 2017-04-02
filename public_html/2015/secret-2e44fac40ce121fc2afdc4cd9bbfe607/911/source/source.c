#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int T;
	scanf("%d",&T);
	int it;
	for (it=0; it<T; it++) {
		int k, p;
		scanf("%d %d",&k, &p);
		int i, j;
		int total[k];
		for (i=0; i<k; i++)
			total[i] = 0;

		for (i=0; i<p; i++) {
			for (j=0; j<k; j++) {
				int a;
				scanf("%d",&a);
				total[j]+=a;
			}
		}

		int max = -1;
		int simpan;
		for (i=0; i<k; i++) {
			//printf("%d ",total[i]);
			if (total[i]>max) {
				max = total[i];
				simpan = i;
			}
		}

		printf("%d\n",simpan+1);
	}
	return 0;
}