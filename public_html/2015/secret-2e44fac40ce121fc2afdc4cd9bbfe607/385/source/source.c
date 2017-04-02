/*
 * Program :*_dimas.c
 * Deskripsi :
 * Author : Dimas Aji Wardhana
 * Tanggal/versi :
 * Compiler : TDM-GCC 4.9.2 64-bit Release
*/

#include<stdio.h>
typedef struct{
	int Matkul[101];
}matkul;
/*prototype*/
int main(){
	int T,N, boool[11];
	matkul A[11];
	scanf("%d",&T);
	for(int i = 0;i<T;i++){
		scanf("%d",&N);
		boool[i] = 1;
		for(int j = 0; j<N;j++){
			scanf("%d",&A[i].Matkul[j]);
			if(A[i].Matkul[j]<60){
				boool[i] = 0;
			}
		}
	}
	for(int i = 0; i<T;i++){
		if(boool[i]==0){
			printf("anda harus remedial\n");
		}
		else{
			printf("lulus\n");
		}
	}
	return 0;
}
/*program utama*/
/*fungsi dan prosedur*/

