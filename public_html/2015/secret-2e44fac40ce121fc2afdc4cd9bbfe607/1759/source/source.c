#include <stdio.h>

int main () {
    int i,j, k, temp, count=0;
    scanf("%d %d", &i, &j);
    for (k = i-1; k > 0; k--) {
	count += k;
}
    printf("%d\n", count);


    return 0;}



