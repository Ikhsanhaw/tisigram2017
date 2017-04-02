#include <stdio.h>
#include <string.h>

int main(){
	
	char A[10];
	int i;
	
	
	gets(A);
	
	int b=strlen(A);
		
	for(i=b-1;i>=0;i--){
		printf("%c", A[i]);
	}
	printf("\n");
	
	return 0;
}
