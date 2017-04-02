#include <stdio.h>

int main(){
	int A[3],i;
	for(i=0;i<3;i++){
		scanf("%d", &A[i]);
	}
	printf("%d\n", A[0]);
	if(A[0] == 0 && A[1] != 0){
		printf("mustahil\n");
	}else{
		printf("%d\n", A[0]+A[1]);
	}
	if(A[0]-A[2] < 0){
		printf("mustahil\n");
	}else{
		printf("%d\n", A[0]-A[2]);
	}
	return 0;
}
