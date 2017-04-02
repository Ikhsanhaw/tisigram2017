#include <stdio.h>

int main() {
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    if (a >= 50000) {
        a = a - a * b / 100;
    }
    printf("%d\n", a);
}
