#include <stdio.h>

int main(){
	int i;
	char j,k;
	scanf("%c\n%c", &j,&k);
	i=j-1;
	while (i > k){
		printf("%c\n", i);
		i--;
	}

	return 0;
}
