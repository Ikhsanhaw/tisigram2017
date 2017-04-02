#include <stdio.h>

int main(){
	char check,A[10];
	int i,j;
	
	i=0;
	while(check!='\n'){
		scanf("%c",&A[i]);
		check=A[i];
		j=i;
		i++;}
		
	for(i=j;i>=0;i--){
		printf("%c",A[i]);}
		
	return 0;
}
