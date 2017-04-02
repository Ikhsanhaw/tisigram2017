#include <stdio.h>

int main(){
	int n,index,temp,a,max;
	scanf("%d",&n);
	int A[n];
	int i;

	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}

	for(a=n-1;a>=0;a--){
		max = A[a];
		index = a;
		for(i=a;i>=0;i--){
			if(max < A[i]){
				max = A[i];
				index = i;
			}
		}
		temp = A[a];
		A[a] = A[index];
		A[index] = temp;
	}

	int B[n];
	for(i=0;i<n;i++){
		if(i%2==0){
			B[i/2] = A[i];
		}
		else{
			B[(n-1)-(i/2)] = A[i];
		}
	}

	for(i=0;i<n;i++){
		printf("%d\n",B[i]);
	}
}
