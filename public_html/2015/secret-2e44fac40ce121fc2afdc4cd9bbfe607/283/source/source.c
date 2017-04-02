#include <stdio.h>

int main(){
	char vokal;
	scanf("%c",&vokal);
	if (vokal=='A'||vokal=='I'||vokal=='E'||vokal=='O'||vokal=='U'){
		printf("True\n");
	}
	else { 
		printf("False\n");
	}
	return 0;
}
