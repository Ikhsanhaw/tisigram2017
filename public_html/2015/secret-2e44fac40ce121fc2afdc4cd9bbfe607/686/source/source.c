#include <stdio.h>

int main() {
    char c,d;
    scanf("%c", &c);
    getchar();
    scanf("%c", &d);
    int a = c;
    int b = d;
    int i = a - 1;
    for (i; i > b; i--) {
        char x = i;
        printf("%c\n", x);
    }
}
