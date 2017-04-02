#include <stdio.h>
#include <string.h>

int main(){
	int n,i,j,count=0;
	scanf("%d",&n);
	int A[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&A[i][j]);
		}
	}
	for(i=n-1;i>=0;i--){
		for(j=0;j<n;j++){
			if(A[i][j]%2==0 || A[i][j]%3==0){
				count++;
			}
		}
	}
	printf("%d\n",count);
	return 0;
}