#include <stdio.h>

int main () {
    float temp, x;
    int i,j, k;
    scanf("%d", &i);
    while (i--) {
            temp = 0;
        scanf("%d", &j);
        k=j;
        while (j--) {
            scanf("%f", &x);
            temp += x;
        }
        printf("%.2f\n", temp/k);
    }


    return 0;}
