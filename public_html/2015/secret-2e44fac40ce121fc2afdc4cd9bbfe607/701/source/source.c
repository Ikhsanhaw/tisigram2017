#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	char string[1000];
	scanf("%s",&string);
	int len = strlen(string);
	int it;
	for (it=len-1; it>=0; it--) {
		printf("%c",string[it]);
	}
	printf("\n");
	return 0;
}