#include <stdio.h>

int main(){
	char kalimat[999][15];
	int i,j,N;
	scanf("%d", &N);
	for(i=0;i<N;i++){
		fflush(stdin);
		gets(kalimat[i]);
	}
	for(i=0;i<N;i++){	
		for(j=0;j<15;j++){
			printf("%c", kalimat[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
