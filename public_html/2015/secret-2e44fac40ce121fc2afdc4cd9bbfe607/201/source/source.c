/*
======================================================================================

Program 		: CelciusToFahrenheit_Herdhiantoko.c
Deskripsi		: Mengkonversi suhu dalam Celcius ke Fahrenheit
Nama			: Herdhiantoko Fathani Sandra
Tanggal/Versi	: 30 Oktober 2015, v.01
Compiler		: Dev-C++ 5.10
Catatan			: F = C x 1,8 + 32

======================================================================================
*/

#include <stdio.h>
#include <math.h>

int main()
{
	// Kamus Data
	float Celcius, Fahrenheit;
	// Algoritma
	scanf("%f", &Celcius);
	Fahrenheit = (Celcius * 1.8) + 32;
	
	printf("%.2f\n", Fahrenheit);
	return 0;
}
