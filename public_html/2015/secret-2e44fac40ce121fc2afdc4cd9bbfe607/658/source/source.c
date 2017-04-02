#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int besar;
    scanf("%d",&besar);
    int i;
    for (i = 1; i < n; i++) {
        int x;
        scanf("%d", &x);
        if (x > besar)
            besar = x;
    }
    printf("%d\n", besar);
}
