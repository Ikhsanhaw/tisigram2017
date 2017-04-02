#include <stdio.h>
#include <string.h>

int main(){
	char huruf;
	
	scanf("%c", &huruf);
	huruf = tolower(huruf);
	if(huruf == 'a' || huruf == 'i' || huruf == 'u' || huruf == 'e' || huruf == 'o'){
		printf("True\n");
	}else{
		printf("False\n");
	}
	
	return  0;
}
