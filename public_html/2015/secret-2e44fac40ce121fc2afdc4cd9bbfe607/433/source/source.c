#include <stdio.h>
#include <string.h>
int main(){
	char kalimat[15][15];
	int i,N;
	scanf("%d", &N);
	for(i=0;i<N;i++){
		scanf("%s",kalimat[i]);
	}

	for(i=0;i<N;i++){
		printf("%s\n",kalimat[i]);
	}
	return 0;
}
