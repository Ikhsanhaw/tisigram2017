#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    a += 64;
    b += 64;
    int i;
    for(i = b; i > a; i--) {
        char c = i;
        printf("%c", c);
        if (i > a + 1)
            printf(" ");
        else
            printf("\n");
    }
}
