#include <stdio.h>

int main() {
	long x,y,z;
	scanf("%ld%ld%ld", &x, &y, &z);
	printf("%d\n", x);
	if (x != 0) {
	printf("%ld\n", x+y); }
	else {
		printf("mustahil\n");}
	if (z <= x) {
	printf("%ld\n", x-z); }
	else {
		printf("mustahil\n");}
		
	return 0; }
