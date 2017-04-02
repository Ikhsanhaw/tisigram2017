#include <stdio.h>

int main(){
	
	char input;
	
	scanf("%c", &input);
	
	if(tolower(input) == 'a' ||tolower(input) == 'i' || tolower(input) ==  'u' || tolower(input) ==  'e' || tolower(input) ==  'o' ){
		printf("True\n");
	} else {
		printf("False\n");
	}
	
	
	
	return 0;
}
