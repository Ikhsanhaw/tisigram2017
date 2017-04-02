#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	char ch1, ch2, temp;
	scanf("%c%c%c",&ch1,&temp,&ch2);
	char it;
	if (ch1-1 == ch2) {
		printf("\n");
	}
	for (it=ch1-1; it>ch2; it--) {
		printf("%c\n",it);
	}
	return 0;
}