#include <stdio.h>

int rek1(int N) {
	if (N>0) return rek1(N-1)+rek2(N);
	else return 0;
}

int rek2(int N) {
	if (N>1) return rek2(N-1)+4;
	else return 2;
}

int main() {
	int n;
	scanf("%d",&n);
	printf("%d",rek1(n));
	return 0;
}
