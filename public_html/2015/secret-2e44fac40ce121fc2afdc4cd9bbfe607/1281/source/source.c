#include <stdio.h>
#include <string.h>

int main(){
	int i, tc;
	scanf("%d", &tc);
	char A[tc][11];
	int B[tc];
	for(i = 0 ; i < tc ; i++){
		scanf("%s", A[i]);
		B[i] = jmlnol(A[i], strlen(A[i]) - 1);
	}
	for(i = 0 ; i < tc ; i++){
		printf("%d\n", B[i]);
	}
	return 0;
}

int jmlnol(char A[], int jml_huruf){
	int count = 0, end = 0;
	while(jml_huruf >= 0 && end == 0){
		if(A[jml_huruf] == '0'){
			count++;
		}else{
			end = 1;
		}
		jml_huruf --;
	}
	return count;
}
