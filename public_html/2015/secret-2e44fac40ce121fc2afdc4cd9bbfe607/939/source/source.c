#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int a,b;
	int r;
	int x,y;
	scanf("%d %d",&a,&b);
	scanf("%d",&r);
	scanf("%d %d",&x,&y);
	if (x==a && y==b) {
		printf("tepat pada titik tengah arena pertandingan\n");
	}
	else {
		if (x==a-r || x==a+r) {
			if (y>=b-r && y<=b+r) {
				printf("tepat pada batas arena pertandingan\n");
			}
			else {
				printf("di luar arena pertandingan\n");
			}
		}
		else if (y==b-r || y==b+r) {
			if (x>=a-r && x<=a+r) {
				printf("tepat pada batas arena pertandingan\n");
			}
			else {
				printf("di luar arena pertandingan\n");
			}
		}
		else if (x>a-r && x<a+r) {
			if (y>=b-r && y<=b+r) {
				printf("di dalam arena pertandingan\n");
			}
			else {
				printf("di luar arena pertandingan\n");
			}
		}
		else if (y>b-r || y<b+r) {
			if (x>=a-r && x<=a+r) {
				printf("di dalam arena pertandingan\n");
			}
			else {
				printf("di luar arena pertandingan\n");
			}
		}
	}
	return 0;
}