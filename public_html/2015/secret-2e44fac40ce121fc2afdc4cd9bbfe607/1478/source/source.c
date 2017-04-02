#include<stdio.h>
#include<math.h>

int main(){
	int N, gold;
	scanf("%d", &N);
	gold = N/2+ N/3 + N/4;
	if (gold >= N){
		printf("%d\n", gold);	
	}
	else{
		printf("%d\n", N);
	}
	
	return 0;
}

