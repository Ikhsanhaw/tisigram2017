#include <stdio.h>

int main(){
	char kalimat[999][16];
	int i,N;
	scanf("%d", &N);
	for(i=0;i<N;i++){
		fflush(stdin);
		gets(kalimat[i]);
	}
	for(i=0;i<N;i++){	
		printf("%s\n",kalimat[i]);
	}
	return 0;
}
