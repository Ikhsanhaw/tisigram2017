#include <stdio.h>

int main(){
	int i, n;
	char K[1000][15];
	
	scanf("%d",&n);
	for(i=0; i<=n; i++){
		gets(K[i]);
	}
	
	for(i=0; i<=n+1; i++){
		printf("%s\n", K[i]);
	}

	
	return 0;
	
}
