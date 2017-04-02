#include <stdio.h>

int main(){
	char string[200];
	gets(string);
	int i,kres=0,minor=0;
	
	for(i=0;i<strlen(string);i++){
		if(string[i] == '#'){
			kres++;
		}
		if(string[i] == 'm' && string[i+1] != 'a'){
			minor++;
		}
	}
	printf("%d %d\n",kres,minor);
}
