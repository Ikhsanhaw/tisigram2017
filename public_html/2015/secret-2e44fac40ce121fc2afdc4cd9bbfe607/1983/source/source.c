#include <stdio.h>

int cek(long x) {
    int temp, cek, temp2;
    while (x != 0) {
        temp = x % 10;
        temp2 = x / 10;
        if (temp == 4) {
            return 1;
        }
        if (temp == 3 && temp2 % 10 == 1) {
            return 1;
        }
        x /= 10;
    }
    return 0;
    }

int main () {
    int i, j, l, x, m;
    long k;
    scanf("%d", &l);
    while (l--) {
        scanf("%d %d %ld", &i, &j, &k);
        if (cek(k) == 1) {
            printf("angka mitos\n");
        }
        else {
            for (x=0, m = 1; m < k; m++) {
            if (cek(m) != 0) {
            x++;} }
            k= k-1-x;
            while (k--) {
                i += j;
            }
            printf("%d\n", i);
        } }


    return 0;}


