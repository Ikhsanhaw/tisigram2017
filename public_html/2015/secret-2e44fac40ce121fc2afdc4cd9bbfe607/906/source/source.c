#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int n;
	scanf("%d",&n);
	int it;
	for (it=0; it<n; it++) {
		char string[250];
		scanf("%s",&string);
		int len = strlen(string);
		int i;
		for (i=0; i<len; i++) {
			if (string[i]%2==0) {
				printf("%c",string[i]);
			}
		}
		printf("\n");
	}
	return 0;
}