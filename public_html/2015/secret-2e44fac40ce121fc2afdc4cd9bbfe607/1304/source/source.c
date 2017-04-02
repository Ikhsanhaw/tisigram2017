#include<stdio.h>

int main(){
	int i, j, h,lvl;
	
	scanf("%d", &lvl);
	
	printf("*\n");
	for(i=2;i<=lvl;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n*\n");
	}
	
	for(i=lvl-1;i>1;i--){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n*\n");
	}
	return 0;
}
