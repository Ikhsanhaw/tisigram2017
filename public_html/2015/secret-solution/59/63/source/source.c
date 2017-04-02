#include <stdio.h>

int main(){
	int N;
	scanf("%d",&N);
	int i,j,pascal[N+5][N+5] ;

	for ( i = 0 ; i <= N ; i++ ){
		for ( j = 0 ; j <= N ; j++ ){
			pascal[i][j] = 0;
		}
	}

	pascal[0][1] = 1;
	for ( i = 1 ; i <= N ; i++ ){
		for ( j = 1 ; j <= i ; j++ ){
			pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
		}
	}

	for ( i = 1 ; i <= N ; i++ ){
		for ( j = 1 ; j <= i ; j++ ){
			printf("%d",pascal[i][j]);
			if (j != i ) printf(" ");
		}printf("\n");
	}


	return 0;
}