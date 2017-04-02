#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
	int N, end, it;
	scanf("%d %d",&N,&end);
	it = 0;
	while (it<N) {
		printf("%c ",'A'+end-1);
		end--;
		it++;
	}
	printf("\n");
	return 0;
}