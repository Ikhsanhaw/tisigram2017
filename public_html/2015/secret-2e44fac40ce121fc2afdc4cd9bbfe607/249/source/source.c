#include <stdio.h>

int main(){
	int N, i, index;
	scanf("%d %d", &N, &i);
	
	for (index = i-1; index >= i - N; index--){
		if (index < i-1){
			printf(" ");
		}
		printf("%c", 'A' + index);
	}
	printf("\n");
	return 0;
}
