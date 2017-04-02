/*
Program 	 	 : _Fathin.c
Deskripsi 	 	 :
Author           : Muhammad Ridwan Fathin
Compiler         : Dev-C++ 5.7.1
Tanggal/Version  : 2016/ v1.0
Waktu pengerjaan :
*/

#include <stdio.h>
int main(){
char kar;
/* Algoritma */
	scanf("%c", &kar);
	switch(kar){
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


