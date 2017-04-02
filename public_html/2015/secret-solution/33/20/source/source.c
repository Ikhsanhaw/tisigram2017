#include <stdio.h>
int main(){
	unsigned long long int X;

	scanf("%lld",&X);
	if(X%2==1){
		printf("1\n");
	}else{
		printf("0\n");
	}

	return 0;
}