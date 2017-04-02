/*
 * Program :*_dimas.c
 * Deskripsi :
 * Author : Dimas Aji Wardhana
 * Tanggal/versi :
 * Compiler : TDM-GCC 4.9.2 64-bit Release
*/

#include<stdio.h>

/*prototype*/
/*program utama*/
int main(){
	int A;
	scanf("%d",&A);
	char S[A][15];
	for(int i=0; i<A;i++){
		scanf("%s",&S[i]);
	}
	for(int i=0; i<A;i++){
		printf("%s\n",S[i]);
	}
	return 0;
}
/*fungsi dan prosedur*/

