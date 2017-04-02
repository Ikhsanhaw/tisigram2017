/*
======================================================================================

Program 		: TISIGRAM.c
Deskripsi		: TISIGRAM
Nama			: Herdhiantoko Fathani Sandra
Tanggal/Versi	: 2016, v.01
Compiler		: Dev-C++ 5.10

======================================================================================
*/

#include <stdio.h>
#include <math.h>

int main()
{
	int harga;
	int tanggal;
	float hasil;
	scanf("%d", &harga);
	scanf("%d", &tanggal);
	hasil = harga - (harga*1/100*tanggal);
	printf("%.0f\n", hasil);
	
	return 0;
}
