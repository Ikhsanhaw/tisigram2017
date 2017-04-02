#include <stdio.h>

int main(){
	long long int x1,x2,y1,y2;
	long long int jarak;
	scanf ("%lli %lli %lli %lli", &x1, &y1, &x2, &y2);
	
	printf("%lli", abs(x1-x2)+abs(y1-y2));
	printf("\n");
	return 0;
}
