#include <stdio.h>

int main(){
	int N,M;
	
	scanf("%d %d",&N, &M);
	if(N>=1 && M>=0){
		if(M==0){
			printf("%d %d\n", M,N);
		}else if(M>N){
			printf("%d %d\n", N%M, N/M);
		}
		else{
			printf("%d %d\n", N/M,N%M);
		}
	}
	return 0;
}
