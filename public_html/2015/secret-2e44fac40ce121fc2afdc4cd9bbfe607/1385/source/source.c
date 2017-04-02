#include <stdio.h>

int main(){
	int i,N,hasil;
	scanf("%d", &N);
	hasil = 1;
	for(i=1;i<N;i++){
		hasil = hasil * 2;
		if(hasil == N){
			i = N;
		}else if(hasil > N){
			i = N;
		}
	}
if(hasil != N){
	printf("FALSE\n");
}else{
	printf("TRUE\n");
}
	return 0;
}
