#include <stdio.h>

int gcd(int a, int b) {
	if (b == 0) {
		return a; }
	return gcd(b, a%b); }

int lcm(int a, int b) {
		return (a * b) / gcd(a,b); }

int main() {
	int x, a, b ,c, kpk, temp;
	scanf("%d%d%d%d", &x,&a,&b,&c);
	kpk = lcm(lcm(a,b),c);
	temp = kpk;
	while (temp < x) {
		temp += kpk; }
	printf("%d %d\n", temp-kpk, temp);
	return 0; }
