#include <stdio.h>

int main(){
	int i,n;
	
	scanf("%d",&n);
	
	int a[n];
	
	for(i = 0;i < n; i++){
		scanf("%d",&(a[i]));
	}
	
	for(i = 0;i < n; i++){
		printf("%c",a[i]);
	}
	
	printf("\n");
	return 0;
} 
