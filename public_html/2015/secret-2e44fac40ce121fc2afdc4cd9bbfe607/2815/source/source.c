#include <stdio.h>
#include <string.h>
int main() {
	char ff[100];
	int i,jml;
	gets(ff);
	jml=0;
	for (i=0;i<strlen(ff);i++) {
		jml+=ff[i]-'0';
	}
	printf("%d\n",jml);
	return 0;
}
