#include <stdio.h>

int main(){
	
	char A[] ="Halo, Indah!";
	
	int i, input;
	
	scanf("%d", &input);
	if(input>=1 && input <=100){
		for(i = 0; i<input;i++){
			printf("%s\n", A);
		}
	}

	return 0;
}