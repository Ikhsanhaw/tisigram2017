#include <stdio.h>
#include <ctype.h>

int main(){
	char X;
	scanf("%c", &X);
	
	X = tolower(X);
	
	if(X=='a' | X=='i' || X=='u' || X=='e' || X=='o'){
		printf("True");
	}else{
		printf("False");
	}
	
	printf("\n");
	return 0;
}
