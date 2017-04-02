#include <stdio.h>

int main(){
	int n,kb,k,jumlah;

	scanf("%d",&n);
	kb=(n*6)/20;
	jumlah=(kb+(kb*6))+(n+(n*6));
	printf("%d\n",jumlah);

	return 0;
}