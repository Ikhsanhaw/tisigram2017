#include<stdio.h>

int main(){
	char vokal;
	scanf("%c", &vokal);
	
	if((vokal=='A') || (vokal=='a') || (vokal=='I')|| (vokal=='i')|| (vokal=='U') || (vokal=='u') || (vokal=='E') || (vokal=='e') || (vokal=='O') || (vokal=='o')){
		
		printf("True");
	}else{
			printf("False");
	}
	return 0;
	}
	
