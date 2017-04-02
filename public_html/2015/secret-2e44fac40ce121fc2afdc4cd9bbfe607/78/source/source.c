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
	int B;
	scanf("%d",&B);
	scanf("%d",&A);
	if(B>=50000){
	printf("%d\n", B-(A*B/100));	
	}
	else{
		printf("%d\n", B);	
	}
	
	return 0;
}
/*fungsi dan prosedur*/

