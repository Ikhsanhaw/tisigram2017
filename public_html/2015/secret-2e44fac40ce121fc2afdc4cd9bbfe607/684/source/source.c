#include<stdio.h>
#include<math.h>

int main (){
	long int x1,x2,y1,y2;
	scanf("%ld", &x1);
	scanf("%ld", &y1);
	scanf("%ld", &x2);
	scanf("%ld", &y2);
	printf("%ld\n", abs((x2-x1)) + abs((y2-y1)));
	return 0;
}
