#include <stdio.h>

int main(){
	int n,m,i;
	scanf("%d %d", &n,&m);
	
	for(i=m;i>m-n;i--){
		if (i==(m-n+1)){
		printf("%c", i+64);	
		}else printf("%c ", i+64);
	}
	printf("\n");
	return 0;
}
