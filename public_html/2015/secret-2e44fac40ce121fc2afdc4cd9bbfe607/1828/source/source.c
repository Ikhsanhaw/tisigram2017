#include <stdio.h>

int main() {
	int count=0;
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (b > a) {
		printf("mustahil\n"); 
	}
	else {
		int batas = 0;
		while (count < c) {
			batas++;
			if (batas%15==0 && batas!= 0) {
				count += 3*a - 2*b; break;
			} else
			if (batas%3 == 0&& batas!= 0) {
				count += 3*a - b;
			} else if (batas%5 == 0&& batas!= 0) {
				count += a - 2*b;
			} else {
				count += a-b;
			}
		}
		printf("%d\n", batas-1);
	}
	return 0;
}