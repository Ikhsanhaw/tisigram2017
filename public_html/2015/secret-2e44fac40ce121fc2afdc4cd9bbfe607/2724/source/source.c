#include <stdio.h>

int main(){
	int N,Y,Z;
	scanf("%d", &N);
	
	scanf("%d", &Y);
	
	scanf("%d", &Z);
	
	printf("%d\n", N);
	printf("%d\n", N+Y);
	if ((N-Y) < 0) {
		printf("mustahil\n");
	} else {
		printf("%d\n", N-Z);
	} 
	
	return 0;
}
