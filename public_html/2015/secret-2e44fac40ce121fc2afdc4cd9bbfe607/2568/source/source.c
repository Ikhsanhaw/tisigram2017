#include <stdio.h>

int main() {
	int x, temp=0;
	scanf("%d", &x);
	while (x != 0) {
		temp += x % 10;
		x /= 10; }
	printf("%d\n",temp);
	return 0; }
