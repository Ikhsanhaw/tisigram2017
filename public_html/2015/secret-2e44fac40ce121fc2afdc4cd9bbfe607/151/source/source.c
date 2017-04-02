#include <stdio.h>
#include <math.h>

int main(){
	long int x1, x2, y1, y2, r;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	printf("%d\n", (-1)*(x1-x2) + (-1)*(y1-y2));
	return 0;
}
