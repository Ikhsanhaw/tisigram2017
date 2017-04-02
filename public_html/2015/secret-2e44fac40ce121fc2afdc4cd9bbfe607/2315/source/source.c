#include <stdio.h>

int main() {
	long long count=0;
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
				if (count == c) break;
			} else
			if (batas%3 == 0&& batas!= 0) {
				count += 3*a - b;
				if (count == c) break;
			} else if (batas%5 == 0&& batas!= 0) {
				count += a - 2*b;
				if (count == c) break;
			} else {
				count += a-b;
				if (count == c) break;
			}
		}
		printf("%d\n", batas-1);
	}
	return 0;
}