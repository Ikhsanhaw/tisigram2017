#include <stdio.h>

int main() {
	char huruf;
	int i=0;

    huruf = getchar();

	switch (huruf) {
		case 'A' :
		case 'a' :
		case 'I' :
		case 'i' :
		case 'U' :
		case 'u' :
		case 'E' :
		case 'e' :
		case 'O' :
		case 'o' :
			i = 1; break; }
	if (i == 1) {
		printf("True\n"); }
	else {
		printf("False\n"); }

	return 0; }
