#include <stdio.h>
#include <math.h>

int main() {
	// freopen("B.in", "r", stdin);

	int px, py;
	scanf("%d %d", &px, &py);
	int pr;
	scanf("%d", &pr);
	int x, y;
	scanf("%d %d", &x, &y);
	int pr2 = pr*pr;

	int absx = abs(x-px);
	int absy = abs(y-py);
	int dist = absx*absx+absy*absy;

	if ((x == px) && (y == py)) {
		puts("tepat pada titik tengah arena pertandingan");
	} else if (dist < pr2) {
		puts("di dalam arena pertandingan");
	} else if (dist == pr2) {
		puts("tepat pada batas arena pertandingan");
	} else {
		puts("di luar arena pertandingan");
	}

	return 0;
}