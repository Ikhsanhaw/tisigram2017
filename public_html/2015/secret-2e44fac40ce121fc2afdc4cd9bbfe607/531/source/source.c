#include <stdio.h>
#include <string.h>

int main(){
	char text;
	scanf("%c",&text);
	text = tolower(text);;
	if(text == 'a'||text=='e'||text=='i'||text=='o' || text=='u' ){
		printf("True\n");
	}else printf("False\n");
	
	return 0;
}
