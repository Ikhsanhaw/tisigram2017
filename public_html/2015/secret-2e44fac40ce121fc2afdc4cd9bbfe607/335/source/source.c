#include <stdio.h>

int main(){
	char x[10];
	int i;
	
	gets(x);
	
	for(i=strlen(x)-1; i>=0; i--){
		printf("%c", x[i]);
	}
	printf("\n");
	return 0;
}
