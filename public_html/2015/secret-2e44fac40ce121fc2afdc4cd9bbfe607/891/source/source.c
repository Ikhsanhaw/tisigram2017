#include <stdio.h>
 
int gcm(int a, int b);

int main() {
	int count, a, b;
 
	scanf("%d", &count);

	while (count--) {
		scanf("%d %d", &a, &b);
		printf("%d/%d\n", b/gcm(a,b), a/gcm(a,b)); }
 
	return 0; }

int gcm(int a, int b) {
	if (b == 0) {
		return a; }
	else return gcm(b,a%b); }
