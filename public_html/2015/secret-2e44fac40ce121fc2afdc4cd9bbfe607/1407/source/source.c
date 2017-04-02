#include <stdio.h>

int isSquareRoot(int n, int count);

int main(){
	int input, hitung=0;
	
	scanf("%d", &input);
	
	if(isSquareRoot(input, hitung)==1){
		printf("TRUE\n");	
	}else{
		printf("FALSE\n");
	}
	
	return 0;
}

int isSquareRoot(int n, int count){
	if(n==1){
		if(count==0){
			return 0;
		}else{
			return 1;	
		}
	}else{
		if(n%2==0){
			count++;
			return isSquareRoot(n/2, count);
		}else{
			return 0;	
		}
	}
}
