#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
	int N;
	scanf("%d",&N);
	int it;
	int max = -1000000;
	for (it=0; it<N; it++) {
		int a;
		scanf("%d",&a);
		if (a>max) {
			max = a;
		}
	}
	printf("%d\n",max);
	return 0;
}