#include<stdio.h>
#include<math.h>

int main (){
	long int x1,x2,y1,y2;
	scanf("%d", &x1);
	scanf("%d", &y1);
	scanf("%d", &x2);
	scanf("%d", &y2);
	printf("%d\n", abs(x1-x2) + abs(y1-y2));
	return 0;
}