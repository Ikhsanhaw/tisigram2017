/*========================================================= 
Program : FarenheitTisigram_Reka.c  								
Nama      : REKA ALAMSYAH									
Version	  : 1.0																			
Compiler  : TDM-GCC 4.9.2 64-bit Release					
============================================================ */
#include <stdio.h>

int main(){
	float celcius, fahrenheit;
	
	scanf("%f",&celcius);
	fahrenheit=(celcius*1.8)+32;
	
	printf("%.2f\n",fahrenheit);
	
	return 0;
}

