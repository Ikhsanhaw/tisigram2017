#include <stdio.h>

int main(){
	struct Kalimat{
		char kata[15];
	}kalimat[1000];
	int i,N;
	
	scanf("%d", &N);
	for(i=0;i<N;i++){
		fflush(stdin);
		gets(kalimat[i].kata);
	}
	for(i=0;i<N;i++){
		printf("%s\n", kalimat[i].kata);
	}

	return 0;
}
