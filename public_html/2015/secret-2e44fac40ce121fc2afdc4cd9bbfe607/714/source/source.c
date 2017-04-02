#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
	int harga, tanggal;
	scanf("%d",&harga);
	scanf("%d",&tanggal);
	if (harga>=50000) {
		harga -= tanggal * harga / 100;
	}
	printf("%d\n",harga);
	return 0;
}