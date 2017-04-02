#include <stdio.h>

int tukar(int n) {
    if (n % 12 == 0) {
        int satu = n/2;
        int dua = n/3;
        int tiga = n/4;
        if (satu >= 10) {
            satu = tukar(satu);
        }
        if (dua >= 10) {
            dua = tukar(dua);
        }
        if (tiga >= 10) {
            tiga = tukar(tiga);
        }
        return satu + dua + tiga;
    } else {
        int count = 0;
        while (!(n % 12 == 0)) {
            count++;
            n--;
        }
        if (n >= 12) {
            n = tukar(n);
        }
        return n + count;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", tukar(n));
}
