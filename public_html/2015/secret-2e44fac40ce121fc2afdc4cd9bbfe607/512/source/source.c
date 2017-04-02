/*=========================================
*	Program 		: Tisigram-E.c
*	Nama 			: Hadiarto B
*	Tanggal/Versi 	: 24 Maret 2016, v01.0
*	Compiler		: Dev-C++ v5.1.0
*	Catatan			: 
=========================================*/
#include<stdio.h>
#include<math.h>

int main(){
	/* Kamus data */
	float celcius,fahrenheit;
	
	/* Algorima */
	scanf("%f", &celcius);
	fahrenheit = (celcius * 1.8)+32;
	printf("%.2f\n", fahrenheit);
	return 0;
}
