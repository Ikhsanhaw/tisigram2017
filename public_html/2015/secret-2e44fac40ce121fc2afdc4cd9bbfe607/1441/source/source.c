/*
 * Program :*_dimas.c
 * Deskripsi :
 * Author : Dimas Aji Wardhana
 * Tanggal/versi :
 * Compiler : TDM-GCC 4.9.2 64-bit Release
*/

#include<stdio.h>

/*prototype*/
void bintang(int a);
/*program utama*/
int main(){
	int i,j,jml;
	scanf("%d",&jml);
	bintang(jml);
	return 0;
}
/*fungsi dan prosedur*/
void bintang(int a){
	int i;
	if(a==1){
		printf("*\n");
	}
	else{
		bintang(a-1);
		for(i=0;i<a;i++){
			printf("*");
		}
		printf("\n");
		bintang(a-1);
	}
}
