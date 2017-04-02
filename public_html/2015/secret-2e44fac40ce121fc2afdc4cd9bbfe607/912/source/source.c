#include <stdio.h>

int main(){
	int S, M;
	scanf("%d %d", &S, &M);
	if(S*2 >= M){
		printf("PERANG\n");
	}else{
		printf("MUNDUR\n");
	}
	return 0;
}
