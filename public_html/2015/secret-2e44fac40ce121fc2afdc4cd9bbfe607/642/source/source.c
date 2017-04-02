#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int compare(const void *A, const void *B) {
    const int *iA = (const int *) A;
    const int *iB = (const int *) B;

    if ( *iA > *iB ) return 1;
    else if ( *iA == *iB ) return 0;
    return -1;
}

int main() {
    int i, N;
    scanf("%d", &N);

    long int stupa[N+5];
    for (i = 0; i < N; i++) scanf("%ld", &stupa[i]);
    stupa[N] = 1000000007;

    qsort(stupa, N, sizeof(long int), compare);

    long long int sum = 0, count = 1;
    bool salahlihat = false;
    for (i = 1; i <= N && !salahlihat; i++) {
        if ( stupa[i] == stupa[i-1] ) {
            count++;
        } else {
            if ( count > stupa[i-1] ) {
                salahlihat = true;
            } else {
                sum += stupa[i-1];
                count = 1;
            }
        }
    }

    if (salahlihat) printf("-1\n"); else printf("%lld\n", sum);

    return 0;
}
