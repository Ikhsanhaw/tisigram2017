#include <stdio.h>
#include<string.h>

int main(){
	char huruf;
	char vokal[5] = {"aeiou"};
	int i=0,isvocal=0;
	scanf("%c", &huruf);
	
	while (i < 5 && isvocal==0){
		if (tolower(huruf) == vokal[i]){
			isvocal = 1;
		}
		i++;
	}
	
	if (isvocal == 0){
		printf("False\n");
	}
	else{
		printf("True\n");
	}
	

	return 0;
}
