#include <stdio.h>
#include <string.h>

void swap(char A[30],char B[2]){
	int i;
	
	for(i = 0;i < 30; i++){
			if(A[i] == B[0]){
				A[i] = B[1];
			}
			else if(A[i] == B[1]){
				A[i] = B[0];
			}			
	}
	
	printf("%s",A);
}

int main(){
	char A[30];
	char B[2];
	
	//_flushall();
	gets(A);
	flushall();
	gets(B);
	
	swap(A,B);
	printf("\n");	
	return 0;
}
