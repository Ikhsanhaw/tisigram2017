#include <stdio.h>

int main(){
	int N, M, susan, murid;
	
	scanf("%d", &N);
	scanf("%d", &M);
	
	susan = N%M;
	murid = (N-susan)/M;
	
	printf("%d %d\n", murid, susan);
	return 0;
}
