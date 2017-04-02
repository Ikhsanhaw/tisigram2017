#include <stdio.h>
#include <string.h>

int main(){
	char A[50];
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		fflush(stdin);
		gets(A);
		for(j=0;j<strlen(A);j++){
			if(A[j] % 2 == 0){
				printf("%c",A[j]);
			}
		}
		printf("\n");
	}
}
