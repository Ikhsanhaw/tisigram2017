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
					found = true;
					break;
				}
				count -= 2*b;
				if (count >= c) {
					found = true;
					break;
				}
				break;	
			} else
			if (batas%3 == 0&& batas!= 0) {
				count += 3*a;
				if (count >= c) {
					found = true;
					break;
				}
				count-= b;
				if (count >= c) {
					found = true;
					break;
				}
			} else if (batas%5 == 0&& batas!= 0) {
				count += a;
				if (count >= c) {
					found = true;
					break;
				}
				count-= 2*b;
				if (count >= c) {
					found = true;
					break;
				}
			} else {
				count += a;
				if (count >= c) {
					found = true;
					break;
				}
				count-=b;
				if (count >= c) {
					found = true;
					break;
				}
			}
		}
		printf("%d\n", batas);
	}
	return 0;
}