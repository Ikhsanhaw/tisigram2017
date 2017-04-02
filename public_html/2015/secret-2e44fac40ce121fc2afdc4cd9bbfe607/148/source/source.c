#include <stdio.h>
#include <string.h>

int main(){
	int N,i;
	scanf("%d", &N);
	char kata[N][16];
	for(i = 0; i < N ; i++){
		scanf("%s", kata[i]);
	}
	for(i = 0; i < N ; i++){
		printf("%s\n", kata[i]);
	}
}
