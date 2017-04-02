/*====================================================================================================
*	Program 		: Tisigram-B.c
*	Deskripsi 		: SapaDunia
*	Nama 			: Hadiarto B
*	Tanggal/Versi 	: 24 Maret 2016, v01.0
*	Compiler		: Dev-C++ v5.1.0
*	Catatan			: 
====================================================================================================*/
#include<stdio.h>
#include<string.h>

int main(){
	/* Kamus Data */
	char kata[10];
	char temp;
	int i,j;
	
	/* Algoritma */
	gets(kata);
	for(i=strlen(kata)-1 ; i>=0 ; i--) {
		printf("%c", kata[i]);
	}
	printf("\n");

	return 0;
}
