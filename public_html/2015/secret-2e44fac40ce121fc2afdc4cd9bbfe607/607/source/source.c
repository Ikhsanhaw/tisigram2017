#include <stdio.h>

int main() {
	// freopen("I.in", "r", stdin);
	int n;
	scanf("%d", &n);
	char* date[] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu"};
	n -= 5;
	if (n < 0)
		n += 7;
	puts(date[n%7]);
	return 0;
}