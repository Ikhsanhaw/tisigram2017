#include <stdio.h>

int main(){
	/* Deklarasi */
	char x;
	
	/* Proses */
	scanf("%c", &x);
	x=toupper(x);
	
	if((x=='A') || (x=='I') || (x=='U') || (x=='E') || (x=='O')){
		printf("True\n");
	}else{
		printf("False\n");
	}
	
	return 0;
}
