#include <stdio.h>
#include <string.h>

int main(){
	int n,i,j;
	scanf("%d",&n);
	int A[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&A[i][j]);
		}
	}
	for(i=n-1;i>=0;i--){
		for(j=0;j<n;j++){
			if(j!=n-1){
				printf("%d ",A[i][j]);
			}
			else{
				printf("%d",A[i][j]);	
			}
		}
		printf("\n");
	}
	return 0;
}