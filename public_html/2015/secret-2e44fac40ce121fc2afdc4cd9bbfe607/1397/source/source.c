#include <stdio.h>

int modul(int x);

int main() {
	int x, i;
	
	scanf("%d", &i);
	while (i--) {
		scanf("%d", &x);
		printf("%d\n", modul(x)); }
	return 0; }

int modul(int x) {
	int count = 0;
	if (x == 0) {
		return 1; }
	while (x != 0 && x%10 == 0) {
		if (x % 10 == 0) {
			count++;}
		x /= 10; }
	return count; }
