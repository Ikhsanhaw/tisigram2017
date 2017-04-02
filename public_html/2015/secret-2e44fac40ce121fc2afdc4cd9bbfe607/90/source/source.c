#include <stdio.h>

int main(){
	int n, i;
	
	scanf("%d",&n);
	if((n > 0) && (n <= 100)){
		for(i = 0; i < n; i++){
			printf("Halo, Indah!\n");
		}	
	}
	
	return 0;
}
