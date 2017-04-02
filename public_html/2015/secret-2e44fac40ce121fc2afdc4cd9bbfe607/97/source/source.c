/*Program 		: CelciusToFahrenheit_Azri.c
Deskripsi 		: Mengonversi suhu dari Celcius ke Fahrenheit
Nama 			: Azri Aliva Alhania - 151524005
Tanggal/Versi	: 8 November 2015/v1.01
Compiler 		: Dev-C++ 5.11
======================================================== */
#include<stdio.h>
#include<math.h>

int main()
{
	//deklarasi
	float Fahrenheit, Celcius;
	//algoritma
	scanf("%f", &Celcius);
	Fahrenheit = Celcius*1.8 + 32;
	printf("%.2f\n", Fahrenheit);
	return 0;
}
