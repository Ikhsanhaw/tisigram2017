#include <stdio.h>

int modul(int x);

int main (){
	int x, temp, temp2;
	scanf("%d", &x);
	temp2 = x;
	do {
		temp = modul(x);
		x = modul(temp); }
		while (x != temp);
	if (temp2 > x) {
		printf("%d\n", temp2); }
	else {
		printf("%d\n", x); }
	return 0; }

int modul(int x) {
	return ((x/2) + (x/3) + (x/4)); }
