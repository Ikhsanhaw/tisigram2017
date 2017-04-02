#include <stdio.h>
#include <stdbool.h>

struct Hash {
    long key;
    int value;
};

int main() {
    int n;
    long tower = 0;
    bool possible = true;
    scanf("%d", &n);
    int i;
    struct Hash x[n];
    long sum = 0;
    for (i = 0; i < n; i++) {
        long b;
        scanf("%ld", &b);
        int j;
        bool ada = false;
        for (j = 0; j < sum; j++) {
            if (x[j].key == b) {
                ada = true;
                x[j].value++;
                if (x[j].value > x[j].key) possible = false;
            }
            if (ada) break;
        }
        if (!ada) {
            x[sum].key = b;
            x[sum].value = 1;
            tower += x[sum].key;
            sum++;
        }
    }
    if (!possible) printf("%d\n",-1); else {
        printf("%ld\n", tower);
    }
}
