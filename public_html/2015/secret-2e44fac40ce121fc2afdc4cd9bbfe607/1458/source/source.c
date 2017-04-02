#include <stdio.h>

/**
 * @auth 	: Muhamad Ismail
 * @date	: April 2, 2016
 * @desc 	: Program untuk menggambar pegunungan dengan tinggi n.
 */

void pegunungan(unsigned int n) {
	int i;

	if(n >= 1) {
		pegunungan(n-1);
		printf("\n");

		for(i=0; i < n; i++) {
			printf("*");
		}
		printf("\n");

		pegunungan(n-1);
	}
}

int main() {

	int n;
	scanf("%d", &n);

	pegunungan(n);
	printf("\n");

	return 0;
}
