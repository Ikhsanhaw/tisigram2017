/*==================================================================*/
/*Nama 				: Debora Eirene
/*Nama Program 		: Mencari Nilai terkecil pada sebuah array
/* Tanggal Pembuatan: 9 Desember 2016
/*Waktu 			: 19.49-20.02
/*Compiler 			: Dev-C++5.11


/*================================================================*/
#include <stdio.h>
#include <string.h>
int main(){

	char teks[10];
	int i;
	
  /* PROSES */
  	scanf("%[^\n]", teks);
  	
  	for(i=strlen(teks)-1; i>=0; i--){
  		printf("%c", teks[i]);
  	}
  	printf("\n");
  
  	return 0;
	
}
