/*==================================================================*/
/*Nama 				: Debora Eirene
/*Nama Program 		: Mencari Nilai terkecil pada sebuah array
/* Tanggal Pembuatan: 9 Desember 2016
/*Waktu 			: 20.42-
/*Compiler 			: Dev-C++5.11


/*================================================================*/
#include<stdio.h>
int main(){
	int A[100][100];
	int baris, kolom, jumlah=0, sisi;
	
	scanf("%d", &sisi);
	for (baris=0; baris<sisi; baris++){
		for(kolom=0; kolom<sisi; kolom++){
			scanf("%d", &A[baris][kolom]);
		}
	}
	
		for (baris=0; baris<sisi; baris++){
		for(kolom=0; kolom<sisi; kolom++){
			if (A[baris][kolom]%6==0){
				jumlah=jumlah+1;
			}
		} 
	}printf("%d\n", jumlah);
	
	return 0;
}
