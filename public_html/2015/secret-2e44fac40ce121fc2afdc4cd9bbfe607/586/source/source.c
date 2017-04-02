/*
Program 	 	 : K_CelciusF.c
Deskripsi 	 	 : 
Author           : Ujang Wahyu 
Compiler         : Dev-C++ 5.11
Tanggal/Version  : 2016/ v1.0
Waktu pengerjaan :
*/

#include <stdio.h>
int main (){
	
	float fahrenheit,celcius;

	scanf("%f", &celcius);
	fahrenheit=celcius*1.8+32;
	printf("%.2f\n",fahrenheit);

return 0;
}
