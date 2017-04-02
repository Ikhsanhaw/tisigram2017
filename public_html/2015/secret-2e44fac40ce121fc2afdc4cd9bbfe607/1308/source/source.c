#include<stdio.h>

int main(){
	int i, j, lvl;
	
	scanf("%d", &lvl);
	
	if(lvl>10) exit(2);
	
	if(lvl==1) printf("*\n");
	
	for(i=2;i<=lvl;i++){
		printf("*\n");
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	
	for(i=lvl-1;i>1;i--){
		printf("*\n");
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	
	if(lvl!=1) printf("*\n");
	
	return 0;
}
