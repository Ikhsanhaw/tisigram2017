#include <stdio.h>
#include <string.h>

int main(){
	char string[1000];
	gets(string);
	int i,kres=0,minor=0;
	
	for(i=0;i<strlen(string);i++){
		if(string[i] == '#'){
			kres++;
		}
		if(string[i] == 'm'){
			minor++;
		}
	}
	printf("%d %d\n",kres,minor);
}
