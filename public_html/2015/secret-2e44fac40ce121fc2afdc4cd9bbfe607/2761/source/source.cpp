#include <stdio.h>

int main(){
	int N,a,b;
	scanf("%d",&N);	
	if (N<1000){
	a=N*2;
	b=a*N;
	printf("%d\n",b);
}
	return 0;
}
