/*==================================================================*/
/*Nama 				: Debora Eirene
/*Nama Program 		:
/* Tanggal Pembuatan: 9 Desember 2016
/*Waktu 			: 19.17-19.27
/*Compiler 			: Dev-C++5.11


/*================================================================*/
#include <stdio.h>

int main(){
	int A[100][100];
	int sisi, baris, kolom;
	int jumlah=0;
	scanf("%d", &sisi);
	
	for (baris=0;baris<sisi; baris++){
		for(kolom=0;kolom<sisi; kolom++ ){
			scanf("%d", &A[baris][kolom]);
		}
	}
	
	for (baris=0; baris<sisi; baris++){
		for(kolom=0; kolom<sisi; kolom++){
			jumlah= jumlah+A[baris][kolom];
		}
	}
	printf("%d", jumlah);
	return 0;
}
