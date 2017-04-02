/*========================================================= 
Program : Vokal_Tisigram.c  								
Deskripsi :			
Nama      : REKA ALAMSYAH									
Version	  : 1.0												
Tanggal   : 								
Compiler  : TDM-GCC 4.9.2 64-bit Release					
============================================================ */
#include <stdio.h>
#include <string.h>

int main(){
	char huruf;
	
	scanf("%c",&huruf);
	huruf=toupper(huruf);
	
	if(huruf == 'A' || huruf == 'I' || huruf == 'U' || huruf == 'E' || huruf == 'O'){
		printf("True\n");
	}else{
		printf("False\n");
	}
	
	return 0;
}

