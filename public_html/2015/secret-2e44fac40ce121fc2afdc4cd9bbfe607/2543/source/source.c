#include <stdio.h>

int faktorial(int n){
	if(n==0){
		return 1;
	} else {
		return n*(faktorial(n-1));
	}
}
int main(){
	int N, M;
	scanf("%d %d", &N, &M);
	
	int total;
	
	total = faktorial(N)/(faktorial(M)*faktorial(N-M));
	
	printf("%d\n", total);
}


