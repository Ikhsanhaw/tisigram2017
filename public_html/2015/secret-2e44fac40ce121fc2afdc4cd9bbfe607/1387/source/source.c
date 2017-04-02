#include <stdio.h>

int main(){
	int input;
	scanf("%d", &input);
	
	while(input%2 == 0){
		input = input/2;
	}
	if(input == 1){
		printf("TRUE");
	}else{
		printf("FALSE");
	}
	printf("\n");
}
