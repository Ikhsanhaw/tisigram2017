#include <stdio.h>

int main(){
	int i,N,x;
	scanf("%d %d", &N, &i);
	i=64+i;
	for(x=N;x>0;x--){
		if(x==1){
			printf("%c\n", i);
		}else{
			printf("%c ", i);
		}
		i--;
	}
	return 0;
}
