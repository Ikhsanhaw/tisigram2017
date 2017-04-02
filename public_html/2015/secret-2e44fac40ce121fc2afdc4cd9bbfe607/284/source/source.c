#include <stdio.h>

int main(){
	char vokal;
	scanf("%c",&vokal);
	if (vokal=='A'||vokal=='a'||vokal=='i'||vokal=='I'||vokal=='e'||vokal=='E'||vokal=='o'||vokal=='O'||vokal=='u'||vokal=='U'){
		printf("True\n");
	}
	else { 
		printf("False\n");
	}
	return 0;
}
