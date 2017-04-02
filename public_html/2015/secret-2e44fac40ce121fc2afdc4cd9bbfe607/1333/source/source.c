#include<stdio.h>
#include<math.h>

int main(){
	int N, gold;
	scanf("%d", &N);
	gold = floor((double)N/2+ (double)N/3 + (double)N/4);
	printf("%d\n", gold);
	return 0;
}

