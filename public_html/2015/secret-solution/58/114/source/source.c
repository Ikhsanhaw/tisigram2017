#include <stdio.h>

int main(){
	char c;
	scanf("%c",&c);
	if(c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o' || c == 'A' || c == 'I' || c == 'U' || c == 'E' || c == 'O'){
		printf("Huruf Vokal\n");
	}
	else{
		printf("Bukan Huruf Vokal\n");
	}
	return 0;
}
