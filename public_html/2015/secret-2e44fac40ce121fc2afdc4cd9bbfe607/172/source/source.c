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
	char A, B;
	scanf("%c %c",&A, &B);
	for(int i = A-1; i>B; i--){
		printf("%c\n",i);
	}
	return 0;
}
/*fungsi dan prosedur*/

