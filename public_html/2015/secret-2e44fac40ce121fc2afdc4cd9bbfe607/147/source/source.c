#include <stdio.h>

int main(){
	int n,kar;
	scanf("%d %d",&n,&kar);
	kar = 64 + kar;
	while(n>=1){
		printf("%c ",kar);
		kar += 1;
		n--;
	}
	printf("\n");
	return 0;
}
