#include <stdio.h>

int main() {
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    a *= 2;
    if (a >= b)
        printf("PERANG\n");
    else
        printf("MUNDUR\n");
}
