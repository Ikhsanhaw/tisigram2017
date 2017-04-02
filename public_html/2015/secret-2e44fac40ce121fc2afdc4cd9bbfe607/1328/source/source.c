#include <stdio.h>
#include <math.h>

int main(){
	int n;
	
	scanf("%d",&n);
	
	int i,stats=0;
	for(i=0;i<=20;i++){
		if(n==pow(2,i)){
			printf("TRUE");
			stats=1;
		}
	}
	
	if(stats==0){
		printf("FALSE");
	}
	printf("\n");
	
	return 0;
}
