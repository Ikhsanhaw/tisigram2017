#include <stdio.h>

int main(){
	long int i, b;
	scanf("%ld", &b);
	i = 2;
	while(i < b){
		i = i*2;
	}
	if(i == b){
		printf("TRUE\n");
	}else{
		printf("FALSE\n");
	}
	
	return 0;
}
