#include <stdio.h>

long int isMin(long int x){
	if(x<0){
		x = x*(-1);
	}
	return x;
}

int main(){
	long int x1, x2, y1, y2, x, y;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	x = isMin(x1-x2);
	y = isMin(y1-y2);
	printf("%d\n", x + y);
	return 0;
}
