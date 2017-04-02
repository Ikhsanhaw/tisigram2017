#include <stdio.h>
int main() {
	int a, b, x, y;
	int ubahx, ubahy, count;
	scanf("%d %d %d %d", &a, &b, &x, &y);
	if (a<b) {
		ubahx = a*x;
		count = b-a;
		if ((y - ubahx)%count != 0) printf("mustahil\n");
		else {
			int binatang2 = (y - ubahx) / count;
			int binatang1 = x - binatang2;
			if (binatang1 <= 0 || binatang2 <= 0) printf("mustahil\n");
			else
				printf("%d %d\n", binatang1, binatang2);
		}
	}		
	else { //a>b
		ubahy = b*x;
		count = a-b;
		if ((y - ubahy)%count != 0) printf("mustahil\n");
		else {
			int binatang1 = (y - ubahy) / count;
			int binatang2 = x - binatang1;
			if (binatang1 <= 0 || binatang2 <= 0) printf("mustahil\n");
			else printf("%d %d\n", binatang1, binatang2);
		}
	}
	return 0;
}