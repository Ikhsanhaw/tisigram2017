#include <stdio.h>

int main(){
	char A[2000];
	char B[2000];
	char C[2000];
	gets(A);
	gets(B);
	int i,j,k,counter=0;
	for(i=0;i<=strlen(A)-strlen(B);i++){
		k=0;
		for(j=i;j<strlen(B)+i;j++){
			C[k] = A[j];
			k++;
		}
		if(strcmp(B,C)==0){
			counter++;
		}
	}
	printf("%d\n",counter);
}
