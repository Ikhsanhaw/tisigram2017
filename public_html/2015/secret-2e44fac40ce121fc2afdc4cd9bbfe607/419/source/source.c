#include <stdio.h>

int main(){
	int i,N,x;
	scanf("%d %d", &N, &i);
	i=64+i;
	for(x=N;x>0;x--){
		printf("%c ", i);
		i--;
	}
	printf("\n");
	return 0;
}
