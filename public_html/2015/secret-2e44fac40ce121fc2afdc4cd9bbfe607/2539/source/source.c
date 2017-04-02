#include <stdio.h>

int faktorial(int n){
	int total=1;
	for(int i=n;i>1;i--){
		total=total*i;
	}
	
	return total;
}
int main(){
	int N, M;
	scanf("%d %d", &N, &M);
	
	int pembilang, NminusM, Mfak, total;
	
	pembilang =	faktorial(N);
	NminusM = faktorial(N-M);
	Mfak = faktorial(M);
	total = pembilang / (Mfak*NminusM);
	
	printf("%d\n", total);
}


