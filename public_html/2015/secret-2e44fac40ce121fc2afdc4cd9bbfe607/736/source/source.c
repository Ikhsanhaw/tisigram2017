#include <stdio.h>
#include <string.h>

int main(){
	char A[10]="";
	int jum=0;
	scanf("%[^\n]", A);
	
	while(A[jum]){
		jum++;	
	}
	
	jum=jum-1;
	while(jum>=0){
		printf("%c", A[jum]);
		jum--;
	}
	printf("\n");
	
	return 0;
}
