#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, x, y;
	long long ubahx, ubahy, count;
	scanf("%d %d %d %d", &a, &b, &x, &y);
	if (a == 0 || b == 0 || x == 0 || y == 0) printf("mustahil\n");
	else if (a == b) {
		if (x%2!=0 || (a+b)*x != y) {
			printf("mustahil\n");
		}
		else printf("%d %d\n", x/2, x/2);
	}
	else if (a<b) {
		ubahx = a*x;
		count = abs(b-a);
		if ((y - ubahx)%count != 0) printf("mustahil\n");
		else {
			int binatang2 = (y - ubahx) / (int) count;
			int binatang1 = x - binatang2;
			if (binatang1 <= 0 || binatang2 <= 0) printf("mustahil\n");
			else
				printf("%d %d\n", binatang1, binatang2);
		}
	}		
	else { //a>b
		ubahy = b*x;
		count = abs(a-b);
		if ((y - ubahy)%count != 0) printf("mustahil\n");
		else {
			int binatang1 = (y - ubahy) / (int) count;
			int binatang2 = x - binatang1;
			if (binatang1 <= 0 || binatang2 <= 0) printf("mustahil\n");
			else printf("%d %d\n", binatang1, binatang2);
		}
	}
	return 0;
}