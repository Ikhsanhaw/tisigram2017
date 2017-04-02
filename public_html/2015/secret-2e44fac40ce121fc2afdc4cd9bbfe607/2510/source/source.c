#include <stdio.h>

int main() {
	int x,y,count=0,temp;
	scanf("%d %d", &x, &y);
	temp = x;
	if (x == 0 && y > 0) {
		printf("mustahil\n"); }
	else {
		while (temp <= y) {
		count++;
		temp += x; } 
		printf("%d\n", count); }
	return 0; }
