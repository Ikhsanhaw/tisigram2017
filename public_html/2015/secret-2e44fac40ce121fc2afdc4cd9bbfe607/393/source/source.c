#include <stdio.h>
#include <string.h>



int main(){
	char text[11];
	int i;
	
	gets(text);
	for(i=strlen(text)-1;i>=0;i--){
		printf("%c",text[i]);
	}
	printf("\n");
	return 0;
}
