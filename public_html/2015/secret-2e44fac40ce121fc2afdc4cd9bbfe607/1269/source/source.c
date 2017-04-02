#include <stdio.h>

int main() {
    int n,m;
    scanf("%d", &n);
    scanf("%d", &m);
    if (m == 0) {
        printf("0 %d\n",n);
    } else {
        printf("%d %d\n", n/m, n%m);
    }
}
