/* Program 		: CelciusToFahrenheit_Fahmi.c
Deskripsi 		: Mengkonversi suhu dalam Cecius ke Fahrenheit
Nama 			: Fahmi Faturahman Nul Hakim
Tanggal/versi 	: 05112015/V1.0
Compiler 		: Dev-C++ 5.7.1
Catatan			: F= C x 1.8 + 32
============================================================
*/

#include <stdio.h>
#include <math.h>
int main()

{ /* DEKLARASI */
	float fahrenheit,celcius;
	
  /* PROSES */
  	scanf("%f", &celcius);
  	if (-100<=celcius<=100);{
  		fahrenheit=celcius*1.8+32;
    }
    
  	printf("%.2f\n", fahrenheit);
  	return 0;
}
