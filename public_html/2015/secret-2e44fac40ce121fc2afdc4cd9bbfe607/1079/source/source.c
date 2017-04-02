#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++) {
        char c[100];
        scanf("%s", &c);
        int j;
        for (j = 0; j < strlen(c); j++) {
            int x = c[j];
            if (x % 2 == 0) {
                printf("%c", c[j]);
            }
        }
        printf("\n");
    }
}
