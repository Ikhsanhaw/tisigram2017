#include <stdio.h>

int main() {
    char c,d;
    c = getchar();
    d = getchar();
    while (d == '\n') {
        d = getchar();
    }
    int a = c;
    int b = d;
    int i = a - 1;
    for (i; i > b; i--) {
        char x = i;
        printf("%c\n", x);
    }
}
