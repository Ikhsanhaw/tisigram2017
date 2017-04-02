#include <stdio.h>

int main() {
	int x,y,z,count=0,temp=0;
	scanf("%d %d %d", &x, &y, &z);
	if (x-y <= 0 || (x==0 && z > 0)) {
		printf("mustahil\n"); }
	else {
		while (temp < z) {
		count++;
		temp += x;
		if(temp >= z) { break; }
		temp -= y; } 
		printf("%d\n", count); }
	return 0; }
