/*
 * Program :*_dimas.c
 * Deskripsi :
 * Author : Dimas Aji Wardhana
 * Tanggal/versi :
 * Compiler : TDM-GCC 4.9.2 64-bit Release
*/

#include<stdio.h>

/*prototype*/
char alfabet(int A);
/*program utama*/
int main(){
	int A,B;
	scanf("%d %d",&A,&B);
	for(int i = 64+B;i>64+B-A;i--){
		if(i!=64+B-A-1){
			printf("%c ",i);
		}
		else{
			printf("%c\n",i);
		}
	}
	return 0;
}
/*fungsi dan prosedur*/
