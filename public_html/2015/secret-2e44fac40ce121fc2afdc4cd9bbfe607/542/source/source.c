#include <stdio.h>

int main(){
	int n,m,i;
	scanf("%d %d", &n,&m);
	
	for(i=m;i>m-n;i--){
		printf("%c ", i+64);
	}
	printf("\n");
	return 0;
}
