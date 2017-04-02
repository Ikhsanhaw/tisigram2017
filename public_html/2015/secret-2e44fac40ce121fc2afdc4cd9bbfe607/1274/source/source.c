#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("%d\n", n/2 + n/3 + n/4);
    } else {
        printf("%d\n", n/2 + n/3 + n/4 + 1);
    }
}
