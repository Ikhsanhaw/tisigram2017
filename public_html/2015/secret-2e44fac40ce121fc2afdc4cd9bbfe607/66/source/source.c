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
	int B[101], maks = 0;
	scanf("%d",&A);
	for(int i=0;i<A;i++){
		scanf("%d",&B[i]);
	}
	for(int i=0;i<A;i++){
		if(maks<B[i]){
			maks = B[i];
		}
	}
	printf("%d\n", maks);
	return 0;
}
/*fungsi dan prosedur*/

