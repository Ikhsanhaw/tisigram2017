#include <stdio.h>

void swap(long *bil1, long *bil2);
long max(long bil[], int N);
long sum(long N);

int main(){
	int N,k,i,j,jumlahbbil, found;
	long maks=0;
	scanf("%d", &N);
	long A[N];
	long tinggi[N], jumlah[N];
	
	
	
	for (i = 0; i < N; i++){
		scanf("%li", &A[i]);
	}
	maks = max(A,N);
	
	k=0;
	for(i = 0; i < N; i++){
		found = 0;
		j = 0;
		if (k == 0){
			tinggi[k] = A[i];
			jumlah[k] = 1;
			k++;
		}
		else{
			while(j < k && found == 0){
				if (tinggi[j] == A[i]){
					found = 1;
				}
				j++;
			}
			if (found == 0){
				tinggi[k] = A[i];
				jumlah[k] = 1;
				k++;
			}
			else{
				jumlah[j-1]++;
			}
		}
	}
	
	found = 0;
	i= 0;
	while (i < k && found == 0){
		if (tinggi[i] < jumlah[i]){
			found = 1;
		}
		i++;
	}
	if (found == 1){
		printf("-1\n");
	}
	else{
		printf("%li\n", sum(maks));
	}
	
	
	return 0;
}

void swap(long *bil1, long *bil2){
	int temp;
	temp = *bil1;
	*bil1 = *bil2;
	*bil2 = temp;
}

long max(long bil[], int N){
	int i;
	long max = 0;
	
	for (i = 0; i < N;i++){
		if (bil[i] > max){
			max = bil[i];
		}
	}
	
	return max;
}

long sum(long N){
	int i;
	long S;
	
	S = (N*(1+N))/2;
	
	return S;
}
