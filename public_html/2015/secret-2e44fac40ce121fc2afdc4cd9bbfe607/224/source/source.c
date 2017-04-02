#include <stdio.h>

int main(){
	int N, i, index;
	char huruf[26]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	scanf("%d %d", &N, &i);
	
	for (index = i-1; index >= i - N; index--){
		if (index < i-1){
			printf(" ");
		}
		printf("%c", huruf[index]);
	}
	printf("\n");
	return 0;
}
