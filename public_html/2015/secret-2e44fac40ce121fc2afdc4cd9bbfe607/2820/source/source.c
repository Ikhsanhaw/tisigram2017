#include <stdio.h>
#include <string.h>
int main() {
	int tc,asc[1001],i;
	scanf("%d",&tc);
	for (i=0;i<tc;i++) {
		scanf("%d",&asc[i]);
	}
	for (i=0;i<tc;i++) {
		printf("%c",asc[i]);
	}
	printf("\n");
	return 0;
}
