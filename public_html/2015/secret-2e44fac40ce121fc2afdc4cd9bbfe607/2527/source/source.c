#include <stdio.h>

int main() {
	long x,y,z;
	scanf("%ld%ld%ld", &x, &y, &z);
	printf("%ld\n", x);
	if (x != 0) {
	printf("%ld\n", x+y); }
	else {
		printf("mustahil\n");}
	if (x-z >= 0) {
	printf("%ld\n", x-z); }
	else {
		printf("mustahil\n");}
		
	return 0; }
