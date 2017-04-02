#include <stdio.h>
#include <stdlib.h>

int main() {
    int x,y;
    int r;
    int p,q;
    scanf("%d %d", &x, &y);
    scanf("%d", &r);
    scanf("%d %d", &p, &q);
    int jarak = abs(p-x) + abs(q-y);
    if (jarak == 0) {
        printf("tepat pada titik tengah arena pertandingan\n");
    } else if (jarak == r) {
        printf("tepat pada batas arena pertandingan\n");
    } else if (jarak < r) {
        printf("di dalam arena pertandingan\n");
    } else {
        printf("di luar arena pertandingan\n");
    }
}
