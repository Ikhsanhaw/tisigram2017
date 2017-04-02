#include <stdio.h>

int main(){
	int P,K,N;
	scanf("%d %d %d",&P,&K,&N);
	if (N!=0)
		printf("%d\n",((P+N) % K )-1);
	else
		printf("%d\n",P);
	return 0;
}