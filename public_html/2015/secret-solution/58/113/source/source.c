#include <stdio.h>

int main(){
	char c;
	scanf("%c",&c);
	if(c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o'){
		printf("Huruf Vokal\n");
	}
	else{
		printf("Bukan Huruf Vokal");
	}
	return 0;
}
