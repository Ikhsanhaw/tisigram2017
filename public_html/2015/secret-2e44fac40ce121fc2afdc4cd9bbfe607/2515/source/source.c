#include <stdio.h>

int main() {
	int x,y,z;
	scanf("%d%d%d", &x, &y, &z);
	printf("%d\n", x);
	if (x != 0) {
	printf("%d\n", x+y); }
	else {
		printf("mustahil\n");}
	if (z <= x) {
	printf("%d\n", x-z); }
	else {
		printf("mustahil\n");}
		
	return 0; }
