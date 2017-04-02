#include <stdio.h>

int main() {
	char X[31], Y[3];
	int i;
	gets(X);
	gets(Y);
	for (i=0;i<30;i++) { 
			if (X[i] == Y[1]) {
				X[i] = Y[0]; }
			else { 
				if (X[i] == Y[0]) {
					X[i] = Y[1]; } } }
	printf("%s\n", X);
	return 0; }
