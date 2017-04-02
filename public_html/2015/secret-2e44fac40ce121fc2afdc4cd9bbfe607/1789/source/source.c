#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    unsigned int x;
    int i;

    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        if( x <= 0 ) {
            printf("true\n");
        }else{
            printf("false\n");
        }
    }

    return 0;
}
