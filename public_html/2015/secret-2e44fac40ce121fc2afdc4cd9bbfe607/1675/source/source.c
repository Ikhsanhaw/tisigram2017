#include <stdio.h>

int main () {
    int temp, x;
    int i,j, k;
    scanf("%d", &i);
    while (i--) {
        temp = 0;
        j = 6;
        while (j--) {
            scanf("%d", &x);
            temp += x;
        }
        printf("%d\n", temp);
    }


    return 0;}

