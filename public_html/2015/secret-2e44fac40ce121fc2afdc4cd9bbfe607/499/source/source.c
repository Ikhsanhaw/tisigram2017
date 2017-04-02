/*====================================================================================================
*	Program 		: Tisigram-C.c
*	Deskripsi 		: SapaDunia
*	Nama 			: Hadiarto B
*	Tanggal/Versi 	: 24 Maret 2016, v01.0
*	Compiler		: Dev-C++ v5.1.0
*	Catatan			: 
====================================================================================================*/
#include<stdio.h>

int main(){
	char huruf;
	
	scanf("%c",&huruf);
	
	switch(huruf){
		case 'A' : printf("True\n");break;
		case 'a' : printf("True\n");break; 
		case 'I' : printf("True\n");break;
		case 'i' : printf("True\n");break;
		case 'U' : printf("True\n");break;
		case 'u' : printf("True\n");break;
		case 'E' : printf("True\n");break;
		case 'e' : printf("True\n");break;
		case 'O' : printf("True\n");break;
		case 'o' : printf("True\n");break;
		default : printf("False\n");break;
	}
	
	return 0;
}
