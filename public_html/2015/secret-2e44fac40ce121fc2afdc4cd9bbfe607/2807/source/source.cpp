#include <stdio.h>

int main(){
	int N,X[100];
	
	scanf("%d\n",&N);
	for (int i=0;i<N;i++){
		scanf("%d",&X[i]);
	}
	printf("\n");
	for(int i=0;i<N;i++){
		printf("%c",X[i]);
	}
	return 0;
}
