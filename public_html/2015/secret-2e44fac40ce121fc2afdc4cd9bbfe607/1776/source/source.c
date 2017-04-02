#include <stdio.h>

int factorial(int fa);

int main(){
	int N,M;
	scanf("%d",&N);
	scanf("%d",&M);
	int fac = N-M+1;
	if(M!=1){
		printf("%d",factorial(fac));
	}else{
		printf("%d",N);
	}
}

int factorial(int fa){
	if(fa>0){
		return (fa*factorial(fa-1));
	}else if(fa==0){
		return 1;
	}
}
