#include <stdio.h>

int main(){
	int i,N;
	scanf("%d", &N);
	if(N>=1 && N<=100){
		for(i=0;i<N;i++){
			printf("Halo, Indah!\n");
		}
	}
	printf("\n");
	return 0;
}
