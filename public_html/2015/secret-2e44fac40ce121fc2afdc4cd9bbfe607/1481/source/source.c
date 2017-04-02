#include<stdio.h>


int main(){
	int T,N;
	int i;
	scanf("%d", &N);
	long M[N];
	int sum[N];
	
	for (i = 0; i < N; i++){
		scanf("%li", &M[i]);
		sum[i] = 0;
	}
	for (i = 0; i < N; i++){
		while (M[i]%10 == 0 && M[i] != 0){
			if (M[i] % 10 == 0){
				sum[i]++;
			}
			M[i] = M[i] /10;
		}
		printf("%d\n", sum[i]);
	}
		
	
	return 0;	
}
