#include <stdio.h>

int main(){
	char kar[10];
	gets(kar);
	
	int i=strlen(kar)-1;
	
	if(i>10){
		i=9;
	}
	while(i!=-1){
		printf("%c",kar[i]);
		i--;
	}
	printf("\n");
	
	return 0;
}
