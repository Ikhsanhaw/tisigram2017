/* Program : Tisigram_J.c
Deskripsi : jarak manhattan
Nama : Yudisthira Poyoh
Tanggal : 22 Maret 2016
Compiler : Dev-C++ 5.11
========================================================*/

#include <stdio.h>

int main() {
	int harga,tanggal,total;
	scanf("%d",&harga);
	scanf("%d",&tanggal);
	if (harga >= 50000) {
		total = harga -  (tanggal * harga) /100;
	} else {
		total = harga;
	}
	printf ("%d\n",total);
	return 0;
}
