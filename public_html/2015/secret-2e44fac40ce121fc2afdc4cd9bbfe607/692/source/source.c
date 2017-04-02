#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int n;
	scanf("%d",&n);
	int i;
	for (i=0; i<n; i++) {
		int t;
		scanf("%d",&t);
		int j;
		int remed = 0;
		for (j=0; j<t; j++) {
			int a;
			scanf("%d",&a);
			if (a<60) remed=1;
		}

		if (remed==0) printf("lulus\n");
		else printf("anda harus remedial\n");
	}
	return 0;
}