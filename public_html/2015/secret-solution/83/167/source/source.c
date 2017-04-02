#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,N;
	scanf("%d",&N);
	for ( i = 0 ; i < N ; i++ ){
		int A;
		scanf("%d",&A);
		printf("%c",A);
	}
	printf("\n");
	return 0;
}