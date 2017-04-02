#include <stdio.h>

int main() {
	int N;
	scanf("%d",&N);
	int A[N][N], i,j,c=0;
	for(i=0;i<N;i++) {
		for(j=0;j<N;j++) {
			scanf("%d",&A[i][j]);
			if(A[i][j]%2==0 && A[i][j]%3==0)
				c++;
		}
	}
	printf("%d\n", c);
	return 0;
}