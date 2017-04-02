#include <stdio.h>
#include <string.h>

int main(){
		char x;
	
		scanf("%c",&x);
		x=tolower(x);
		
		if((x=='a')||(x=='i')||(x=='u')||(x=='e')||(x=='o')){
			printf("True\n");
		}else{
			printf("False\n");
		}
	return 0;
}
