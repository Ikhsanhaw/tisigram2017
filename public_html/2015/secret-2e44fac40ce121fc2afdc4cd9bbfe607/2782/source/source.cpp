#include <stdio.h>

int main(){
	int N,a,b;
	
	scanf("%d",&N);
	a=N*6;
	while (a>=20){
		N++;
		a=a-20;
	}
	b=N*6;
	b=b+N;
	printf("%d\n",b);
}
