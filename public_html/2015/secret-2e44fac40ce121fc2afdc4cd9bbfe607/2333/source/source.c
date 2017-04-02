#include <stdio.h>
typedef enum {false, true} bool;

int main() {
	long long count=0;
	bool found = false;
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (b > a) {
		printf("mustahil\n"); 
	}
	else {
		int batas = 0;
		while (count < c && !found) {
			batas++;
			if (batas%15==0 && batas!= 0) {
				count += 3*a;
				if (count >= c) {
					break;
					found = true;
				}
				count -= 2*b;
				if (count >= c) {
					break;
					found = true;
				}
				break;	
			} else
			if (batas%3 == 0&& batas!= 0) {
				count += 3*a;
				if (count >= c) {
					break;
					found = true;
				}
				count-= b;
				if (count >= c) {
					break;
					found = true;
				}
			} else if (batas%5 == 0&& batas!= 0) {
				count += a;
				if (count >= c) {
					break;
					found = true;
				}
				count-= 2*b;
				if (count >= c) {
					break;
					found = true;
				}
			} else {
				count += a;
				if (count >= c) {
					break;
					found = true;
				}
				count-=b;
				if (count >= c) {
					break;
					found = true;
				}
			}
		}
		printf("%d\n", batas);
	}
	return 0;
}