#include <stdio.h>

int main(){
	int N,i,j,hasil;
	scanf("%d", &N);
	int A[N][N];
	hasil=0;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			scanf("%d",&A[i][j]);
			if(A[i][j]%2==0 && A[i][j]%3==0){
				hasil = hasil + 1;
			}
		}
	}
	printf("%d\n", hasil);
	return 0;
}
