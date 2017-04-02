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
	int i,j,kata,jml_kata,jml=0;
	char B[100][10];
	
	scanf("%d",&kata);
	for(i=0;i<kata;i++){
		scanf("%s",&B[i]);
	}
	for(i=0;i<kata;i++){
		jml_kata=0;
		jml=0;
		while(B[i][jml_kata]!='\0'){
			jml_kata++;
		}
		while(B[i][jml_kata-1]=='0'){
			jml++;
			jml_kata--;
		}
		printf("%d\n",jml);
	}
	return 0;
	
}
/*fungsi dan prosedur*/

