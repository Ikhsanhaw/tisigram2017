#include <stdio.h>

int main(){
	int i, N, M, susan, murid;
	
	scanf("%d", &N);
	scanf("%d", &M);
	
	murid = 0;
	while(N>=M){
		if((N>0)&&(N>=M)){
			N = N-M;
			murid++;
		}
	}
	if(N<M){
		susan = N;
	}
	printf("%d %d", murid, susan);
	printf("\n");
	return 0;
}
