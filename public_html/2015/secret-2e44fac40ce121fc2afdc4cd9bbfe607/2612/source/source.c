#include <stdio.h>

int main()
{
	int n,i,j,sum=0;
	scanf("%d",&n);
	int A[n][n];
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			scanf("%d",&A[i][j]);
			sum+=A[i][j];
		}
	}
	printf("%d\n", sum);
	return 0;

}