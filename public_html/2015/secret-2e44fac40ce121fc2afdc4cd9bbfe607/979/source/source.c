#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++) {
        int k,p;
        scanf("%d %d", &k, &p);
        int vote[k];
        int j;
        for (j = 0; j < k; j++) {
            vote[j] = 0;
        }
        for (j = 0; j < p; j++) {
            int x;
            for (x = 0; x < k; x++) {
                int jum;
                scanf("%d", &jum);
                vote[x] += jum;
            }
        }
        int besar = 0;
        for (j = 1; j < k; j++) {
            if (vote[j] > vote[besar]) {
                besar = j;
            }
        }
        printf("%d\n", besar+1);
    }
}
