#include <stdio.h>

int main() {
    int N, Q, i;
    scanf("%d %d", &N, &Q);

    int D[N+5];
    char pesan[N+5], convert[N+5];
    scanf("%s", pesan);

    D[0] = 0;
    D[1] = D[0] + 1;
    convert[1] = pesan[0];
    for (i = 1; i < N; i++) {
        D[i + 1] = D[i];
        if ( pesan[i] != pesan[i - 1] ) {
            D[i + 1]++;
            convert[D[i + 1]] = pesan[i];
        }
    }

    while (Q--) {
        int a, b;
        scanf("%d %d", &a, &b);
        int len = D[b] - D[a] + 1;
        printf("%d", len);
        if (len < 10) {
            printf(" ");
            for ( i = D[a]; i <= D[b]; i++ ) printf("%c", convert[i]);
        }
        printf("\n");
    }

    return 0;
}
