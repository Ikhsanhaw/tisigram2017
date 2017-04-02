#include <stdio.h>

int main(){
	int M,N;
	scanf("%d",&M);
	scanf("%d",&N);
	if(N!=0){
		printf("%d %d\n",M/N,M%N);
	}
	else{
		printf("0 %d\n",M);
	}
}
