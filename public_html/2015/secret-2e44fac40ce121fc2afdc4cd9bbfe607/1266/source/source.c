#include <stdio.h>
#include <string.h>

int main(){
	char A[2001], B[2001];
	gets(A);
	gets(B);
	int i, j, k, count = 0;
	for(i = 0 ; i < strlen(A) ; i++){
		j = 0;
		k = i;
		while(A[i] == B[j] && j < strlen(B)){
			i++;
			j++;
		}
		if(j == strlen(B)){
			count++;
		}
		i = k;
	}
	printf("%d\n", count);
	
	return 0;
}
