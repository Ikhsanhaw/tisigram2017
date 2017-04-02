/*
Program 	 	 : I_Menentukan_Hari.c
Deskripsi 	 	 : 
Author           : Ujang Wahyu 
Compiler         : Dev-C++ 5.11
Tanggal/Version  : 2016/ v1.0
Waktu pengerjaan :
*/

#include<stdio.h>

int main(){
	int hari;
	scanf("%d", &hari);
	
	switch(hari%7){
		case 1 : printf("Kamis");
			break;
		
		case 2 : printf("Jumat");
			break;
		
		case 3 : printf("Sabtu");
			break;
		
		case 4 : printf("Minggu");
			break;
		
		case 5 : printf("Senin");
			break;
		
		case 6 : printf("Selasa");
			break;
		
		case 0 : printf("Rabu");
			break;
		
	}
	printf("\n");
}
