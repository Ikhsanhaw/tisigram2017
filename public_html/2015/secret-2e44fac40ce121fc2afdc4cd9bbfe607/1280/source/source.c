/*
 * Program :*_dimas.c
 * Deskripsi :
 * Author : Dimas Aji Wardhana
 * Tanggal/versi :
 * Compiler : TDM-GCC 4.9.2 64-bit Release
*/

#include<stdio.h>
#include<math.h>
/*prototype*/
/*program utama*/
int main(){
	int i,j=2;
	scanf("%d",&i);
	while(j<i)	{
		j=j*2;
	}
	if(j==i){
		printf("TRUE\n");
	}
	else{
		printf("FALSE\n");
	}
	return 0;
}
/*fungsi dan prosedur*/

