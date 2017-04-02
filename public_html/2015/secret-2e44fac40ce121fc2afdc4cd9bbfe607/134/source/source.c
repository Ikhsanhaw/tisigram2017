#include <stdio.h>

int main(){
	int n, i;
	
	scanf("%d",&n);
	if((n > 0) && (n <= 1000)){
		for(i = 0; i < n; i++){
			char karakter[n];
			scanf("%s",karakter);
			printf("%s\n",karakter);
		}
	}
	
	return 0;
}
