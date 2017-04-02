#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	char ch1, ch2;
	scanf("%c %c",&ch1,&ch2);
	char it;
	for (it=ch1-1; it>ch2; it--) {
		printf("%c\n",it);
	}
	//if (ch1-1==ch2) printf("\n");
	return 0;
}