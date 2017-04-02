#include <stdio.h>
#include <math.h>

int main() {
    int n;

    scanf("%d", &n);

    float limit = pow(2, 64) - 1;
    float x;

    int i;

    for (i = 0; i < n; i++) {
        scanf("%f", &x);

        if( x < limit ) {
            printf("true\n");
        }else{
            printf("false\n");
        }
    }

    return 0;
}
