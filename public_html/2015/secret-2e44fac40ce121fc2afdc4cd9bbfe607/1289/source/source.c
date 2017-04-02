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
	int i,j;
	scanf("%d %d",&i,&j);
	if(j==0){
		printf("0 %d",i);
	}
	else{
	printf("%d %d\n",i/j,i%j);	
	}
	return 0;
}
/*fungsi dan prosedur*/

