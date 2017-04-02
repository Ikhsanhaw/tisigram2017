/* Program		: Konversi suhu 
	Deskripsi	: Mengkonversikan suhu dari celcius ke fahrenheit
	Nama		: Rizky Adam Prananda
	Tanggal		: 22 Maret 2016
	Versi		: v0.1
	Compiler	: Dev C++ 5.7.1
*/

#include <stdio.h>
#include <math.h>

int main ()
{
	float celsius,fahrenheit;
	scanf("%f" , &celsius);
	
	if(celsius >- 100 && celsius <= 100)
	fahrenheit = (celsius * 1.8) + 32;
	
	printf("%.2f\n" , fahrenheit);
	return 0;
	
}
