 /*
Program 	 	 : B_Vocal.c
Deskripsi 	 	 : 
Author           : Ujang Wahyu 
Compiler         : Dev-C++ 5.11
Tanggal/Version  : 2016/ v1.0
Waktu pengerjaan :
*/
#include <stdio.h>
int main(){
char huruf;
/* Algoritma */
	scanf("%c", &huruf);
	switch(huruf){
		case 'A' : printf("True\n"); break;
		case 'a' : printf("True\n"); break;
		case 'I' : printf("True\n"); break;
		case 'i' : printf("True\n"); break;
		case 'U' : printf("True\n"); break;
		case'u' :printf("True\n");break;
		case'E' :printf("True\n"); break;
		case'e' : printf("True\n"); break;
		case'O' : printf("True\n");break;
		case'o' : printf("True\n"); break;
		default : printf("False\n");break;
	}
return 0;
}

