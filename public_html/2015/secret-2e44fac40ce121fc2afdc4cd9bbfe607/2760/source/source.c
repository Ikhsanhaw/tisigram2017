#include<stdio.h>

int main(){
	int n,i,ar[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n;i++){
		printf("%c",ar[i]);
	}
	printf("\n");
	return 0;
}
