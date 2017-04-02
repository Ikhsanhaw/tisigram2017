#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    b += 64;
    int i;
    for (i = 0; i < a; i++) {
        char x = b;
        printf("%c", x);
        b--;
        if (i < a-1)
            printf(" ");
        else
            printf("\n");
    }
}
