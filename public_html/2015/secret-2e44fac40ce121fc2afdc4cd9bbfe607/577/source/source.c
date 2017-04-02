#include <stdio.h>

int main(){
	char kalimat[1000][15];
	int i,N;
	scanf("%d", &N);
	for(i=0;i<N;i++){
		fflush(stdin);
		gets(kalimat[i]);
	}
	for(i=0;i<N;i++){	
		puts(kalimat[i]);
	}
	printf("\n");
	return 0;
}
