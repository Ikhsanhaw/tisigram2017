#include <stdio.h>

int main() {
	int x,y,count=0,temp=0;
	scanf("%d %d", &x, &y);
	if (x == 0 && y > 0) {
		printf("mustahil\n"); }
	else {
		while (temp < y) {
		count++;
		temp += x; } 
		printf("%d\n", count); }
	return 0; }
