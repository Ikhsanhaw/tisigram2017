#include <stdio.h>

int main(){
	int N, M;
	scanf("%d %d", &N, &M);
	
	int atas=1, bawah=1, NM = 1;
	for(int i=N;i>1;i--){
		atas = atas * i;
	}
	
	for(int i=M; i>1; i--){
		bawah = bawah * i;
	}
	
	for(int i=N-M; i>1; i--){
		NM = NM*i;
	}
	
	bawah = bawah * NM;
	
	printf("%d\n",atas/bawah);
}
