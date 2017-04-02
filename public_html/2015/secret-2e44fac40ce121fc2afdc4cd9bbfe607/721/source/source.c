#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
	int start, end, it;
	scanf("%d %d",&start,&end);
	for (it=end; it>start; it--) {
		printf("%c ",'A'+it-1);
	}
	printf("\n");
	return 0;
}