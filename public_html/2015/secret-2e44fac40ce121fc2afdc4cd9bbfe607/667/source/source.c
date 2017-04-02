#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        int j;
        bool remed = false;
        for (j = 0; j < x; j++) {
            int h;
            scanf("%d", &h);
            if ((h < 60) && !(remed)) {
                remed = true;
            }
        }
        if (remed) {
            printf("anda harus remedial\n");
        } else {
            printf("lulus\n");
        }
    }
}
