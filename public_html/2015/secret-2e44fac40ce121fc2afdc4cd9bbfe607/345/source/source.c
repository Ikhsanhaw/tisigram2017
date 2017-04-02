#include <stdio.h>

int main(){
	char vokal;
	scanf("%c", &vokal);
	vokal=tolower(vokal);
	if(vokal == 'a' || vokal == 'i' || vokal == 'u' || vokal == 'e' || vokal == 'o'){
		printf("True");
	}
	else{
		printf("False");
	}
	printf("\n");
	return 0;
}
