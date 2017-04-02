#include <stdio.h>

int main(){
	
	int input, max, i;
	int A[input];
	scanf("%d", &input);
	
	for(i =0;i<input;i++){
		scanf("%d", &A[i]);	
	}
	
	max = A[0];
	for(i=0;i<input;i++){
		if(A[i] > max){
			max = A[i];
		}
	}
	
	printf("%d\n", max);
	
	
	
	return 0;
}
