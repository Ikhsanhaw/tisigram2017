#include <stdio.h>
#include <string.h>

int cekpal(){
	char A[101];
	scanf("%s", &A);
	char B[strlen(A)];
	int pal = strlen(A), i, j, k, l, jml_char;
	for(j = 1 ; j < strlen(A) ; j++){
		for (i = 0 ; i < strlen(A) - j ; i++){
			l = 0;
			for(k = 0 ; k <= j ; k++){
				B[l] = A[k + i];
				l++;
			}
			pal = pal + cekcekpal(B, l);
		}
	}
	return pal;
}

int cekcekpal(char B[], int jml_huruf){
	int i = 0, cek = 1;
	while(i < jml_huruf/2 && cek == 1){
		if(B[i] != B[jml_huruf - 1 - i]){
			cek = 0;
		}
		i++;
	}
	return cek;
}

int main(){
	int tc;
	scanf("%d", &tc);
	int i, pal[tc];
	for(i = 0 ; i < tc ; i++){
		pal[i] = cekpal(); 
	}
	for(i = 0 ; i < tc ; i++){
		printf("%d\n", pal[i]);
	}
	
	return 0;
}
