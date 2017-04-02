#include <stdio.h>

int tukar(int n) {
    if (n % 12 == 0) {
        return n/2 + n/3 + n/4;
    } else {
        int count = 0;
        while (!(n % 12 == 0)) {
            n--;
            count++;
        }
        if (count >= 12) {
            return n/2 + n/3 + n/4 + tukar(count);
        } else {
            return n/2 + n/3 + n/4 + count;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", tukar(n));
}
