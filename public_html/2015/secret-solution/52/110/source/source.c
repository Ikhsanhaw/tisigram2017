#include <stdio.h>

int main(){
	int N, M1,M2,temp,i,j;
	unsigned long long int hasil=1;
	scanf("%d %d",&N,&M1);
	M2 = N-M1;
	if(M2 > M1){
		temp = M1;
		M1 = M2;
		M2 = temp;
	}
	int A[M2];
	for(i=0;i<M2;i++){
		A[i] = N-i;
	}

	for(i=2;i<=M2;i++){
		for(j=0;j<M2;j++){
			if(A[j] % i == 0){
				A[j] = A[j] / i;
				j = M2;
			}
		}
	}
	
	for(i=0;i<M2;i++){
		hasil = hasil * A[i];
	}
	printf("%d\n",hasil);
}
