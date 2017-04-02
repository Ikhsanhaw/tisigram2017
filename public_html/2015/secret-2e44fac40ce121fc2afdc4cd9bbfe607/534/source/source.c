#include <stdio.h>


int main(){
	
	int i,max,total;
	scanf("%d", &total);
	int A[total];
	
	for(i=0;i<total;i++){
		scanf("%d", &A[i]);
	}
	max=0;	
	for(i=0; i<total;i++ ){
		if (A[i] > max){
			max = A[i];
		}
	
	}
		printf("%d\n", max);
		return 0;
	
}

