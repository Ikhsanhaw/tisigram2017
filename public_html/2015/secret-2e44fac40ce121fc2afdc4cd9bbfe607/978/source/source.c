#include <stdio.h>

int gcd(int u, int v) {
    int shift;
    if (u == 0) return v;
    if (v == 0) return u;
    for (shift = 0; ((u | v) & 1) == 0; ++shift) {
        u >>= 1;
        v >>= 1;
    }
    while ((u & 1) == 0)
        u >>= 1;
    do {
        while ((v & 1) == 0)
            v >>= 1;
        if (u > v) {
            int t = v; v = u; u = t;
        }
        v = v - u;
    }
    while (v != 0);
    return u << shift;
}

int main() {
    int n;
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++) {
        int x,y;
        scanf("%d %d", &x, &y);
        int g = gcd(x,y);
        printf("%d/%d\n",y/g, x/g);
    }
}
