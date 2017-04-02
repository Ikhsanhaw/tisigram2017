#include <stdio.h>

int main(){
	char kalimat[15][15];
	int i,N;
	scanf("%d", &N);
	for(i=0;i<N;i++){
		scanf("%s",&kalimat[i]);
	}
	for(i=0;i<N;i++){
		if(i==N-1){
			printf("%s",kalimat[i]);	
		}else{	
		printf("%s\n",kalimat[i]);
		}
	}
	printf("\n");
	return 0;
}
