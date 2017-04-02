/*
 * Program :*_dimas.c
 * Deskripsi :
 * Author : Dimas Aji Wardhana
 * Tanggal/versi :
 * Compiler : TDM-GCC 4.9.2 64-bit Release
*/

#include<stdio.h>
#include<string.h>
/*prototype*/
/*program utama*/
int main(){
	char A;
	scanf("%c",&A);
	if(A=='A'||A=='I'||A=='U'||A=='E'||A=='O'||A=='a'||A=='i'||A=='u'||A=='e'||A=='o'){
		printf("True\n");
	}
	else{
		printf("False\n");
	}
	return 0;
}
/*fungsi dan prosedur*/

