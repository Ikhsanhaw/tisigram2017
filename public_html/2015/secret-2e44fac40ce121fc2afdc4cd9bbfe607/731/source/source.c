#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	char ch1, ch2, temp;
	ch1 = getchar();
	temp = getchar();
	ch2 = getchar();
	char it;
	for (it=ch1-1; it>ch2; it--) {
		printf("%c\n",it);
	}
	if (ch1-1==ch2) printf("\n");
	return 0;
}