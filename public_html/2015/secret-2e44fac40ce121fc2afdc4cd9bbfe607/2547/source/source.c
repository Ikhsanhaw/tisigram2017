#include <stdio.h>

int faktorial(int n){
	if(n==0){
		return 1;
	} else {
		return n*(faktorial(n-1));
	}
}

int komb(int n, int r){
	return faktorial(n)/(faktorial(r)*faktorial(n-r));
}

int main(){
	int N, M;
	scanf("%d %d", &N, &M);
	printf("%d\n", komb(N,M));

}

