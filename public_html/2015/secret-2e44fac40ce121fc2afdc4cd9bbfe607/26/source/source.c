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
	int x;
	scanf("%d",&x);
	switch(x%7){
		case 1 : printf("Kamis\n"); break;
		case 2 : printf("Jumat'\n"); break;
		case 3 : printf("Sabtu\n"); break;
		case 4 : printf("Minggu\n"); break;
		case 5 : printf("Senin\n"); break;
		case 6 :printf("Selasa\n");break;
		case 0 :printf("Rabu\n"); break;
	}
return 0;
}

