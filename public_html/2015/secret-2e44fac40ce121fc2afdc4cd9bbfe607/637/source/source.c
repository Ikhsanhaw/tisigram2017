#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef char string[1000];
int main(){
	int N,i;
	scanf("%d",&N);
	while(N--){
		string S;
		fflush(stdin);
		scanf("%s",S);
		for ( i = 0 ; i < strlen(S) ; i++){
			if (S[i] % 2 == 0)
				printf("%c",S[i]);
		}
		printf("\n");
	}
	return 0;
}
