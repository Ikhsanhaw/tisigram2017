#include <stdio.h>
int fakto(int x) {
	return x >= 1 ? x * fakto(x-1) : 1; }

int main () {
    int i,j, k, temp, count=0;
    scanf("%d %d", &i, &j);

    printf("%d\n", fakto(i)/(fakto(j)*fakto(i-j)));


    return 0;}



