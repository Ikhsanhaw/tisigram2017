#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(){
	char input, vokal[5]= {'a','i','u','e','o'};
	bool status = false;
	int i;
	
	scanf("%c",&input);
	for(i = 0; i < 5; i++){
		if (vokal[i] == tolower(input)){
			status = true;
		}
	}
	
	if(status == true){
		printf("True\n");
	}
	else{
		printf("False\n");
	}
	
	return 0;
}
