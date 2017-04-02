#include <stdio.h>

int main() {
	long x,y,z;
	scanf("%ld%ld%ld", &x, &y, &z);
	printf("%ld\n", x);
	if (x == 0 && y != 0) {
		printf("mustahil\n"); }
	else {
		printf("%ld\n", x+y); }
	if (x-z < 0) {
		printf("mustahil\n"); }
	else {
		printf("%ld\n", x-z); }
		
	return 0; }
