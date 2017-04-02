#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
	int x; //absis
	int y; //ordinat
} POINT;

double jarak (POINT a, POINT b) {
	double jrk = sqrt((a.x - b.x) * (a.x - b.x) + (a.y-b.y) *(a.y-b.y));
	return jrk;
}

int main() {
	int r;
	POINT P1, P2;
	scanf("%d", &P1.x);
	scanf("%d", &P1.y);
	scanf("%d", &r);
	scanf("%d", &P2.x);
	scanf("%d", &P2.y);
	if (P1.x == P2.x && P1.y == P2.y) {
		printf("tepat pada titik tengah arena pertandingan\n");
	} else
	if (jarak(P1, P2) < r) {
		printf("di dalam arena pertandingan\n");
	} else
	if (jarak(P1, P2) == r) {
		printf("tepat pada batas arena pertandingan\n");
	} else printf("di luar arena pertandingan\n");
	return 0;
}