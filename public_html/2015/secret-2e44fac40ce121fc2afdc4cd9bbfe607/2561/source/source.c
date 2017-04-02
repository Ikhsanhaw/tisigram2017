#include <stdio.h>

int main(){
	int n,i,j;
	scanf("%d", &n);
	
	int A[n][j];
	int sum[n];
	
	for(i=0;i<n;i++){
		sum[i]=0;
		for(j=0;j<6;j++){
			scanf("%d", &A[i][j]);
			sum[i] += A[i][j];		
		}
	}
	
	for(i=0;i<n;i++){
		printf("%d\n", sum[i]);
	}
	
	return 0;
}
