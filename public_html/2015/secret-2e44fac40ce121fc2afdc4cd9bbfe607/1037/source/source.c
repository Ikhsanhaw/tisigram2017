#include <stdio.h>
#include <stdbool.h>

struct Hash {
    long key;
    long value;
};

int main() {
    long n;
    bool possible = true;
    scanf("%ld", &n);
    long i;
    struct Hash x[n];
    for (i = 0; i < n; i++) {
        x[i].value = 0;
    }
    long sum = 0;
    for (i = 0; i < n; i++) {
        long b;
        scanf("%ld", &b);
        long j;
        bool ada = false;
        for (j = 0; j < sum; j++) {
            if (x[j].key == b) {
                x[j].value++;
                if (x[j].value > x[j].key) possible = false;
                ada = true;
            }
        }
        if (!ada) {
            x[sum].key = b;
            x[sum].value++;
            sum++;
        }
    }
    long tower = 0;
    if (!possible) printf("%d\n",-1); else {
        for (i = 0; i < sum; i++) {
            tower += x[i].key;
        }
        printf("%ld\n", tower);
    }
}
