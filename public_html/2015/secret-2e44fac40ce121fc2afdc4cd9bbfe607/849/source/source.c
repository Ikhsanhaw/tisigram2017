#include <stdio.h>

int main(){
	int S, M,N;
	scanf("%d\n%d",&S,&M);
	N=2*M;
	if(S>M && S<N){
		printf("PERANG\n");
	}
	else {
		printf("MUNDUR\n");
	}
	return 0;
}
