#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
	int N;
	scanf("%d",&N);
	int it;
	for (it=0; it<N; it++) {
		char string[250];
		scanf("%s",&string);
		printf("%s\n",string);	
	}
	return 0;
}