#include <stdio.h>
#include <string.h>
 
int main() {
	char A[101], B[201];
	int i, j;
	gets(A);
	for (j = 0,i = 0; i < strlen(A); ++i) {
		putchar(A[i]);
		switch(A[i]) {
			case 'a' : { printf("pa"); } break;
			case 'i' : { printf("pi"); } break;
			case 'u' : { printf("pu"); } break;
			case 'e' : { printf("pe"); } break;
			case 'o' : { printf("po"); } break; } }
	putchar('\n');
	return 0; }