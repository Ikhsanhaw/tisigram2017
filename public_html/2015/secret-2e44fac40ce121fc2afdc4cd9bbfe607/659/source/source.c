#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++) {
        char c[100];
        scanf("%s", &c);
        printf("%s\n", c);
    }
}
