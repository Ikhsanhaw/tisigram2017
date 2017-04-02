 /*
Program 	 	 : B_Vocal.c
Deskripsi 	 	 : 
Author           : Ujang Wahyu 
Compiler         : Dev-C++ 5.11
Tanggal/Version  : 2016/ v1.0
Waktu pengerjaan :
*/
#include<stdio.h>
#include<stdbool.h>

int main(){
	
	char huruf;
	
	scanf("%c", &huruf);
	if((huruf=='A') || (huruf =='I') || (huruf=='U') ||(huruf =='E') ||(huruf=='O')){
		printf("True");
	}else{
		printf("False");
	}
	printf("\n");
	return 0;
}
