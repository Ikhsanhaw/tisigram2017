#include <stdio.h>

int main(){
	char check,A[10];
	int i;
	
	i=0;
	scanf("%s",A);
	for(i=strlen(A)-1;i>=0;i--){
		printf("%c",A[i]);}
	return 0;
}
