#include <stdio.h>

int main(){
	int N,i,Max;
	scanf("%d", &N);
	int bil[N];
	scanf("%d", &bil[0]);
	Max = bil[0];
	for(i = 1; i<N ; i++){
		scanf("%d", &bil[i]);
		if(Max < bil[i]){
			Max = bil[i];
		}
	}
	printf("%d\n", Max);
	
	return 0;
}
