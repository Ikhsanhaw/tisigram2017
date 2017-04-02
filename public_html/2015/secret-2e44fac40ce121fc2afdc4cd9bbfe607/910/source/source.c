#include <stdio.h>
#include <string.h>
void cek(char A[], char B[], int jmlhuruf){
	int i, j = 0;
	for(i = 0 ; i < jmlhuruf ; i ++){
		if(A[i]%2 == 0){
			B[j] = A[i];
			j++;
		}
	}
}

int main(){
	int tc, i;
	scanf("%d", &tc);
	char input[tc+1][51], output[tc][51];
	for(i = 0 ; i < tc ; i ++){
		scanf("%s", &input[i]);
		cek(input[i], output[i], strlen(input[i]));
	}
	for(i = 0 ; i < tc ; i ++){
		printf("%s\n", output[i]);
	}
	return 0;
}
