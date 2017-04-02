#include <stdio.h>
#include <stdlib.h>

int compare(const void *A, const void *B) {
    const int *iA = (const int *) A;
    const int *iB = (const int *) B;

    if ( *iA > *iB ) return 1;
    else if ( *iA == *iB ) return 0;
    return -1;
}

int main(){
	int M,N,i,j;
	scanf("%d %d",&M,&N);
	int formasi[M*N];

	for ( i = 0 ; i < M*N ; i++)
		scanf("%d",&formasi[i]);

	qsort(formasi,M*N,sizeof(int),compare);

	for (i = 1 ; i <= M ; i++ ){
		int k = N*i - 1;
		for ( j = 1 ; j <= N ; j++){
			printf("%d",formasi[k]);
			if (j!=N) printf(" ");
			k--;
		}
		printf("\n");
	}
	return 0;
}