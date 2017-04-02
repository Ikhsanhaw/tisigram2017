#include <stdio.h>

int main(){
	char check,A[10];
	int i;
	
	i=0;
	scanf("%s",A);
	for(i=strlen(A);i>=0;i--){
		printf("%c",A[i]);}
	return 0;
}
